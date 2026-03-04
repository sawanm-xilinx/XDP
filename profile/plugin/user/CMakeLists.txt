# SPDX-License-Identifier: Apache-2.0
# Copyright (C) 2022 Advanced Micro Devices, Inc.  All rights reserved.
#

# ====================================================================
# This builds the User Event plugin for when users want to measure
# ranges of time or specific events in their host code.
# ====================================================================

file(GLOB USER_PLUGIN_FILES
  "${PROFILE_DIR}/plugin/user/*.h"
  "${PROFILE_DIR}/plugin/user/*.cpp"
  "${PROFILE_DIR}/writer/user/*.h"
  "${PROFILE_DIR}/writer/user/*.cpp"
)

xrt_configure_version_file(xdp_user_plugin${XDP_SUFFIX} SHARED)
add_library(xdp_user_plugin${XDP_SUFFIX} SHARED xdp_user_plugin${XDP_SUFFIX}-version.rc ${USER_PLUGIN_FILES})
add_dependencies(xdp_user_plugin${XDP_SUFFIX} xdp_core${XDP_SUFFIX} xrt_coreutil)
target_link_libraries(xdp_user_plugin${XDP_SUFFIX} PRIVATE xdp_core${XDP_SUFFIX} xrt_coreutil)

set_target_properties(xdp_user_plugin${XDP_SUFFIX} PROPERTIES VERSION ${XRT_VERSION_STRING} SOVERSION ${XRT_SOVERSION})

install (TARGETS xdp_user_plugin${XDP_SUFFIX}
  RUNTIME DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT}
  LIBRARY DESTINATION ${XDP_PLUGIN_INSTALL_DIR} COMPONENT ${XRT_COMPONENT} ${XRT_NAMELINK_SKIP}
)
