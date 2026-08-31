// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/GraphSlamStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_stats.h"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'slam_evaluation_metric'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GraphSlamStats in the package mrpt_msgs.
/**
  * Statistics related to the execution of graphSLAM.
  * Message is utilized in the mrpt_graphslam ROS package
 */
typedef struct mrpt_msgs__msg__GraphSlamStats
{
  /// Time of message acquisition
  std_msgs__msg__Header header;
  /// node-related stats
  int32_t nodes_total;
  /// edge-related stats
  int32_t edges_total;
  int32_t edges_icp_2d;
  int32_t edges_icp_3d;
  int32_t edges_odom;
  int32_t loop_closures;
  /// Evaluation metric of the SLAM process
  rosidl_runtime_c__double__Sequence slam_evaluation_metric;
} mrpt_msgs__msg__GraphSlamStats;

// Struct for a sequence of mrpt_msgs__msg__GraphSlamStats.
typedef struct mrpt_msgs__msg__GraphSlamStats__Sequence
{
  mrpt_msgs__msg__GraphSlamStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__GraphSlamStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__STRUCT_H_
