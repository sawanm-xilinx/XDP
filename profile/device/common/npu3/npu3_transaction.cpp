// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2025 Advanced Micro Devices, Inc. All rights reserved

#include <sstream>
#include <string>
#include <cstdint>
#include <cstring>
#include <vector>

#include "npu3_transaction.h"
#include "core/common/message.h"
#include "core/common/api/hw_context_int.h"
#include "xrt/experimental/xrt_elf.h"
#include "xrt/experimental/xrt_ext.h"
#include "xrt/experimental/xrt_module.h"
#include "xrt/xrt_hw_context.h"
#include "xrt/xrt_kernel.h"

#include "core/common/aiebu/src/cpp/include/aiebu/aiebu_assembler.h"
#include "core/common/aiebu/src/cpp/include/aiebu/aiebu_error.h"

#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <fstream>

extern "C" {
    #include <aie_codegen.h>
    #include <aie_codegen_inc/xaiegbl_params.h>
}

namespace xdp::aie {
    using severity_level = xrt_core::message::severity_level;

    // Load deployer-supplied xdp_kernel_full_elf.json (e.g. from XOAH xdp_xclbin/) and
    // substitute __XDP_ASM_PATH__ / __XDP_INSTANCE_ID__. Searched: next to the .asm file,
    // then ./ (read falls back to readfile on disk when file_artifact is empty).
    static std::vector<char> load_xdp_kernel_full_elf_config(const std::string& asmFileName,
                                                             const std::string& instance_id)
    {
      const std::filesystem::path asm_path{asmFileName};
      const std::string asm_abs = std::filesystem::absolute(asm_path).generic_string();

      const std::vector<std::filesystem::path> candidates = {
        asm_path.parent_path() / "xdp_kernel_full_elf.json",
        std::filesystem::path{"xdp_kernel_full_elf.json"},
      };

      std::string json_text;
      for (const auto& c : candidates) {
        if (!std::filesystem::exists(c))
          continue;
        std::ifstream jin(c.string(), std::ios::binary);
        if (!jin)
          continue;
        jin.seekg(0, std::ios::end);
        const auto sz = jin.tellg();
        if (sz <= std::streampos(0))
          continue;
        jin.seekg(0, std::ios::beg);
        json_text.resize(static_cast<std::size_t>(sz));
        jin.read(json_text.data(), static_cast<std::streamsize>(sz));
        if (static_cast<std::size_t>(jin.gcount()) != json_text.size())
          continue;
        break;
      }

      if (json_text.empty())
        throw std::runtime_error("xdp_kernel_full_elf.json not found (searched next to asm and ./)");

      static constexpr char kAsmPlaceholder[] = "__XDP_ASM_PATH__";
      auto pos = json_text.find(kAsmPlaceholder);
      if (pos == std::string::npos)
        throw std::runtime_error("xdp_kernel_full_elf.json must contain " + std::string(kAsmPlaceholder));

      json_text.replace(pos, sizeof(kAsmPlaceholder) - 1, asm_abs);

      static constexpr char kInstPlaceholder[] = "__XDP_INSTANCE_ID__";
      pos = json_text.find(kInstPlaceholder);
      if (pos == std::string::npos)
        throw std::runtime_error("xdp_kernel_full_elf.json must contain " + std::string(kInstPlaceholder));

      json_text.replace(pos, sizeof(kInstPlaceholder) - 1, instance_id);
      return {json_text.begin(), json_text.end()};
    }

    bool NPU3Transaction::initializeTransaction(XAie_DevInst* aieDevInst, std::string tName) 
    {
        setTransactionName(tName);
        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
            "Writing to New Control Code ASM file: " + getAsmFileName());

