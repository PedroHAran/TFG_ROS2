// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mrpt_msgs:msg/GenericObservation.idl
// generated code does not contain a copyright notice
#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_msgs/msg/detail/generic_observation__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_mrpt_msgs__msg__GenericObservation(
  const mrpt_msgs__msg__GenericObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_deserialize_mrpt_msgs__msg__GenericObservation(
  eprosima::fastcdr::Cdr &,
  mrpt_msgs__msg__GenericObservation * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_mrpt_msgs__msg__GenericObservation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_mrpt_msgs__msg__GenericObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_key_mrpt_msgs__msg__GenericObservation(
  const mrpt_msgs__msg__GenericObservation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_key_mrpt_msgs__msg__GenericObservation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_key_mrpt_msgs__msg__GenericObservation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, GenericObservation)();

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
