# SPDX-License-Identifier: Apache-2.0
# Copyright (C) 2024-2025 Advanced Micro Devices, Inc.  All rights reserved.
#

# =======================================================================
# This builds the AIE Halt Plugin to add Debug Halts for all AIE Cores at 
# the start. It is currently built on Client and VE2
# =========================================================================

if (XDP_NPU3_BUILD_CMAKE)
  set(IMPL_SUFFIX "_npu3")
  set(IMPL_DIR "clientDev")
  file(GLOB XDP_DEVICE_COMMON_FILES
    "${PROFILE_DIR}/device/common/npu3/*.h"
    "${PROFILE_DIR}/device/common/npu3/*.cpp"
  )
elseif (XDP_CLIENT_BUILD_CMAKE STREQUAL "yes")
  set(IMPL_SUFFIX "")
  set(IMPL_DIR "clientDev")
  file(GLOB XDP_DEVICE_COMMON_FILES
    "${PROFILE_DIR}/device/common/*.h"
    "${PROFILE_DIR}/device/common/*.cpp"
  )
elseif (XDP_VE2_BUILD_CMAKE STREQUAL "yes")
  set(IMPL_SUFFIX "")
  set(IMPL_DIR "ve2")
  file(GLOB XDP_DEVICE_COMMON_FILES
    "${PROFILE_DIR}/device/common/*.h"
    "${PROFILE_DIR}/device/common/*.cpp"
  )
endif()

file(GLOB XDP_AIE_HALT_PLUGIN_FILES
  "${PROFILE_DIR}/plugin/aie_halt/*.h"
  "${PROFILE_DIR}/plugin/aie_halt/*.cpp"
  "${PROFILE_DIR}/plugin/aie_halt/${IMPL_DIR}/aie_halt${IMPL_SUFFIX}.h"
  "${PROFILE_DIR}/plugin/aie_halt/${IMPL_DIR}/aie_halt${IMPL_SUFFIX}.cpp"
)

if (XDP_CLIENT_BUILD_CMAKE STREQUAL "yes")
  if (XDP_NPU3_BUILD_CMAKE)
    set(AIE_HALT_PLUGIN_TARGET xdp_aie_halt_plugin${XDP_SUFFIX})
    set(XDP_CORE_TARGET xdp_core${XDP_SUFFIX})
  else()
    set(AIE_HALT_PLUGIN_TARGET xdp_aie_halt_plugin)
    set(XDP_CORE_TARGET xdp_core)
  endif()

  xrt_configure_version_file(${AIE_HALT_PLUGIN_TARGET} SHARED)
  add_library(${AIE_HALT_PLUGIN_TARGET} SHARED ${AIE_HALT_PLUGIN_TARGET}-version.rc ${XDP_AIE_HALT_PLUGIN_FILES} ${XDP_DEVICE_COMMON_FILES})
  add_dependencies(${AIE_HALT_PLUGIN_TARGET} ${XDP_CORE_TARGET} xrt_coreutil)
  if (XDP_NPU3_BUILD_CMAKE)
    target_link_libraries(${AIE_HALT_PLUGIN_TARGET} PRIVATE
                          aie_codegen aiebu_library_objects
                          ${XDP_CORE_TARGET} xrt_coreutil)
  else()
    target_link_libraries(${AIE_HALT_PLUGIN_TARGET} PRIVATE ${XDP_CORE_TARGET} xrt_coreutil 
                          xaiengine)
  endif()
  target_compile_definitions(${AIE_HALT_PLUGIN_TARGET} PRIVATE XDP_CLIENT_BUILD=1 -DXAIE_FEATURE_MSVC)
  if (XDP_NPU3_BUILD_CMAKE)
    target_compile_definitions(${AIE_HALT_PLUGIN_TARGET} PRIVATE XDP_NPU3_BUILD=1)
  endif()
  target_include_directories(${AIE_HALT_PLUGIN_TARGET} PRIVATE
                             ${AIERT_DIR}/include ${AIEBU_SOURCE_DIR}/src/cpp/include)
  set_target_properties(${AIE_HALT_PLUGIN_TARGET} PROPERTIES VERSION ${XRT_VERSION_STRING} SOVERSION ${XRT_SOVERSION})

  install (TARGETS ${AIE_HALT_PLUGIN_TARGET}
    RUNTIME DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT}
    LIBRARY DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT} ${XRT_NAMELINK_SKIP}
  )

elseif (XDP_VE2_BUILD_CMAKE STREQUAL "yes")
  add_library(xdp_aie_halt_plugin SHARED ${XDP_AIE_HALT_PLUGIN_FILES})
  add_dependencies(xdp_aie_halt_plugin xdp_core xrt_coreutil)

  target_link_libraries(xdp_aie_halt_plugin PRIVATE xdp_core xrt_coreutil)
  target_compile_definitions(xdp_aie_halt_plugin PRIVATE XDP_VE2_BUILD=1)

  set_target_properties(xdp_aie_halt_plugin PROPERTIES VERSION ${XRT_VERSION_STRING} SOVERSION ${XRT_SOVERSION})

  install (TARGETS xdp_aie_halt_plugin
    RUNTIME DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT}
    LIBRARY DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT} ${XRT_NAMELINK_SKIP}
  )

# Else, on edge-aarch64 don't build at all

endif()
