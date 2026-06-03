// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2025 Advanced Micro Devices, Inc. All rights reserved

#ifndef NPU3_TRANSACTION_DOT_H
#define NPU3_TRANSACTION_DOT_H

#include <cstdint>
#include <string>
#include <vector>

#include "xrt/xrt_hw_context.h"
#include "xrt/xrt_kernel.h"

extern "C" {
#include <aie_codegen.h>
#include <aie_codegen_inc/xaiegbl_params.h>
}

namespace xdp::aie {
  class NPU3Transaction {
    public: 
      NPU3Transaction() {};
      bool initializeTransaction(XAie_DevInst* aieDevInst, std::string tName);
      bool submitTransaction(XAie_DevInst* aieDevInst, xrt::hw_context hwContext);
      bool completeASM(XAie_DevInst* aieDevInst);
      bool generateELF();
      bool submitELF(xrt::hw_context hwContext);
      
      void setTransactionName(std::string newTransactionName) {m_transactionName = newTransactionName;}
      std::string getAsmFileName() { return m_transactionName + ".asm"; }
      std::string getElfFileName() { return m_transactionName + ".elf"; }
      int getGroupID(int id, xrt::hw_context hwContext);

    private:
      static std::string fullElfKernelName(const std::string& instanceId);
      static std::string fullElfKernelHandle(const std::string& instanceId);
      static std::vector<char> loadXdpKernelFullElfConfig(const std::string& asmFileName,
                                                        const std::string& instanceId);

      std::string m_transactionName;
      std::vector<uint8_t> m_columns;
      std::vector<uint8_t> m_rows;
      std::vector<uint64_t> m_offsets;
      std::vector<uint32_t> m_values;
  };

} // namespace xdp::aie

#endif