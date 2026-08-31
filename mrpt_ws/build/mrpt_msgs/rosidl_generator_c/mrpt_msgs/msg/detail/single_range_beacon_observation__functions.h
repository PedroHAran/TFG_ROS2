// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_beacon_observation.h"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__FUNCTIONS_H_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mrpt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mrpt_msgs/msg/detail/single_range_beacon_observation__struct.h"

/// Initialize msg/SingleRangeBeaconObservation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mrpt_msgs__msg__SingleRangeBeaconObservation
 * )) before or use
 * mrpt_msgs__msg__SingleRangeBeaconObservation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__SingleRangeBeaconObservation__init(mrpt_msgs__msg__SingleRangeBeaconObservation * msg);

/// Finalize msg/SingleRangeBeaconObservation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__SingleRangeBeaconObservation__fini(mrpt_msgs__msg__SingleRangeBeaconObservation * msg);

/// Create msg/SingleRangeBeaconObservation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mrpt_msgs__msg__SingleRangeBeaconObservation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__SingleRangeBeaconObservation *
mrpt_msgs__msg__SingleRangeBeaconObservation__create(void);

/// Destroy msg/SingleRangeBeaconObservation message.
/**
 * It calls
 * mrpt_msgs__msg__SingleRangeBeaconObservation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__SingleRangeBeaconObservation__destroy(mrpt_msgs__msg__SingleRangeBeaconObservation * msg);

/// Check for msg/SingleRangeBeaconObservation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__SingleRangeBeaconObservation__are_equal(const mrpt_msgs__msg__SingleRangeBeaconObservation * lhs, const mrpt_msgs__msg__SingleRangeBeaconObservation * rhs);

/// Copy a msg/SingleRangeBeaconObservation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__SingleRangeBeaconObservation__copy(
  const mrpt_msgs__msg__SingleRangeBeaconObservation * input,
  mrpt_msgs__msg__SingleRangeBeaconObservation * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_runtime_c__type_description__TypeDescription *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SingleRangeBeaconObservation messages.
/**
 * It allocates the memory for the number of elements and calls
 * mrpt_msgs__msg__SingleRangeBeaconObservation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array, size_t size);

/// Finalize array of msg/SingleRangeBeaconObservation messages.
/**
 * It calls
 * mrpt_msgs__msg__SingleRangeBeaconObservation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__fini(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array);

/// Create array of msg/SingleRangeBeaconObservation messages.
/**
 * It allocates the memory for the array and calls
 * mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence *
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__create(size_t size);

/// Destroy array of msg/SingleRangeBeaconObservation messages.
/**
 * It calls
 * mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
void
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__destroy(mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * array);

/// Check for msg/SingleRangeBeaconObservation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__are_equal(const mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * lhs, const mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * rhs);

/// Copy an array of msg/SingleRangeBeaconObservation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
bool
mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__copy(
  const mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * input,
  mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__FUNCTIONS_H_
