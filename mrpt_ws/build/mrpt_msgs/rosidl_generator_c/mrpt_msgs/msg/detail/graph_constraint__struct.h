// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_constraint.h"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'constraint'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"

/// Struct defined in msg/GraphConstraint in the package mrpt_msgs.
/**
  * Graph constraint that connects 2 nodes
  *
  * Currently used in the mrpt_graphslam_2d ROS application.
 */
typedef struct mrpt_msgs__msg__GraphConstraint
{
  uint64_t node_id_from;
  uint64_t node_id_to;
  geometry_msgs__msg__PoseWithCovariance constraint;
} mrpt_msgs__msg__GraphConstraint;

// Struct for a sequence of mrpt_msgs__msg__GraphConstraint.
typedef struct mrpt_msgs__msg__GraphConstraint__Sequence
{
  mrpt_msgs__msg__GraphConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__GraphConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__STRUCT_H_
