// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/graph_constraint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mrpt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mrpt_msgs/msg/detail/graph_constraint__struct.h"
#include "mrpt_msgs/msg/detail/graph_constraint__functions.h"
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

#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"  // constraint

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_geometry_msgs__msg__PoseWithCovariance(
  const geometry_msgs__msg__PoseWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_deserialize_geometry_msgs__msg__PoseWithCovariance(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__PoseWithCovariance * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
bool cdr_serialize_key_geometry_msgs__msg__PoseWithCovariance(
  const geometry_msgs__msg__PoseWithCovariance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t get_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
size_t max_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mrpt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance)();


using _GraphConstraint__ros_msg_type = mrpt_msgs__msg__GraphConstraint;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_mrpt_msgs__msg__GraphConstraint(
  const mrpt_msgs__msg__GraphConstraint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: node_id_from
  {
    cdr << ros_message->node_id_from;
  }

  // Field name: node_id_to
  {
    cdr << ros_message->node_id_to;
  }

  // Field name: constraint
  {
    cdr_serialize_geometry_msgs__msg__PoseWithCovariance(
      &ros_message->constraint, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_deserialize_mrpt_msgs__msg__GraphConstraint(
  eprosima::fastcdr::Cdr & cdr,
  mrpt_msgs__msg__GraphConstraint * ros_message)
{
  // Field name: node_id_from
  {
    cdr >> ros_message->node_id_from;
  }

  // Field name: node_id_to
  {
    cdr >> ros_message->node_id_to;
  }

  // Field name: constraint
  {
    cdr_deserialize_geometry_msgs__msg__PoseWithCovariance(cdr, &ros_message->constraint);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_mrpt_msgs__msg__GraphConstraint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphConstraint__ros_msg_type * ros_message = static_cast<const _GraphConstraint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: node_id_from
  {
    size_t item_size = sizeof(ros_message->node_id_from);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: node_id_to
  {
    size_t item_size = sizeof(ros_message->node_id_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: constraint
  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
    &(ros_message->constraint), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_mrpt_msgs__msg__GraphConstraint(
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

  // Field name: node_id_from
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: node_id_to
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: constraint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
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
    using DataType = mrpt_msgs__msg__GraphConstraint;
    is_plain =
      (
      offsetof(DataType, constraint) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
bool cdr_serialize_key_mrpt_msgs__msg__GraphConstraint(
  const mrpt_msgs__msg__GraphConstraint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: node_id_from
  {
    cdr << ros_message->node_id_from;
  }

  // Field name: node_id_to
  {
    cdr << ros_message->node_id_to;
  }

  // Field name: constraint
  {
    cdr_serialize_key_geometry_msgs__msg__PoseWithCovariance(
      &ros_message->constraint, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t get_serialized_size_key_mrpt_msgs__msg__GraphConstraint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphConstraint__ros_msg_type * ros_message = static_cast<const _GraphConstraint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: node_id_from
  {
    size_t item_size = sizeof(ros_message->node_id_from);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: node_id_to
  {
    size_t item_size = sizeof(ros_message->node_id_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: constraint
  current_alignment += get_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
    &(ros_message->constraint), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mrpt_msgs
size_t max_serialized_size_key_mrpt_msgs__msg__GraphConstraint(
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
  // Field name: node_id_from
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: node_id_to
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: constraint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__PoseWithCovariance(
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
    using DataType = mrpt_msgs__msg__GraphConstraint;
    is_plain =
      (
      offsetof(DataType, constraint) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GraphConstraint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mrpt_msgs__msg__GraphConstraint * ros_message = static_cast<const mrpt_msgs__msg__GraphConstraint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mrpt_msgs__msg__GraphConstraint(ros_message, cdr);
}

static bool _GraphConstraint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mrpt_msgs__msg__GraphConstraint * ros_message = static_cast<mrpt_msgs__msg__GraphConstraint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mrpt_msgs__msg__GraphConstraint(cdr, ros_message);
}

static uint32_t _GraphConstraint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mrpt_msgs__msg__GraphConstraint(
      untyped_ros_message, 0));
}

static size_t _GraphConstraint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mrpt_msgs__msg__GraphConstraint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraphConstraint = {
  "mrpt_msgs::msg",
  "GraphConstraint",
  _GraphConstraint__cdr_serialize,
  _GraphConstraint__cdr_deserialize,
  _GraphConstraint__get_serialized_size,
  _GraphConstraint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GraphConstraint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraphConstraint,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__GraphConstraint__get_type_hash,
  &mrpt_msgs__msg__GraphConstraint__get_type_description,
  &mrpt_msgs__msg__GraphConstraint__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mrpt_msgs, msg, GraphConstraint)() {
  return &_GraphConstraint__type_support;
}

#if defined(__cplusplus)
}
#endif
