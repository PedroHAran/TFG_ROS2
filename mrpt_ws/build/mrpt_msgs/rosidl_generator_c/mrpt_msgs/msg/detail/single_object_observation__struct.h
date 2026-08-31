// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/SingleObjectObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_object_observation.h"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose_wo'
// Member 'pose_so'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'shape_variables'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SingleObjectObservation in the package mrpt_msgs.
/**
  * int32 INVALID_LANDMARK_ID = -1
 */
typedef struct mrpt_msgs__msg__SingleObjectObservation
{
  /// Distance, in meters.
  double range;
  /// Angle wrt +Z (rads)
  double yaw;
  /// Angle wrt +Y (rads)
  double pitch;
  /// Pose in world space coordinates
  geometry_msgs__msg__Pose pose_wo;
  /// Pose in sensor space coordinates
  geometry_msgs__msg__Pose pose_so;
  /// Shape variables describing the object
  rosidl_runtime_c__float__Sequence shape_variables;
  /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
  int32_t id;
} mrpt_msgs__msg__SingleObjectObservation;

// Struct for a sequence of mrpt_msgs__msg__SingleObjectObservation.
typedef struct mrpt_msgs__msg__SingleObjectObservation__Sequence
{
  mrpt_msgs__msg__SingleObjectObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__SingleObjectObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__STRUCT_H_
