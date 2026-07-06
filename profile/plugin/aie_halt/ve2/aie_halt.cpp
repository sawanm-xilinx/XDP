/**
 * Copyright (C) 2025 Advanced Micro Devices, Inc. - All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#define XDP_PLUGIN_SOURCE

#include "core/common/api/hw_context_int.h"
#include "core/common/device.h"
#include "core/common/message.h"

#include "core/include/xrt/experimental/xrt_elf.h"
#include "core/include/xrt/experimental/xrt_ext.h"
#include "core/include/xrt/experimental/xrt_module.h"

#include "core/include/xrt/xrt_kernel.h"

#include "xdp/profile/plugin/aie_halt/ve2/aie_halt.h"
#include "xdp/profile/plugin/vp_base/utility.h"

namespace xdp {

  AIEHaltVE2Impl::AIEHaltVE2Impl(VPDatabase*dB)
    : AIEHaltImpl(dB)
  {
  }

  void AIEHaltVE2Impl::updateDevice(void* hwCtxImpl)
  {
    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
              "In AIEHaltVE2Impl::updateDevice");

    std::string inputCtrlCode = xrt_core::config::get_aie_halt_settings_control_code();
    if (inputCtrlCode.empty()) {
      xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
                "No input control code file for AIE Halt provided. Defaulting to \"aieHalt4x4.elf\".");
      inputCtrlCode = "aieHalt4x4.elf";
    }
    
    xrt::hw_context hwContext = xrt_core::hw_context_int::create_hw_context_from_implementation(hwCtxImpl);

    xrt::elf haltElf;
    try {
      haltElf = xrt::elf(inputCtrlCode);
    } catch (...) {
      std::string msg = "Failed to load " + inputCtrlCode + ". Cannot configure AIE to halt.";
      xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT", msg);
      return;
    }

    // Full-ELF flow registers the ELF via add_config() and opens the kernel by
    // name; the xclbin flow uses an explicit xrt::module.
    bool isFullELFFlow = false;
    try {
      isFullELFFlow = xrt_core::hw_context_int::get_elf_flow(hwContext);
    } catch (const std::exception& e) {
      xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                std::string("Failed to query ELF flow for AIE halt, assuming xclbin flow: ") + e.what());
    }

    xrt::kernel krnl;
    try {
      if (isFullELFFlow) {
        hwContext.add_config(haltElf);
        krnl = xrt::ext::kernel{hwContext, "XDP_KERNEL:IPUV1CNN"};
      }
      else {
        xrt::module mod{haltElf};
        krnl = xrt::ext::kernel{hwContext, mod, "XDP_KERNEL:{IPUV1CNN}"};
      }
    } catch (...) {
      xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                "XDP_KERNEL not found in HW Context. Cannot configure AIE to halt.");
      return;
    }

    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
              "In AIEHaltVE2Impl New Kernel Object for XDP_KERNEL created for running control code Elf");      

    xrt::run rn{krnl};
    rn.start();
    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
              "In AIEHaltVE2Impl run start, going to wait");  

    rn.wait2();
  }

  void AIEHaltVE2Impl::finishflushDevice(void* /*hwCtxImpl*/)
  {
  }
}
