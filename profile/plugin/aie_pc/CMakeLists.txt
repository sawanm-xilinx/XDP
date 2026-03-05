# SPDX-License-Identifier: Apache-2.0
# Copyright (C) 2024 Advanced Micro Devices, Inc.  All rights reserved.
#

# ========================================================================
# This builds the AIE PC Plugin which can configure Perf Counter registers
# to count cycles between core function start and end.
# It is currently built on Client Windows Only.
# =========================================================================

if (XDP_CLIENT_BUILD_CMAKE STREQUAL "yes")
  set(IMPL_DIR "${PROFILE_DIR}/plugin/aie_pc/clientDev")
endif()


file(GLOB XDP_AIE_PC_PLUGIN_FILES
  "${PROFILE_DIR}/plugin/aie_pc/*.h"
  "${PROFILE_DIR}/plugin/aie_pc/*.cpp"
  "${IMPL_DIR}/*.h"
  "${IMPL_DIR}/*.cpp"
)

file(GLOB XDP_DEVICE_COMMON_FILES
  "${PROFILE_DIR}/device/common/*.h"
  "${PROFILE_DIR}/device/common/*.cpp"
)

if (XDP_CLIENT_BUILD_CMAKE STREQUAL "yes")
  if (XDP_NPU3_BUILD_CMAKE)
    set(AIE_PC_PLUGIN_TARGET xdp_aie_pc_plugin${XDP_SUFFIX})
    set(XDP_CORE_TARGET xdp_core${XDP_SUFFIX})
  else()
    set(AIE_PC_PLUGIN_TARGET xdp_aie_pc_plugin)
    set(XDP_CORE_TARGET xdp_core)
  endif()

  xrt_configure_version_file(${AIE_PC_PLUGIN_TARGET} SHARED)
  add_library(${AIE_PC_PLUGIN_TARGET} SHARED ${AIE_PC_PLUGIN_TARGET}-version.rc
    ${XDP_AIE_PC_PLUGIN_FILES} ${XDP_DEVICE_COMMON_FILES})
  add_dependencies(${AIE_PC_PLUGIN_TARGET} ${XDP_CORE_TARGET} xrt_coreutil)
  if (XDP_NPU3_BUILD_CMAKE)
    target_link_libraries(${AIE_PC_PLUGIN_TARGET} PRIVATE ${XDP_CORE_TARGET} xrt_coreutil aie_codegen)
  else()
    target_link_libraries(${AIE_PC_PLUGIN_TARGET} PRIVATE ${XDP_CORE_TARGET} xrt_coreutil xaiengine)
  endif()
  target_compile_definitions(${AIE_PC_PLUGIN_TARGET} PRIVATE XDP_CLIENT_BUILD=1 -DXAIE_FEATURE_MSVC)
  if (XDP_NPU3_BUILD_CMAKE)
    target_compile_definitions(${AIE_PC_PLUGIN_TARGET} PRIVATE XDP_NPU3_BUILD=1)
  endif()
  target_include_directories(${AIE_PC_PLUGIN_TARGET} PRIVATE
                             ${AIERT_DIR}/include ${AIEBU_SOURCE_DIR}/src/cpp/include)
  set_target_properties(${AIE_PC_PLUGIN_TARGET} PROPERTIES VERSION ${XRT_VERSION_STRING} SOVERSION ${XRT_SOVERSION})

  install (TARGETS ${AIE_PC_PLUGIN_TARGET}
    RUNTIME DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT}
    LIBRARY DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT} ${XRT_NAMELINK_SKIP}
  )

# Else, on edge-aarch64 don't build at all

endif()
