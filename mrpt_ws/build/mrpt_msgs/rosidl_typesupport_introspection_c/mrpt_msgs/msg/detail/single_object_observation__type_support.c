// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/SingleObjectObservation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/single_object_observation__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/single_object_observation__functions.h"
#include "mrpt_msgs/msg/detail/single_object_observation__struct.h"


// Include directives for member types
// Member `pose_wo`
// Member `pose_so`
#include "geometry_msgs/msg/pose.h"
// Member `pose_wo`
// Member `pose_so`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `shape_variables`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__SingleObjectObservation__init(message_memory);
}

void mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_fini_function(void * message_memory)
{
  mrpt_msgs__msg__SingleObjectObservation__fini(message_memory);
}

size_t mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__size_function__SingleObjectObservation__shape_variables(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__get_const_function__SingleObjectObservation__shape_variables(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__get_function__SingleObjectObservation__shape_variables(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__fetch_function__SingleObjectObservation__shape_variables(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__get_const_function__SingleObjectObservation__shape_variables(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__assign_function__SingleObjectObservation__shape_variables(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__get_function__SingleObjectObservation__shape_variables(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__resize_function__SingleObjectObservation__shape_variables(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_member_array[7] = {
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_wo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, pose_wo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_so",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, pose_so),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_variables",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, shape_variables),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__size_function__SingleObjectObservation__shape_variables,  // size() function pointer
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__get_const_function__SingleObjectObservation__shape_variables,  // get_const(index) function pointer
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__get_function__SingleObjectObservation__shape_variables,  // get(index) function pointer
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__fetch_function__SingleObjectObservation__shape_variables,  // fetch(index, &value) function pointer
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__assign_function__SingleObjectObservation__shape_variables,  // assign(index, value) function pointer
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__resize_function__SingleObjectObservation__shape_variables  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__SingleObjectObservation, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "SingleObjectObservation",  // message name
  7,  // number of fields
  sizeof(mrpt_msgs__msg__SingleObjectObservation),
  false,  // has_any_key_member_
  mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_member_array,  // message members
  mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__SingleObjectObservation__get_type_hash,
  &mrpt_msgs__msg__SingleObjectObservation__get_type_description,
  &mrpt_msgs__msg__SingleObjectObservation__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, SingleObjectObservation)() {
  mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__SingleObjectObservation__rosidl_typesupport_introspection_c__SingleObjectObservation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
