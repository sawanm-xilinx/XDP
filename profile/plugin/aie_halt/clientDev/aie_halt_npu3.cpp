// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2024-2026 Advanced Micro Devices, Inc. All rights reserved

#define XDP_PLUGIN_SOURCE

#include "aie_halt_npu3.h"
#include "xdp/profile/database/database.h"
#include "xdp/profile/database/static_info/aie_util.h"
#include "xdp/profile/database/static_info/aie_constructs.h"
#include "xdp/profile/device/common/npu3/npu3_transaction.h"
#include "xdp/profile/plugin/vp_base/utility.h"
#include "xdp/profile/plugin/aie_base/generations/npu3_registers.h"

#include "core/common/device.h"
#include "core/common/message.h"
#include "core/common/api/xclbin_int.h"
#include "core/include/xclbin.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

extern "C" {
  #include <aie_codegen.h>
  #include <aie_codegen_inc/xaiemlgbl_params.h>
}

#ifdef _WIN32
# pragma warning ( disable : 4244 )
#endif

#define DEBUG_CONTROL1_DEBUG_HALT_CORE_EVENT0_LSB 16

namespace xdp {

  AIEHaltNPU3Impl::AIEHaltNPU3Impl(VPDatabase* dB)
    : AIEHaltImpl(dB)
  {
  }

#ifdef _WIN32
#pragma warning(push)
#pragma warning(disable: 4702)
#endif
  void AIEHaltNPU3Impl::updateDevice(void* hwCtxImpl)
  {
    //
    // Create and submit control code to halt all cores
    //
    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
                            "In AIEHaltNPU3Impl::updateDevice");

#if 0
    const xdp::aie::BaseFiletypeImpl *metadataReader = 
      (db->getStaticInfo()).getAIEmetadataReader(mDeviceId);
    if (!metadataReader) {
      xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT", 
        "Unable to get AIE metadata reader");
      return;
    }

    auto meta_config = metadataReader->getDriverConfig();
#else
    // Hardcoded NPU3 (AIE4/Medusa) driver config constants
    xdp::aie::driver_config meta_config {};
    meta_config.hw_gen             = XAIE_DEV_GEN_AIE4;  // 42
    meta_config.base_address       = 0;
    meta_config.column_shift       = 25;
    meta_config.row_shift          = 20;
    meta_config.num_rows           = 6;   // 1 shim + 1 mem + 4 AIE
    meta_config.num_columns        = 3;
    meta_config.shim_row           = 0;
    meta_config.mem_row_start      = 1;
    meta_config.mem_num_rows       = 1;
    meta_config.aie_tile_row_start = 2;
    meta_config.aie_tile_num_rows  = 4;
#endif

    XAie_Config cfg {
      meta_config.hw_gen,
      meta_config.base_address,
      meta_config.column_shift,
      meta_config.row_shift,
      meta_config.num_rows,
      meta_config.num_columns,
      meta_config.shim_row,
      meta_config.mem_row_start,
      meta_config.mem_num_rows,
      meta_config.aie_tile_row_start,
      meta_config.aie_tile_num_rows,
      {0} // PartProp
    };
    XAie_DevInst aieDevInst = {0};
    auto RC = XAie_CfgInitialize(&aieDevInst, &cfg);
    if (RC != XAIE_OK) {
      xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT", "AIE Driver Initialization Failed.");
      return;
    }

    // Get partition columns
    uint8_t startCol = 0;
    //uint8_t numCols = meta_config.num_columns;
    uint8_t numCols = 0;
    boost::property_tree::ptree aiePartitionPt = xdp::aie::getAIEPartitionInfo(hwCtxImpl);
    for (const auto& e : aiePartitionPt) {
      startCol = e.second.get<uint64_t>("start_col");
      numCols  = e.second.get<uint64_t>("num_cols");
      // Currently, assuming only one Hw Context is alive at a time
      break;
    }
    uint8_t startRow = meta_config.aie_tile_row_start;
    uint8_t numRows = meta_config.aie_tile_num_rows;

    std::stringstream msg;
    msg << " Set AIE Core breakpoint at Lock Acquire Req Instr, Start col "
        << +startCol << ", Num col " << +numCols << std::endl;
    xrt_core::message::send(xrt_core::message::severity_level::info, "XRT", msg.str());

    std::string tranxName = "AieHalt";
    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
      "Starting transaction " + tranxName);

    // Initialize transaction
    std::unique_ptr<aie::NPU3Transaction> tranxHandler = std::make_unique<aie::NPU3Transaction>(); 
    if (!tranxHandler->initializeTransaction(&aieDevInst, tranxName))
      return;

    // Initial break on Event 82: Lock Acquire instruction
    constexpr uint32_t AIE_EVENT_INSTR_LOCK_ACQ_REQ = 0x52;
    uint32_t dbg_ctrl_1_reg = AIE_EVENT_INSTR_LOCK_ACQ_REQ << DEBUG_CONTROL1_DEBUG_HALT_CORE_EVENT0_LSB;
    
    for (uint8_t col = startCol; col < (startCol + numCols); col++) {
      for (uint8_t row = startRow; row < (startRow + numRows); row++) {
        auto tileOffset = XAie_GetTileAddr(&aieDevInst, row, col);
        if (aie::isDebugVerbosity()) {
          std::cout << "Writing debug halt control at tile (" << +col << ", " << +row << ") - writing 0x"
                    << std::hex << dbg_ctrl_1_reg << " to 0x" << tileOffset << std::endl;
        }
        XAie_Write32(&aieDevInst, tileOffset + npu3::cm_debug_control1, dbg_ctrl_1_reg);
        //XAie_CoreDebugHalt(&aieDevInst, XAie_TileLoc(col, row));
      }
    }

    if (!tranxHandler->submitTransaction(&aieDevInst, mHwContext)) {
      xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                              "AIE Halt control transaction did not complete successfully.");
      return;
    }
    xrt_core::message::send(xrt_core::message::severity_level::info, "XRT", 
                            "Successfully scheduled AIE Halt.");
  }
#ifdef _WIN32
#pragma warning(pop)
#endif

  void AIEHaltNPU3Impl::finishflushDevice(void* /*hwCtxImpl*/)
  {
  }
}
