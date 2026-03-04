# SPDX-License-Identifier: Apache-2.0
# Copyright (C) 2024-2025 Advanced Micro Devices, Inc.  All rights reserved.
#

# =======================================================================
# This builds the AIE Halt Plugin to add Debug Halts for all AIE Cores at 
# the start. It is currently built on Client and VE2
# =========================================================================

if (XDP_CLIENT_BUILD_CMAKE STREQUAL "yes")
  set(IMPL_DIR "${PROFILE_DIR}/plugin/aie_halt/clientDev")

elseif (XDP_VE2_BUILD_CMAKE STREQUAL "yes")
  set(IMPL_DIR "${PROFILE_DIR}/plugin/aie_halt/ve2")
  
endif()

file(GLOB XDP_AIE_HALT_PLUGIN_FILES
  "${PROFILE_DIR}/plugin/aie_halt/*.h"
  "${PROFILE_DIR}/plugin/aie_halt/*.cpp"
  "${IMPL_DIR}/*.h"
  "${IMPL_DIR}/*.cpp"
)

file(GLOB XDP_DEVICE_COMMON_FILES
  "${PROFILE_DIR}/device/common/*.h"
  "${PROFILE_DIR}/device/common/*.cpp"
)

if (XDP_CLIENT_BUILD_CMAKE STREQUAL "yes")
  xrt_configure_version_file(xdp_aie_halt_plugin${XDP_SUFFIX} SHARED)
  add_library(xdp_aie_halt_plugin${XDP_SUFFIX} SHARED xdp_aie_halt_plugin${XDP_SUFFIX}-version.rc ${XDP_AIE_HALT_PLUGIN_FILES} ${XDP_DEVICE_COMMON_FILES})
  add_dependencies(xdp_aie_halt_plugin${XDP_SUFFIX} xdp_core${XDP_SUFFIX} xrt_coreutil)
  target_link_libraries(xdp_aie_halt_plugin${XDP_SUFFIX} PRIVATE xdp_core${XDP_SUFFIX} xrt_coreutil 
                        xaiengine${XDP_SUFFIX} aiebu_library_objects)
  target_compile_definitions(xdp_aie_halt_plugin${XDP_SUFFIX} PRIVATE XDP_CLIENT_BUILD=1 -DXAIE_FEATURE_MSVC)
  if (XDP_NPU3_BUILD_CMAKE)
    target_compile_definitions(xdp_aie_halt_plugin${XDP_SUFFIX} PRIVATE XDP_NPU3_BUILD=1)
  endif()
  target_include_directories(xdp_aie_halt_plugin${XDP_SUFFIX} PRIVATE
                             ${AIERT_DIR}/include ${AIEBU_SOURCE_DIR}/src/cpp/include)
  set_target_properties(xdp_aie_halt_plugin${XDP_SUFFIX} PROPERTIES VERSION ${XRT_VERSION_STRING} SOVERSION ${XRT_SOVERSION})

  install (TARGETS xdp_aie_halt_plugin${XDP_SUFFIX}
    RUNTIME DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT}
    LIBRARY DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT} ${XRT_NAMELINK_SKIP}
  )

elseif (XDP_VE2_BUILD_CMAKE STREQUAL "yes")
  add_library(xdp_aie_halt_plugin${XDP_SUFFIX} SHARED ${XDP_AIE_HALT_PLUGIN_FILES})
  add_dependencies(xdp_aie_halt_plugin${XDP_SUFFIX} xdp_core${XDP_SUFFIX} xrt_coreutil)

  target_link_libraries(xdp_aie_halt_plugin${XDP_SUFFIX} PRIVATE xdp_core${XDP_SUFFIX} xrt_coreutil)
  target_compile_definitions(xdp_aie_halt_plugin${XDP_SUFFIX} PRIVATE XDP_VE2_BUILD=1)

  set_target_properties(xdp_aie_halt_plugin${XDP_SUFFIX} PROPERTIES VERSION ${XRT_VERSION_STRING} SOVERSION ${XRT_SOVERSION})

  install (TARGETS xdp_aie_halt_plugin${XDP_SUFFIX}
    RUNTIME DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT}
    LIBRARY DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT} ${XRT_NAMELINK_SKIP}
  )

# Else, on edge-aarch64 don't build at all

endif()
