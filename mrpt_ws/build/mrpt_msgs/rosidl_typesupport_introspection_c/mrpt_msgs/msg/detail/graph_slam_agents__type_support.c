// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/graph_slam_agents__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/graph_slam_agents__functions.h"
#include "mrpt_msgs/msg/detail/graph_slam_agents__struct.h"


// Include directives for member types
// Member `list`
#include "mrpt_msgs/msg/graph_slam_agent.h"
// Member `list`
#include "mrpt_msgs/msg/detail/graph_slam_agent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__GraphSlamAgents__init(message_memory);
}

void mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_fini_function(void * message_memory)
{
  mrpt_msgs__msg__GraphSlamAgents__fini(message_memory);
}

size_t mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__size_function__GraphSlamAgents__list(
  const void * untyped_member)
{
  const mrpt_msgs__msg__GraphSlamAgent__Sequence * member =
    (const mrpt_msgs__msg__GraphSlamAgent__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__get_const_function__GraphSlamAgents__list(
  const void * untyped_member, size_t index)
{
  const mrpt_msgs__msg__GraphSlamAgent__Sequence * member =
    (const mrpt_msgs__msg__GraphSlamAgent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__get_function__GraphSlamAgents__list(
  void * untyped_member, size_t index)
{
  mrpt_msgs__msg__GraphSlamAgent__Sequence * member =
    (mrpt_msgs__msg__GraphSlamAgent__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__fetch_function__GraphSlamAgents__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrpt_msgs__msg__GraphSlamAgent * item =
    ((const mrpt_msgs__msg__GraphSlamAgent *)
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__get_const_function__GraphSlamAgents__list(untyped_member, index));
  mrpt_msgs__msg__GraphSlamAgent * value =
    (mrpt_msgs__msg__GraphSlamAgent *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__assign_function__GraphSlamAgents__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrpt_msgs__msg__GraphSlamAgent * item =
    ((mrpt_msgs__msg__GraphSlamAgent *)
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__get_function__GraphSlamAgents__list(untyped_member, index));
  const mrpt_msgs__msg__GraphSlamAgent * value =
    (const mrpt_msgs__msg__GraphSlamAgent *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__resize_function__GraphSlamAgents__list(
  void * untyped_member, size_t size)
{
  mrpt_msgs__msg__GraphSlamAgent__Sequence * member =
    (mrpt_msgs__msg__GraphSlamAgent__Sequence *)(untyped_member);
  mrpt_msgs__msg__GraphSlamAgent__Sequence__fini(member);
  return mrpt_msgs__msg__GraphSlamAgent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_member_array[1] = {
  {
    "list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgents, list),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__size_function__GraphSlamAgents__list,  // size() function pointer
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__get_const_function__GraphSlamAgents__list,  // get_const(index) function pointer
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__get_function__GraphSlamAgents__list,  // get(index) function pointer
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__fetch_function__GraphSlamAgents__list,  // fetch(index, &value) function pointer
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__assign_function__GraphSlamAgents__list,  // assign(index, value) function pointer
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__resize_function__GraphSlamAgents__list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "GraphSlamAgents",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs__msg__GraphSlamAgents),
  false,  // has_any_key_member_
  mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_member_array,  // message members
  mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__GraphSlamAgents__get_type_hash,
  &mrpt_msgs__msg__GraphSlamAgents__get_type_description,
  &mrpt_msgs__msg__GraphSlamAgents__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, GraphSlamAgents)() {
  mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, GraphSlamAgent)();
  if (!mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__GraphSlamAgents__rosidl_typesupport_introspection_c__GraphSlamAgents_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
