// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__struct.h"
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/laser_scan__functions.h"  // scan

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_sensor_msgs__msg__LaserScan(
  const sensor_msgs__msg__LaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_deserialize_sensor_msgs__msg__LaserScan(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__LaserScan * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_key_sensor_msgs__msg__LaserScan(
  const sensor_msgs__msg__LaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_key_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_key_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, LaserScan)();


using _NodeIDWithLaserScan__ros_msg_type = mrpt_msgs__msg__NodeIDWithLaserScan;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_mrpt_msgs__msg__NodeIDWithLaserScan(
  const mrpt_msgs__msg__NodeIDWithLaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: node_id
  {
    cdr << ros_message->node_id;
  }

  // Field name: scan
  {
    cdr_serialize_sensor_msgs__msg__LaserScan(
      &ros_message->scan, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_deserialize_mrpt_msgs__msg__NodeIDWithLaserScan(
  eprosima::fastcdr::Cdr & cdr,
  mrpt_msgs__msg__NodeIDWithLaserScan * ros_message)
{
  // Field name: node_id
  {
    cdr >> ros_message->node_id;
  }

  // Field name: scan
  {
    cdr_deserialize_sensor_msgs__msg__LaserScan(cdr, &ros_message->scan);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_mrpt_msgs__msg__NodeIDWithLaserScan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeIDWithLaserScan__ros_msg_type * ros_message = static_cast<const _NodeIDWithLaserScan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: node_id
  {
    size_t item_size = sizeof(ros_message->node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scan
  current_alignment += get_serialized_size_sensor_msgs__msg__LaserScan(
    &(ros_message->scan), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_mrpt_msgs__msg__NodeIDWithLaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: node_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: scan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__LaserScan(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_msgs__msg__NodeIDWithLaserScan;
    is_plain =
      (
      offsetof(DataType, scan) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_key_mrpt_msgs__msg__NodeIDWithLaserScan(
  const mrpt_msgs__msg__NodeIDWithLaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: node_id
  {
    cdr << ros_message->node_id;
  }

  // Field name: scan
  {
    cdr_serialize_key_sensor_msgs__msg__LaserScan(
      &ros_message->scan, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_key_mrpt_msgs__msg__NodeIDWithLaserScan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeIDWithLaserScan__ros_msg_type * ros_message = static_cast<const _NodeIDWithLaserScan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: node_id
  {
    size_t item_size = sizeof(ros_message->node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scan
  current_alignment += get_serialized_size_key_sensor_msgs__msg__LaserScan(
    &(ros_message->scan), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_key_mrpt_msgs__msg__NodeIDWithLaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: node_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: scan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__LaserScan(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_msgs__msg__NodeIDWithLaserScan;
    is_plain =
      (
      offsetof(DataType, scan) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NodeIDWithLaserScan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrpt_msgs__msg__NodeIDWithLaserScan * ros_message = static_cast<const mrpt_msgs__msg__NodeIDWithLaserScan *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrpt_msgs__msg__NodeIDWithLaserScan(ros_message, cdr);
}

static bool _NodeIDWithLaserScan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrpt_msgs__msg__NodeIDWithLaserScan * ros_message = static_cast<mrpt_msgs__msg__NodeIDWithLaserScan *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrpt_msgs__msg__NodeIDWithLaserScan(cdr, ros_message);
}

static uint32_t _NodeIDWithLaserScan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_msgs__msg__NodeIDWithLaserScan(
      untyped_ros_message, 0));
}

static size_t _NodeIDWithLaserScan__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_msgs__msg__NodeIDWithLaserScan(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NodeIDWithLaserScan = {
  "mrpt_msgs::msg",
  "NodeIDWithLaserScan",
  _NodeIDWithLaserScan__cdr_serialize,
  _NodeIDWithLaserScan__cdr_deserialize,
  _NodeIDWithLaserScan__get_serialized_size,
  _NodeIDWithLaserScan__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NodeIDWithLaserScan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeIDWithLaserScan,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__NodeIDWithLaserScan__get_type_hash,
  &mrpt_msgs__msg__NodeIDWithLaserScan__get_type_description,
  &mrpt_msgs__msg__NodeIDWithLaserScan__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, NodeIDWithLaserScan)() {
  return &_NodeIDWithLaserScan__type_support;
}

#if defined(__cplusplus)
}
#endif
