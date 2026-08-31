// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/NodeIDWithPoseVec.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose_vec.h"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'vec'
#include "mrpt_msgs/msg/detail/node_id_with_pose__struct.h"

/// Struct defined in msg/NodeIDWithPoseVec in the package mrpt_msgs.
/**
  * Vector of NodeIDWithPose msgs
 */
typedef struct mrpt_msgs__msg__NodeIDWithPoseVec
{
  mrpt_msgs__msg__NodeIDWithPose__Sequence vec;
} mrpt_msgs__msg__NodeIDWithPoseVec;

// Struct for a sequence of mrpt_msgs__msg__NodeIDWithPoseVec.
typedef struct mrpt_msgs__msg__NodeIDWithPoseVec__Sequence
{
  mrpt_msgs__msg__NodeIDWithPoseVec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__NodeIDWithPoseVec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__STRUCT_H_
