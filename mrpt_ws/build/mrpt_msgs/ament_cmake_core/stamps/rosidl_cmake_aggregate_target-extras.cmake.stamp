# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target mrpt_msgs::mrpt_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${mrpt_msgs_TARGETS}.
if(mrpt_msgs_TARGETS AND NOT TARGET mrpt_msgs::mrpt_msgs)
  add_library(mrpt_msgs::mrpt_msgs INTERFACE IMPORTED)
  set_target_properties(mrpt_msgs::mrpt_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${mrpt_msgs_TARGETS}")
endif()
