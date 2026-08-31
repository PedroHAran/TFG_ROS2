// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/graph_slam_agent__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.h"
#include "mrpt_msgs/msg/detail/graph_slam_agent__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // last_seen_time
#include "std_msgs/msg/detail/bool__functions.h"  // is_online
#include "std_msgs/msg/detail/string__functions.h"  // hostname, ip_addr, name, topic_namespace

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_std_msgs__msg__Bool(
  const std_msgs__msg__Bool * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_deserialize_std_msgs__msg__Bool(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Bool * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_std_msgs__msg__Bool(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_std_msgs__msg__Bool(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_key_std_msgs__msg__Bool(
  const std_msgs__msg__Bool * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_key_std_msgs__msg__Bool(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_key_std_msgs__msg__Bool(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Bool)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_deserialize_std_msgs__msg__String(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__String * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_key_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_key_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_key_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _GraphSlamAgent__ros_msg_type = mrpt_msgs__msg__GraphSlamAgent;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_mrpt_msgs__msg__GraphSlamAgent(
  const mrpt_msgs__msg__GraphSlamAgent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->name, cdr);
  }

  // Field name: hostname
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->hostname, cdr);
  }

  // Field name: ip_addr
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->ip_addr, cdr);
  }

  // Field name: port
  {
    cdr << ros_message->port;
  }

  // Field name: is_online
  {
    cdr_serialize_std_msgs__msg__Bool(
      &ros_message->is_online, cdr);
  }

  // Field name: last_seen_time
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->last_seen_time, cdr);
  }

  // Field name: topic_namespace
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->topic_namespace, cdr);
  }

  // Field name: agent_id
  {
    cdr << ros_message->agent_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_deserialize_mrpt_msgs__msg__GraphSlamAgent(
  eprosima::fastcdr::Cdr & cdr,
  mrpt_msgs__msg__GraphSlamAgent * ros_message)
{
  // Field name: name
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->name);
  }

  // Field name: hostname
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->hostname);
  }

  // Field name: ip_addr
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->ip_addr);
  }

  // Field name: port
  {
    cdr >> ros_message->port;
  }

  // Field name: is_online
  {
    cdr_deserialize_std_msgs__msg__Bool(cdr, &ros_message->is_online);
  }

  // Field name: last_seen_time
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->last_seen_time);
  }

  // Field name: topic_namespace
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->topic_namespace);
  }

  // Field name: agent_id
  {
    cdr >> ros_message->agent_id;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_mrpt_msgs__msg__GraphSlamAgent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphSlamAgent__ros_msg_type * ros_message = static_cast<const _GraphSlamAgent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->name), current_alignment);

  // Field name: hostname
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->hostname), current_alignment);

  // Field name: ip_addr
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->ip_addr), current_alignment);

  // Field name: port
  {
    size_t item_size = sizeof(ros_message->port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_online
  current_alignment += get_serialized_size_std_msgs__msg__Bool(
    &(ros_message->is_online), current_alignment);

  // Field name: last_seen_time
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->last_seen_time), current_alignment);

  // Field name: topic_namespace
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->topic_namespace), current_alignment);

  // Field name: agent_id
  {
    size_t item_size = sizeof(ros_message->agent_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_mrpt_msgs__msg__GraphSlamAgent(
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

  // Field name: name
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hostname
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ip_addr
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: is_online
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Bool(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: last_seen_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: topic_namespace
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: agent_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_msgs__msg__GraphSlamAgent;
    is_plain =
      (
      offsetof(DataType, agent_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_key_mrpt_msgs__msg__GraphSlamAgent(
  const mrpt_msgs__msg__GraphSlamAgent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: name
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->name, cdr);
  }

  // Field name: hostname
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->hostname, cdr);
  }

  // Field name: ip_addr
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->ip_addr, cdr);
  }

  // Field name: port
  {
    cdr << ros_message->port;
  }

  // Field name: is_online
  {
    cdr_serialize_key_std_msgs__msg__Bool(
      &ros_message->is_online, cdr);
  }

  // Field name: last_seen_time
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->last_seen_time, cdr);
  }

  // Field name: topic_namespace
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->topic_namespace, cdr);
  }

  // Field name: agent_id
  {
    cdr << ros_message->agent_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_key_mrpt_msgs__msg__GraphSlamAgent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphSlamAgent__ros_msg_type * ros_message = static_cast<const _GraphSlamAgent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: name
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->name), current_alignment);

  // Field name: hostname
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->hostname), current_alignment);

  // Field name: ip_addr
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->ip_addr), current_alignment);

  // Field name: port
  {
    size_t item_size = sizeof(ros_message->port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_online
  current_alignment += get_serialized_size_key_std_msgs__msg__Bool(
    &(ros_message->is_online), current_alignment);

  // Field name: last_seen_time
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->last_seen_time), current_alignment);

  // Field name: topic_namespace
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->topic_namespace), current_alignment);

  // Field name: agent_id
  {
    size_t item_size = sizeof(ros_message->agent_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_key_mrpt_msgs__msg__GraphSlamAgent(
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
  // Field name: name
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hostname
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: ip_addr
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: is_online
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Bool(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: last_seen_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: topic_namespace
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: agent_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mrpt_msgs__msg__GraphSlamAgent;
    is_plain =
      (
      offsetof(DataType, agent_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GraphSlamAgent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrpt_msgs__msg__GraphSlamAgent * ros_message = static_cast<const mrpt_msgs__msg__GraphSlamAgent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrpt_msgs__msg__GraphSlamAgent(ros_message, cdr);
}

static bool _GraphSlamAgent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrpt_msgs__msg__GraphSlamAgent * ros_message = static_cast<mrpt_msgs__msg__GraphSlamAgent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrpt_msgs__msg__GraphSlamAgent(cdr, ros_message);
}

static uint32_t _GraphSlamAgent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_msgs__msg__GraphSlamAgent(
      untyped_ros_message, 0));
}

static size_t _GraphSlamAgent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_msgs__msg__GraphSlamAgent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraphSlamAgent = {
  "mrpt_msgs::msg",
  "GraphSlamAgent",
  _GraphSlamAgent__cdr_serialize,
  _GraphSlamAgent__cdr_deserialize,
  _GraphSlamAgent__get_serialized_size,
  _GraphSlamAgent__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GraphSlamAgent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraphSlamAgent,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__GraphSlamAgent__get_type_hash,
  &mrpt_msgs__msg__GraphSlamAgent__get_type_description,
  &mrpt_msgs__msg__GraphSlamAgent__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, GraphSlamAgent)() {
  return &_GraphSlamAgent__type_support;
}

#if defined(__cplusplus)
}
#endif
