// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/network_of_poses.h"


#ifndef MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__struct.h"
// Member 'constraints'
#include "mrpt_msgs/msg/detail/graph_constraint__struct.h"

/// Struct defined in msg/NetworkOfPoses in the package mrpt_msgs.
/**
  * Represents a 2D/3D Directed Graph of Constraints
  *
  * Graph consists of:
  * - NodeIDs with their corresponding poses
  * - Directed Constraints that connect 2 nodes with each other
  * - Root node marking the start of the graph
 */
typedef struct mrpt_msgs__msg__NetworkOfPoses
{
  uint64_t root;
  mrpt_msgs__msg__NodeIDWithPoseVec nodes;
  mrpt_msgs__msg__GraphConstraint__Sequence constraints;
} mrpt_msgs__msg__NetworkOfPoses;

// Struct for a sequence of mrpt_msgs__msg__NetworkOfPoses.
typedef struct mrpt_msgs__msg__NetworkOfPoses__Sequence
{
  mrpt_msgs__msg__NetworkOfPoses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__NetworkOfPoses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__STRUCT_H_
