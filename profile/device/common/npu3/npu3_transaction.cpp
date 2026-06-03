// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2025-2026 Advanced Micro Devices, Inc. All rights reserved

#include <string>
#include <vector>

#include "npu3_transaction.h"
#include "core/common/message.h"
#include "xrt/experimental/xrt_elf.h"
#include "xrt/experimental/xrt_ext.h"
#include "xrt/xrt_hw_context.h"
#include "xrt/xrt_kernel.h"

#include "core/common/aiebu/src/cpp/include/aiebu/aiebu_assembler.h"
#include "core/common/aiebu/src/cpp/include/aiebu/aiebu_error.h"

#include <filesystem>
#include <fstream>
#include <stdexcept>

extern "C" {
    #include <aie_codegen.h>
    #include <aie_codegen_inc/xaiegbl_params.h>
}

namespace xdp::aie {
    using severity_level = xrt_core::message::severity_level;

    //----------------------------------------------------------------------
    // NPU3Transaction::fullElfKernelName
    // Return the unique kernel name for this transaction's full ELF. Multiple
    // XDP ELFs are add_config'd to the same hw_context, so the name must be
    // unique per ELF to avoid a kernel-name collision.
    //----------------------------------------------------------------------
    std::string NPU3Transaction::fullElfKernelName(const std::string& instanceId)
    {
      return std::string("XDP_KERNEL_") + instanceId;
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::fullElfKernelHandle
    // Return the name/handle of the full ELF kernel (kernelName:instanceName).
    //----------------------------------------------------------------------
    std::string NPU3Transaction::fullElfKernelHandle(const std::string& instanceId)
    {
      return fullElfKernelName(instanceId) + ":" + instanceId;
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::loadXdpKernelFullElfConfig
    // Build the xdp_kernel_full_elf config JSON in memory for AIEBU aie4_config.
    // Sets instance id -> instanceId, ctrl_code_file -> ./<asmBasename>.
    //----------------------------------------------------------------------
    std::vector<char> NPU3Transaction::loadXdpKernelFullElfConfig(const std::string& asmFileName,
                                                                  const std::string& instanceId)
    {
      const std::filesystem::path asmPath{asmFileName};
      const std::string asmRel =
          std::string("./") + asmPath.filename().generic_string();

      const std::string jsonText =
          "{\n"
          "    \"xrt-kernels\": [\n"
          "        {\n"
          "            \"name\" : \"" + fullElfKernelName(instanceId) + "\",\n"
          "            \"arguments\" : [],\n"
          "            \"instance\" : [\n"
          "                {\n"
          "                \"id\" : \"" + instanceId + "\",\n"
          "                \"ctrl_code_file\" : \"" + asmRel + "\"\n"
          "                }\n"
          "            ]\n"
          "        }\n"
          "    ]\n"
          "}\n";

      return {jsonText.begin(), jsonText.end()};
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::initializeTransaction
    // Begin XAIE control-code capture for this transaction (ASM file + job).
    //----------------------------------------------------------------------
    bool NPU3Transaction::initializeTransaction(XAie_DevInst* aieDevInst, std::string tName) 
    {
        setTransactionName(tName);
        xrt_core::message::send(severity_level::debug, "XRT",
            "Writing to New Control Code ASM file: " + getAsmFileName());

        try {
            // NOTE: XAIE_IO_BACKEND_CONTROLCODE is the default
            // XAie_SetIOBackend(aieDevInst, XAIE_IO_BACKEND_CONTROLCODE);
            XAie_OpenControlCodeFile(aieDevInst, getAsmFileName().c_str(), 8192);
            XAie_StartNewJob(aieDevInst, XAIE_START_JOB);
            return true;
        }
        catch (const std::exception& e) {
            xrt_core::message::send(severity_level::error, "XRT",
                "Error in generating asm File: " + getAsmFileName() + "\n" + e.what());
            return false;
        }
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::completeASM
    // Finalize control-code ASM generation (end job/page, close file).
    //----------------------------------------------------------------------
    bool NPU3Transaction::completeASM(XAie_DevInst* aieDevInst)
    {
        try {
            XAie_EndJob(aieDevInst);
            XAie_EndPage(aieDevInst);
            XAie_CloseControlCodeFile(aieDevInst);
        }
        catch (const std::exception& e) {
            xrt_core::message::send(severity_level::error, "XRT",
                "Error in generating ASM file: " + getAsmFileName() + "\n" + e.what());
            return false;
        }
        return true;
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::generateELF
    // Run AIEBU aie4_config to produce full config ELF from ASM + JSON on disk.
    //----------------------------------------------------------------------
    bool NPU3Transaction::generateELF()
    {
        try {
            const std::string asmFileName = getAsmFileName();
            if (!std::filesystem::exists(asmFileName))
                throw std::runtime_error("file:" + asmFileName + " not found\n");

            xrt_core::message::send(severity_level::debug, "XRT",
                "AIEBU control ASM: " + asmFileName);

            const std::vector<char> configJson =
                loadXdpKernelFullElfConfig(asmFileName, m_transactionName);

            const std::filesystem::path asmPath{asmFileName};
            const std::string asmDir =
                std::filesystem::absolute(asmPath.parent_path()).generic_string();
            const std::vector<std::string> libPaths{std::string("."), asmDir};
            const std::vector<std::string> aiebuFlags{"disabledump"};
            const std::vector<char> emptyCodeBuf;
            const aiebu::aiebu_assembler assembler(aiebu::aiebu_assembler::buffer_type::aie4_config,
                                                   emptyCodeBuf,
                                                   aiebuFlags,
                                                   libPaths,
                                                   configJson);

            const auto elfBytes = assembler.get_elf();
            xrt_core::message::send(severity_level::debug, "XRT",
                "AIEBU output ELF bytes: " + std::to_string(elfBytes.size()));

            std::ofstream outElf(getElfFileName(),
                                  std::ios::binary | std::ios::out | std::ios::trunc);
            outElf.write(elfBytes.data(), static_cast<std::streamsize>(elfBytes.size()));
        }
        catch (const aiebu::error& e) {
            xrt_core::message::send(severity_level::error, "XRT",
                "AIEBU error generating Elf file: " + getElfFileName() + "\n" + e.what());
            return false;
        }
        catch (const std::exception& e) {
            xrt_core::message::send(severity_level::error, "XRT",
                "Error in generating Elf file: " + getElfFileName() + "\n" + e.what());
            return false;
        }
        return true;
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::submitELF
    // Load ELF from disk, add_config + run XDP_KERNEL on hw_context.
    // Partition column count in .note.xrt.configuration matches the hw context via
    // AIEBU / metadata; no runtime patch of the note is required.
    //----------------------------------------------------------------------
    bool NPU3Transaction::submitELF(xrt::hw_context hwContext) 
    {
        xrt_core::message::send(severity_level::debug, "XRT",
            "Start New Control Code Elf");

        xrt::elf profileElf;
        try {
            profileElf = xrt::elf(getElfFileName());
        }
        catch (...) {
            xrt_core::message::send(severity_level::warning, "XRT",
                "Failed to load " + getElfFileName() + ". Cannot configure AIE to profile.");
            return false;
        }

        xrt_core::message::send(severity_level::debug, "XRT", "Elf Object Created");
        xrt::kernel kernel;
        try {
            hwContext.add_config(profileElf);
            kernel = xrt::ext::kernel{hwContext, fullElfKernelHandle(m_transactionName)};
        }
        catch (const std::exception& e) {
            xrt_core::message::send(severity_level::warning, "XRT",
                std::string("Failed to register ") + getElfFileName() + " with HW Context: " + e.what());
            return false;
        }

        xrt_core::message::send(severity_level::debug, "XRT", "XDP_KERNEL created");
        xrt::run run{kernel};

        xrt_core::message::send(severity_level::debug, "XRT", "Kernel run created");
        run.start();

        xrt_core::message::send(severity_level::debug, "XRT", "Run started");
        run.wait2();

        xrt_core::message::send(severity_level::debug, "XRT", "Wait done!");
        return true;
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::getGroupID
    // Return argument buffer group id for the resolved XDP kernel on hw_context.
    //----------------------------------------------------------------------
    int NPU3Transaction::getGroupID(int id, xrt::hw_context hwContext)
    {
        xrt::kernel kernel = xrt::ext::kernel(hwContext, fullElfKernelHandle(m_transactionName));
        return kernel.group_id(id);
    }

    //----------------------------------------------------------------------
    // NPU3Transaction::submitTransaction
    // End ASM, build ELF, submit and run control transaction on hw_context.
    //----------------------------------------------------------------------
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
