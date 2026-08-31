// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/SingleRangeBearingObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_bearing_observation.h"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SingleRangeBearingObservation in the package mrpt_msgs.
/**
  * int32 INVALID_LANDMARK_ID = -1
 */
typedef struct mrpt_msgs__msg__SingleRangeBearingObservation
{
  /// Distance, in meters.
  double range;
  /// Angle wrt +Z (rads)
  double yaw;
  /// Angle wrt +Y (rads)
  double pitch;
  /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
  int32_t id;
} mrpt_msgs__msg__SingleRangeBearingObservation;

// Struct for a sequence of mrpt_msgs__msg__SingleRangeBearingObservation.
typedef struct mrpt_msgs__msg__SingleRangeBearingObservation__Sequence
{
  mrpt_msgs__msg__SingleRangeBearingObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__SingleRangeBearingObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__STRUCT_H_
