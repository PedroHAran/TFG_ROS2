// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agent.h"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'hostname'
// Member 'ip_addr'
// Member 'topic_namespace'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'is_online'
#include "std_msgs/msg/detail/bool__struct.h"
// Member 'last_seen_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/GraphSlamAgent in the package mrpt_msgs.
/**
  * Connection-related properties for a graphSLAM agent in a multi-robot
  * environment.
  *
  * Currently used in the mrpt_graphslam_2d ROS application.
 */
typedef struct mrpt_msgs__msg__GraphSlamAgent
{
  std_msgs__msg__String name;
  std_msgs__msg__String hostname;
  /// IPv4 of the corresponding agent
  std_msgs__msg__String ip_addr;
  /// Port that the the roscore of the corresponding agent is running under
  uint16_t port;
  /// True if the SLAM Agent was last reported to be online
  std_msgs__msg__Bool is_online;
  /// Timestamp that the SLAM Agent was last seen
  builtin_interfaces__msg__Time last_seen_time;
  /// ROS Topics namespace that the agent is running under
  /// By definition this is going to be the same as the *name*
  /// UPDATE: Previously the topics namespace was <name>_<agent_ID>. However since I'll be using the multimaster for communication, every node is going to have a different
  std_msgs__msg__String topic_namespace;
  /// this is the last field of the IPv4 address of the corresponding agent
  /// e.g. IP=192.168.100.17
  /// agent_ID = 17
  int32_t agent_id;
} mrpt_msgs__msg__GraphSlamAgent;

// Struct for a sequence of mrpt_msgs__msg__GraphSlamAgent.
typedef struct mrpt_msgs__msg__GraphSlamAgent__Sequence
{
  mrpt_msgs__msg__GraphSlamAgent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__GraphSlamAgent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__STRUCT_H_
