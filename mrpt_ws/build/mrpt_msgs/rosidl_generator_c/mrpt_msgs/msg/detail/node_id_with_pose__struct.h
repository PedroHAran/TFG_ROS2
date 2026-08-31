// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/NodeIDWithPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose.h"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'str_id'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/NodeIDWithPose in the package mrpt_msgs.
/**
  * NodeID along with its corresponding 2D/3D pose estimation.
  * Message also contains the following optional fields:
  * - str_ID: string identifier of the robot agent that initially registered this node in
  * its graph
  * - nodeID_loc: ID of the current node in the graph it was initially registered in.
  *
  * note: Additional fields correspond to the fields of the
  * mrpt::graphs::detail::TMRSlamNodeAnnotations struct
  *
  * Currently used in the mrpt_graphslam_2d ROS application.
 */
typedef struct mrpt_msgs__msg__NodeIDWithPose
{
  uint64_t node_id;
  geometry_msgs__msg__Pose pose;
  std_msgs__msg__String str_id;
  uint64_t node_id_loc;
} mrpt_msgs__msg__NodeIDWithPose;

// Struct for a sequence of mrpt_msgs__msg__NodeIDWithPose.
typedef struct mrpt_msgs__msg__NodeIDWithPose__Sequence
{
  mrpt_msgs__msg__NodeIDWithPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__NodeIDWithPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__STRUCT_H_
