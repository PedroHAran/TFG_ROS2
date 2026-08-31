// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/GenericObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/generic_observation.h"


#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GenericObservation in the package mrpt_msgs.
/**
  * This message holds an mrpt::obs::CObservation polymorphic object
  * serialized into a binary stream via mrpt::serialization methods.
 */
typedef struct mrpt_msgs__msg__GenericObservation
{
  /// Time of sensor data acquisition, coordinate frame ID.
  std_msgs__msg__Header header;
  /// Generalized serialized observation data
  rosidl_runtime_c__uint8__Sequence data;
} mrpt_msgs__msg__GenericObservation;

// Struct for a sequence of mrpt_msgs__msg__GenericObservation.
typedef struct mrpt_msgs__msg__GenericObservation__Sequence
{
  mrpt_msgs__msg__GenericObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__GenericObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__STRUCT_H_
