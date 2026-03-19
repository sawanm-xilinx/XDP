// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2024-2026 Advanced Micro Devices, Inc. All rights reserved

#ifndef XDP_PLUGIN_AIE_HALT_NPU3_IMPL_H
#define XDP_PLUGIN_AIE_HALT_NPU3_IMPL_H

#include "xdp/config.h"
#include "xdp/profile/plugin/aie_halt/aie_halt_impl.h"

namespace xdp {

  class AIEHaltNPU3Impl : public AIEHaltImpl
  {

    public :
      explicit AIEHaltNPU3Impl(VPDatabase* dB);

      ~AIEHaltNPU3Impl() override = default;

      AIEHaltNPU3Impl(const AIEHaltNPU3Impl&) = delete;
      AIEHaltNPU3Impl(AIEHaltNPU3Impl&&)      = delete;

      AIEHaltNPU3Impl& operator=(const AIEHaltNPU3Impl&) = delete;
      AIEHaltNPU3Impl& operator=(AIEHaltNPU3Impl&&)      = delete;

      void updateDevice(void* hwCtxImpl) override;
      void finishflushDevice(void* hwCtxImpl) override;
  };

}

#endif