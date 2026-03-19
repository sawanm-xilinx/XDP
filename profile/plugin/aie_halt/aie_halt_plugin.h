// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2024-2026 Advanced Micro Devices, Inc. All rights reserved

#ifndef XDP_AIE_HALT_PLUGIN_H
#define XDP_AIE_HALT_PLUGIN_H

#include "xdp/profile/plugin/aie_halt/aie_halt_impl.h"
#include "xdp/profile/plugin/vp_base/vp_base_plugin.h"


namespace xdp {

  class AIEHaltPlugin : public XDPPlugin
  {
    public:

    AIEHaltPlugin();
    ~AIEHaltPlugin();

    void updateDevice(void* hwCtxImpl);
    void finishflushDevice(void* hwCtxImpl);

    void writeAll(bool);

    static bool alive();

    private:
    static bool live;

    struct DeviceData {
      bool valid;
      std::unique_ptr<AIEHaltImpl> implementation;
    } DeviceDataEntry;

    void* mHwCtxImpl = nullptr;

  };

} // end namespace xdp

#endif
