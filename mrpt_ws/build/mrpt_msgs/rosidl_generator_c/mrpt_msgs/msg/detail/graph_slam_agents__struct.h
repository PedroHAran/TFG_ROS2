// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agents.h"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.h"

/// Struct defined in msg/GraphSlamAgents in the package mrpt_msgs.
/**
  * Defines vector of GraphSlamAgents.
  * Currently used in the mrpt_graphslam_2d ROS application.
 */
typedef struct mrpt_msgs__msg__GraphSlamAgents
{
  mrpt_msgs__msg__GraphSlamAgent__Sequence list;
} mrpt_msgs__msg__GraphSlamAgents;

// Struct for a sequence of mrpt_msgs__msg__GraphSlamAgents.
typedef struct mrpt_msgs__msg__GraphSlamAgents__Sequence
{
  mrpt_msgs__msg__GraphSlamAgents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__GraphSlamAgents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__STRUCT_H_
