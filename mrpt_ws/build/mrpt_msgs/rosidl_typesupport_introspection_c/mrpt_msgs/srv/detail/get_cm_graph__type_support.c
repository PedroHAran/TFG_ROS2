// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"


// Include directives for member types
// Member `node_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__srv__GetCMGraph_Request__init(message_memory);
}

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_fini_function(void * message_memory)
{
  mrpt_msgs__srv__GetCMGraph_Request__fini(message_memory);
}

size_t mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Request__node_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Request__node_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Request__node_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Request__node_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Request__node_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_member_array[1] = {
  {
    "node_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Request, node_ids),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Request__node_ids,  // size() function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Request__node_ids,  // get_const(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Request__node_ids,  // get(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Request__node_ids,  // fetch(index, &value) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Request__node_ids,  // assign(index, value) function pointer
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Request__node_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_members = {
  "mrpt_msgs__srv",  // message namespace
  "GetCMGraph_Request",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs__srv__GetCMGraph_Request),
  false,  // has_any_key_member_
  mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_member_array,  // message members
  mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle = {
  0,
  &mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)() {
  if (!mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"


// Include directives for member types
// Member `cm_graph`
#include "mrpt_msgs/msg/network_of_poses.h"
// Member `cm_graph`
#include "mrpt_msgs/msg/detail/network_of_poses__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__srv__GetCMGraph_Response__init(message_memory);
}

void mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_fini_function(void * message_memory)
{
  mrpt_msgs__srv__GetCMGraph_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_member_array[1] = {
  {
    "cm_graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Response, cm_graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_members = {
  "mrpt_msgs__srv",  // message namespace
  "GetCMGraph_Response",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs__srv__GetCMGraph_Response),
  false,  // has_any_key_member_
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_member_array,  // message members
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle = {
  0,
  &mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)() {
  mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, NetworkOfPoses)();
  if (!mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mrpt_msgs/srv/get_cm_graph.h"
// Member `request`
// Member `response`
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__srv__GetCMGraph_Event__init(message_memory);
}

void mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_fini_function(void * message_memory)
{
  mrpt_msgs__srv__GetCMGraph_Event__fini(message_memory);
}

size_t mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Event__request(
  const void * untyped_member)
{
  const mrpt_msgs__srv__GetCMGraph_Request__Sequence * member =
    (const mrpt_msgs__srv__GetCMGraph_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Event__request(
  const void * untyped_member, size_t index)
{
  const mrpt_msgs__srv__GetCMGraph_Request__Sequence * member =
    (const mrpt_msgs__srv__GetCMGraph_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Event__request(
  void * untyped_member, size_t index)
{
  mrpt_msgs__srv__GetCMGraph_Request__Sequence * member =
    (mrpt_msgs__srv__GetCMGraph_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrpt_msgs__srv__GetCMGraph_Request * item =
    ((const mrpt_msgs__srv__GetCMGraph_Request *)
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Event__request(untyped_member, index));
  mrpt_msgs__srv__GetCMGraph_Request * value =
    (mrpt_msgs__srv__GetCMGraph_Request *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrpt_msgs__srv__GetCMGraph_Request * item =
    ((mrpt_msgs__srv__GetCMGraph_Request *)
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Event__request(untyped_member, index));
  const mrpt_msgs__srv__GetCMGraph_Request * value =
    (const mrpt_msgs__srv__GetCMGraph_Request *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Event__request(
  void * untyped_member, size_t size)
{
  mrpt_msgs__srv__GetCMGraph_Request__Sequence * member =
    (mrpt_msgs__srv__GetCMGraph_Request__Sequence *)(untyped_member);
  mrpt_msgs__srv__GetCMGraph_Request__Sequence__fini(member);
  return mrpt_msgs__srv__GetCMGraph_Request__Sequence__init(member, size);
}

size_t mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Event__response(
  const void * untyped_member)
{
  const mrpt_msgs__srv__GetCMGraph_Response__Sequence * member =
    (const mrpt_msgs__srv__GetCMGraph_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Event__response(
  const void * untyped_member, size_t index)
{
  const mrpt_msgs__srv__GetCMGraph_Response__Sequence * member =
    (const mrpt_msgs__srv__GetCMGraph_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Event__response(
  void * untyped_member, size_t index)
{
  mrpt_msgs__srv__GetCMGraph_Response__Sequence * member =
    (mrpt_msgs__srv__GetCMGraph_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrpt_msgs__srv__GetCMGraph_Response * item =
    ((const mrpt_msgs__srv__GetCMGraph_Response *)
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Event__response(untyped_member, index));
  mrpt_msgs__srv__GetCMGraph_Response * value =
    (mrpt_msgs__srv__GetCMGraph_Response *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrpt_msgs__srv__GetCMGraph_Response * item =
    ((mrpt_msgs__srv__GetCMGraph_Response *)
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Event__response(untyped_member, index));
  const mrpt_msgs__srv__GetCMGraph_Response * value =
    (const mrpt_msgs__srv__GetCMGraph_Response *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Event__response(
  void * untyped_member, size_t size)
{
  mrpt_msgs__srv__GetCMGraph_Response__Sequence * member =
    (mrpt_msgs__srv__GetCMGraph_Response__Sequence *)(untyped_member);
  mrpt_msgs__srv__GetCMGraph_Response__Sequence__fini(member);
  return mrpt_msgs__srv__GetCMGraph_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Event, request),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Event__request,  // size() function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Event__request,  // get_const(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Event__request,  // get(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Event__request,  // fetch(index, &value) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Event__request,  // assign(index, value) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrpt_msgs__srv__GetCMGraph_Event, response),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__size_function__GetCMGraph_Event__response,  // size() function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_const_function__GetCMGraph_Event__response,  // get_const(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__get_function__GetCMGraph_Event__response,  // get(index) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__fetch_function__GetCMGraph_Event__response,  // fetch(index, &value) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__assign_function__GetCMGraph_Event__response,  // assign(index, value) function pointer
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__resize_function__GetCMGraph_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_members = {
  "mrpt_msgs__srv",  // message namespace
  "GetCMGraph_Event",  // message name
  3,  // number of fields
  sizeof(mrpt_msgs__srv__GetCMGraph_Event),
  false,  // has_any_key_member_
  mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_member_array,  // message members
  mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_type_support_handle = {
  0,
  &mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Event)() {
  mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)();
  mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)();
  if (!mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_members = {
  "mrpt_msgs__srv",  // service namespace
  "GetCMGraph",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle,
  NULL,  // response message
  // mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle
  NULL  // event_message
  // mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle
};


static rosidl_service_type_support_t mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle = {
  0,
  &mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_members,
  get_service_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Request__rosidl_typesupport_introspection_c__GetCMGraph_Request_message_type_support_handle,
  &mrpt_msgs__srv__GetCMGraph_Response__rosidl_typesupport_introspection_c__GetCMGraph_Response_message_type_support_handle,
  &mrpt_msgs__srv__GetCMGraph_Event__rosidl_typesupport_introspection_c__GetCMGraph_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mrpt_msgs,
    srv,
    GetCMGraph
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mrpt_msgs,
    srv,
    GetCMGraph
  ),
  &mrpt_msgs__srv__GetCMGraph__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph__get_type_description,
  &mrpt_msgs__srv__GetCMGraph__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph)(void) {
  if (!mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle.typesupport_identifier) {
    mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, srv, GetCMGraph_Event)()->data;
  }

  return &mrpt_msgs__srv__detail__get_cm_graph__rosidl_typesupport_introspection_c__GetCMGraph_service_type_support_handle;
}
