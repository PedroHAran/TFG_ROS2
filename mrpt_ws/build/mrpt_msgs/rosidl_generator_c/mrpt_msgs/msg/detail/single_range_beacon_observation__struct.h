// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_beacon_observation.h"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SingleRangeBeaconObservation in the package mrpt_msgs.
/**
  * int32 INVALID_LANDMARK_ID = -1
 */
typedef struct mrpt_msgs__msg__SingleRangeBeaconObservation
{
  /// Distance, in meters.
  double range;
  /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
  int32_t id;
} mrpt_msgs__msg__SingleRangeBeaconObservation;

// Struct for a sequence of mrpt_msgs__msg__SingleRangeBeaconObservation.
typedef struct mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence
{
  mrpt_msgs__msg__SingleRangeBeaconObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__STRUCT_H_