        try {
            // NOTE: XAIE_IO_BACKEND_CONTROLCODE is the default
            // XAie_SetIOBackend(aieDevInst, XAIE_IO_BACKEND_CONTROLCODE);
            XAie_OpenControlCodeFile(aieDevInst, getAsmFileName().c_str(), 8192);
            XAie_StartNewJob(aieDevInst, XAIE_START_JOB);
            return true;
        }
        catch(const std::exception& e) {
            xrt_core::message::send(xrt_core::message::severity_level::error, "XRT",
                "Error in generating asm File: " + getAsmFileName() + "\n" + e.what());
        }
        xrt_core::message::send(severity_level::warning, "XRT", "AIE Transaction Initialization Failed.");
        return false;
    }

    bool NPU3Transaction::completeASM(XAie_DevInst* aieDevInst)
    {
        //
        // 1. End generation of ASM file
        //
        try {
            XAie_EndJob(aieDevInst);
            XAie_EndPage(aieDevInst);
            XAie_CloseControlCodeFile(aieDevInst);
        }
        catch(const std::exception& e) {
            xrt_core::message::send(xrt_core::message::severity_level::error, "XRT",
                "Error in generating ASM file: " + getAsmFileName() + "\n" + e.what());
            return false;
        }
        return true;
    }

    bool NPU3Transaction::generateELF()
    {
        //
        // 2. Convert ASM to full config ELF (aie4_config + xdp_kernel_full_elf.json)
        //
        try {
#if 1
            const std::string asmFileName = getAsmFileName();
            if (!std::filesystem::exists(asmFileName))
                throw std::runtime_error("file:" + asmFileName + " not found\n");

            std::cout << "Open file " << asmFileName << std::endl;

            const std::vector<char> config_json =
                load_xdp_kernel_full_elf_config(asmFileName, m_transactionName);
            aiebu::file_artifact artifact;
            const std::vector<std::string> flags{"disabledump"};
            const aiebu::aiebu_assembler as(aiebu::aiebu_assembler::buffer_type::aie4_config,
                                            config_json, artifact, flags);

            const auto e = as.get_elf();
            std::cout << "Elf size:" << e.size() << std::endl;

            std::ofstream outElf(getElfFileName(),
                                  std::ios::binary | std::ios::out | std::ios::trunc);
            outElf.write(e.data(), static_cast<std::streamsize>(e.size()));
#else
            auto check1 = std::getenv("AIEBU_REPO");
            auto check2 = std::getenv("PYTHONPATH");
            if ((check1 == nullptr) || (check2 == nullptr)) {
                xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                  "Please define AIEBU_REPO and PYTHONPATH so elf generation can work.");
                return false;
            }

            std::stringstream command;
            command << "${AIEBU_REPO}/src/python/aiebu/control_asm_disasm.py -t aie4 "
                    << getAsmFileName() << " -o " << getElfFileName();
            xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
                                    "Generating ELF using: " + command.str());
            if (system(command.str().c_str())) {
                xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", 
                                        "Elf generation failed");
                return false;
            }
#endif
        }
        catch (const aiebu::error& e) {
            xrt_core::message::send(xrt_core::message::severity_level::error, "XRT",
                "AIEBU error generating Elf file: " + getElfFileName() + "\n" + e.what());
            return false;
        }
        catch(const std::exception& e) {
            xrt_core::message::send(xrt_core::message::severity_level::error, "XRT",
                "Error in generating Elf file: " + getElfFileName() + "\n" + e.what());
            return false;
        }
        return true;
    }

    bool NPU3Transaction::submitELF(xrt::hw_context hwContext) 
    {
        //
        // 3. Submit ELF to microcontroller
        //
        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", 
            "Start New Control Code Elf");

        bool full_elf_flow = false;
        try {
            full_elf_flow = xrt_core::hw_context_int::get_elf_flow(hwContext);
        }
        catch (const std::exception& e) {
            xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
                std::string("submitELF: get_elf_flow failed; using non-full-ELF path: ") + e.what());
        }

        xrt::elf profileElf;
        try {
            profileElf = xrt::elf(getElfFileName());
        } 
        catch (...) {
            xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
            "Failed to load " + getElfFileName() + ". Cannot configure AIE to profile.");
            return false;
        }

        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", "Elf Object Created");
        xrt::kernel kernel;

        if (full_elf_flow) {
            // Full ELF flow: add_config() registers this ELF's kernels on the context,
            // then xrt::ext::kernel(hwContext, name) resolves them (see xrt_kernel.cpp).
            try {
                hwContext.add_config(profileElf);
                const std::string kernelName = "XDP_KERNEL:{" + m_transactionName + "}";
                kernel = xrt::ext::kernel{hwContext, kernelName};
            }
            catch (const std::exception& e) {
                xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                    std::string("Failed to register ") + getElfFileName() + " with HW Context: " + e.what());
                return false;
            }
        } else {
            // Partial ELF flow: use module with xclbin-backed kernel
            xrt::module mod{profileElf};
            xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", "Module Created");
            try {
                kernel = xrt::ext::kernel{hwContext, mod, "XDP_KERNEL:{IPUV1CNN}"};
            } catch (...) {
                xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                    "XDP_KERNEL not found in HW Context. Unable to run " + getElfFileName());
                return false;
            }
        }

        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", "XDP_KERNEL created");
        xrt::run run{kernel};

        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", "Kernel run created");
        run.start();

        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", "Run started");
        run.wait2();

        xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT", "Wait done!");
        return true;
    }

    int NPU3Transaction::getGroupID(int id, xrt::hw_context hwContext)
    {
        xrt::kernel kernel;
        if (xrt_core::hw_context_int::get_elf_flow(hwContext))
            kernel = xrt::ext::kernel(hwContext,
                std::string("XDP_KERNEL:{") + m_transactionName + "}");
        else
            kernel = xrt::kernel(hwContext, "XDP_KERNEL");
        return kernel.group_id(id);
    }

    bool NPU3Transaction::submitTransaction(XAie_DevInst* aieDevInst, xrt::hw_context hwContext) 
    {
        if (!completeASM(aieDevInst))
            return false;
        if (!generateELF())
            return false;
        if (!submitELF(hwContext))
            return false;
        return true;
    }
}
