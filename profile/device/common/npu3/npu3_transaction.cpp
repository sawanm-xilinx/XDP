// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2025-2026 Advanced Micro Devices, Inc. All rights reserved

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

    namespace {

    constexpr unsigned char kElfMag[] = {0x7f, 'E', 'L', 'F'};
    constexpr int kEI_CLASS = 4;
    constexpr int kEI_DATA = 5;
    constexpr unsigned char kELFCLASS32 = 1;
    constexpr unsigned char kELFCLASS64 = 2;
    constexpr unsigned char kELFDATA2LSB = 1;

    static std::uint16_t
    read_le16(const std::uint8_t* p)
    {
      return static_cast<std::uint16_t>(p[0])
        | (static_cast<std::uint16_t>(p[1]) << 8);
    }

    static std::uint32_t
    read_le32(const std::uint8_t* p)
    {
      return static_cast<std::uint32_t>(p[0])
        | (static_cast<std::uint32_t>(p[1]) << 8)
        | (static_cast<std::uint32_t>(p[2]) << 16)
        | (static_cast<std::uint32_t>(p[3]) << 24);
    }

    static std::uint64_t
    read_le64(const std::uint8_t* p)
    {
      const std::uint64_t lo = read_le32(p);
      const std::uint64_t hi = read_le32(p + 4);
      return lo | (hi << 32);
    }

    static void
    write_le32(std::uint8_t* p, std::uint32_t v)
    {
      p[0] = static_cast<std::uint8_t>(v & 0xff);
      p[1] = static_cast<std::uint8_t>((v >> 8) & 0xff);
      p[2] = static_cast<std::uint8_t>((v >> 16) & 0xff);
      p[3] = static_cast<std::uint8_t>((v >> 24) & 0xff);
    }

    static std::size_t
    align4(std::size_t n)
    {
      return (n + 3) & ~std::size_t{3};
    }

    // AIEBU emits ELF32 (see aiebu elf_writer). First uint32 of first note in
    // .note.xrt.configuration must match hw_context partition columns for add_config().
    static bool
    patch_elf_xrt_partition_note(std::vector<std::uint8_t>& img, std::uint32_t ncol)
    {
      if (img.size() < 52)
        return false;
      const std::uint8_t* e = img.data();
      if (std::memcmp(e, kElfMag, sizeof kElfMag) != 0)
        return false;
      if (e[kEI_DATA] != kELFDATA2LSB)
        return false;

      std::uint64_t e_shoff = 0;
      std::uint32_t e_shentsize = 0;
      std::uint16_t e_shnum = 0;
      std::uint16_t e_shstrndx = 0;
      const unsigned char elf_class = e[kEI_CLASS];

      if (elf_class == kELFCLASS32) {
        e_shoff = read_le32(e + 32);
        e_shentsize = read_le16(e + 46);
        e_shnum = read_le16(e + 48);
        e_shstrndx = read_le16(e + 50);
        if (e_shentsize < 40)
          return false;
      }
      else if (elf_class == kELFCLASS64) {
        if (img.size() < 64)
          return false;
        e_shoff = read_le64(e + 40);
        e_shentsize = read_le16(e + 58);
        e_shnum = read_le16(e + 60);
        e_shstrndx = read_le16(e + 62);
        if (e_shentsize < 64)
          return false;
      }
      else {
        return false;
      }

      if (e_shnum == 0 || e_shstrndx >= e_shnum)
        return false;
      const std::uint64_t sh_bytes =
          static_cast<std::uint64_t>(e_shentsize) * static_cast<std::uint64_t>(e_shnum);
      if (e_shoff > img.size() || sh_bytes > img.size()
          || e_shoff + sh_bytes > img.size())
        return false;

      const std::uint8_t* shstr_hdr = img.data() + e_shoff
          + static_cast<std::size_t>(e_shstrndx) * e_shentsize;
      std::uint64_t shstr_off = 0;
      std::uint64_t shstr_sz = 0;
      if (elf_class == kELFCLASS32) {
        shstr_off = read_le32(shstr_hdr + 16);
        shstr_sz = read_le32(shstr_hdr + 20);
      }
      else {
        shstr_off = read_le64(shstr_hdr + 24);
        shstr_sz = read_le64(shstr_hdr + 32);
      }
      if (shstr_off + shstr_sz > img.size())
        return false;
      const char* shstrtab = reinterpret_cast<const char*>(img.data() + shstr_off);

      std::uint64_t note_sec_off = 0;
      std::uint64_t note_sec_sz = 0;
      for (std::uint16_t i = 0; i < e_shnum; ++i) {
        const std::uint8_t* sh = img.data() + e_shoff + static_cast<std::size_t>(i) * e_shentsize;
        const std::uint32_t sh_name = read_le32(sh);
        if (static_cast<std::uint64_t>(sh_name) >= shstr_sz)
          continue;
        if (std::strcmp(shstrtab + sh_name, ".note.xrt.configuration") != 0)
          continue;
        if (elf_class == kELFCLASS32) {
          note_sec_off = read_le32(sh + 16);
          note_sec_sz = read_le32(sh + 20);
        }
        else {
          note_sec_off = read_le64(sh + 24);
          note_sec_sz = read_le64(sh + 32);
        }
        break;
      }
      if (note_sec_sz == 0 || note_sec_off + note_sec_sz > img.size())
        return false;

      const std::uint32_t namesz = read_le32(img.data() + note_sec_off);
      const std::uint32_t descsz = read_le32(img.data() + note_sec_off + 4);
      const std::size_t desc_off =
          static_cast<std::size_t>(note_sec_off) + 12u + align4(namesz);
      if (descsz < sizeof(std::uint32_t) || desc_off + sizeof(std::uint32_t) > img.size())
        return false;
      write_le32(img.data() + desc_off, ncol);
      return true;
    }

    static bool
    read_elf_file(const std::string& path, std::vector<std::uint8_t>& out)
    {
      std::ifstream in(path, std::ios::binary | std::ios::ate);
      if (!in)
        return false;
      const auto sz = in.tellg();
      if (sz <= std::streampos(0))
        return false;
      in.seekg(0, std::ios::beg);
      out.resize(static_cast<std::size_t>(sz));
      in.read(reinterpret_cast<char*>(out.data()), static_cast<std::streamsize>(sz));
      return static_cast<std::size_t>(in.gcount()) == out.size();
    }

    } // namespace

    // Load deployer-supplied xdp_kernel_full_elf.json (e.g. XOAH xdp_xclbin/) for AIEBU
    // aie4_config. Optional placeholders:
    //   __XDP_ASM_PATH__      -> "./<asmBasename>" for ctrl_code_file (resolved via libpaths)
    //   __XDP_INSTANCE_ID__   -> m_transactionName (JSON "id"; full-ELF lookup is "XDP_KERNEL:"+id, see submitELF)
    static std::vector<char> load_xdp_kernel_full_elf_config(const std::string& asmFileName,
                                                             const std::string& instance_id)
    {
      const std::filesystem::path asm_path{asmFileName};
      const std::string asm_rel =
          std::string("./") + asm_path.filename().generic_string();

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
      if (auto pos = json_text.find(kAsmPlaceholder); pos != std::string::npos)
        json_text.replace(pos, sizeof(kAsmPlaceholder) - 1, asm_rel);

      static constexpr char kInstPlaceholder[] = "__XDP_INSTANCE_ID__";
      if (auto pos = json_text.find(kInstPlaceholder); pos != std::string::npos)
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
        // 2. Convert ASM to full config ELF 
        //    (aie4_config + xdp_kernel_full_elf.json)
        //
        try {
            const std::string asmFileName = getAsmFileName();
            if (!std::filesystem::exists(asmFileName))
                throw std::runtime_error("file:" + asmFileName + " not found\n");

            std::cout << "Open file " << asmFileName << std::endl;

            const std::vector<char> config_json =
                load_xdp_kernel_full_elf_config(asmFileName, m_transactionName);

            const std::filesystem::path asm_path{asmFileName};
            const std::string asm_dir =
                std::filesystem::absolute(asm_path.parent_path()).generic_string();
            const std::vector<std::string> libpaths{std::string("."), asm_dir};
            const std::vector<std::string> aiebu_flags{"disabledump"};
            const std::vector<char> empty_code_buf;
            // 5-arg ctor: (type, empty buffer, flags->libs slot, libpaths, config json)
            const aiebu::aiebu_assembler as(aiebu::aiebu_assembler::buffer_type::aie4_config,
                                            empty_code_buf,
                                            aiebu_flags,
                                            libpaths,
                                            config_json);

            const auto e = as.get_elf();
            std::cout << "Elf size:" << e.size() << std::endl;

            std::ofstream outElf(getElfFileName(),
                                  std::ios::binary | std::ios::out | std::ios::trunc);
            outElf.write(e.data(), static_cast<std::streamsize>(e.size()));
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

        std::vector<std::uint8_t> elf_image;
        bool load_from_buffer = false;
        if (full_elf_flow) {
            const auto ctx_cols =
                static_cast<std::uint32_t>(xrt_core::hw_context_int::get_partition_size(hwContext));
            if (ctx_cols != 0) {
                if (!read_elf_file(getElfFileName(), elf_image)) {
                    xrt_core::message::send(xrt_core::message::severity_level::warning, "XRT",
                        "Failed to read " + getElfFileName() + ". Cannot configure AIE to profile.");
                    return false;
                }
                if (patch_elf_xrt_partition_note(elf_image, ctx_cols)) {
                    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
                        std::string("Control ELF .note.xrt.configuration partition columns set to ")
                            + std::to_string(ctx_cols) + " to match hw_context");
                }
                else {
                    xrt_core::message::send(xrt_core::message::severity_level::debug, "XRT",
                        "Could not patch .note.xrt.configuration; add_config may fail if partition "
                        "size mismatches hw_context");
                }
                load_from_buffer = true;
            }
        }

        xrt::elf profileElf;
        try {
            if (load_from_buffer)
                profileElf = xrt::elf(elf_image.data(), elf_image.size());
            else
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
                // AIEBU symtab uses kernel + JSON instance id with no braces; xrt::elf::get_ctrlcode_id
                // forms the map key as kernel_name + subkernel_name after removing the first ':' only.
                const std::string kernelName = std::string("XDP_KERNEL:") + m_transactionName;
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
                std::string("XDP_KERNEL:") + m_transactionName);
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
