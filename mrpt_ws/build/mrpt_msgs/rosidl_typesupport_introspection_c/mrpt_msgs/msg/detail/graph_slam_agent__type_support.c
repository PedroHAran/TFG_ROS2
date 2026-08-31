// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/graph_slam_agent__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/graph_slam_agent__functions.h"
#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.h"


// Include directives for member types
// Member `name`
// Member `hostname`
// Member `ip_addr`
// Member `topic_namespace`
#include "std_msgs/msg/string.h"
// Member `name`
// Member `hostname`
// Member `ip_addr`
// Member `topic_namespace`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `is_online`
#include "std_msgs/msg/bool.h"
// Member `is_online`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"
// Member `last_seen_time`
#include "builtin_interfaces/msg/time.h"
// Member `last_seen_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__GraphSlamAgent__init(message_memory);
}

void mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_fini_function(void * message_memory)
{
  mrpt_msgs__msg__GraphSlamAgent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hostname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, hostname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ip_addr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, ip_addr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_online",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, is_online),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_seen_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, last_seen_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic_namespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, topic_namespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agent_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__GraphSlamAgent, agent_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "GraphSlamAgent",  // message name
  8,  // number of fields
  sizeof(mrpt_msgs__msg__GraphSlamAgent),
  false,  // has_any_key_member_
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array,  // message members
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__GraphSlamAgent__get_type_hash,
  &mrpt_msgs__msg__GraphSlamAgent__get_type_description,
  &mrpt_msgs__msg__GraphSlamAgent__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, GraphSlamAgent)() {
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__GraphSlamAgent__rosidl_typesupport_introspection_c__GraphSlamAgent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
