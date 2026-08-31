// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetCMGraph_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::srv::GetCMGraph_Request(_init);
}

void GetCMGraph_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::srv::GetCMGraph_Request *>(message_memory);
  typed_message->~GetCMGraph_Request();
}

size_t size_function__GetCMGraph_Request__node_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetCMGraph_Request__node_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCMGraph_Request__node_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCMGraph_Request__node_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__GetCMGraph_Request__node_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__GetCMGraph_Request__node_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__GetCMGraph_Request__node_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__GetCMGraph_Request__node_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetCMGraph_Request_message_member_array[1] = {
  {
    "node_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::srv::GetCMGraph_Request, node_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCMGraph_Request__node_ids,  // size() function pointer
    get_const_function__GetCMGraph_Request__node_ids,  // get_const(index) function pointer
    get_function__GetCMGraph_Request__node_ids,  // get(index) function pointer
    fetch_function__GetCMGraph_Request__node_ids,  // fetch(index, &value) function pointer
    assign_function__GetCMGraph_Request__node_ids,  // assign(index, value) function pointer
    resize_function__GetCMGraph_Request__node_ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetCMGraph_Request_message_members = {
  "mrpt_msgs::srv",  // message namespace
  "GetCMGraph_Request",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs::srv::GetCMGraph_Request),
  false,  // has_any_key_member_
  GetCMGraph_Request_message_member_array,  // message members
  GetCMGraph_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetCMGraph_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetCMGraph_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCMGraph_Request_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Request>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph_Request)() {
  return &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetCMGraph_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::srv::GetCMGraph_Response(_init);
}

void GetCMGraph_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::srv::GetCMGraph_Response *>(message_memory);
  typed_message->~GetCMGraph_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetCMGraph_Response_message_member_array[1] = {
  {
    "cm_graph",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::msg::NetworkOfPoses>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::srv::GetCMGraph_Response, cm_graph),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetCMGraph_Response_message_members = {
  "mrpt_msgs::srv",  // message namespace
  "GetCMGraph_Response",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs::srv::GetCMGraph_Response),
  false,  // has_any_key_member_
  GetCMGraph_Response_message_member_array,  // message members
  GetCMGraph_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetCMGraph_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetCMGraph_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCMGraph_Response_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Response>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph_Response)() {
  return &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetCMGraph_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::srv::GetCMGraph_Event(_init);
}

void GetCMGraph_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::srv::GetCMGraph_Event *>(message_memory);
  typed_message->~GetCMGraph_Event();
}

size_t size_function__GetCMGraph_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrpt_msgs::srv::GetCMGraph_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetCMGraph_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrpt_msgs::srv::GetCMGraph_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCMGraph_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrpt_msgs::srv::GetCMGraph_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCMGraph_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrpt_msgs::srv::GetCMGraph_Request *>(
    get_const_function__GetCMGraph_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<mrpt_msgs::srv::GetCMGraph_Request *>(untyped_value);
  value = item;
}

void assign_function__GetCMGraph_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrpt_msgs::srv::GetCMGraph_Request *>(
    get_function__GetCMGraph_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrpt_msgs::srv::GetCMGraph_Request *>(untyped_value);
  item = value;
}

void resize_function__GetCMGraph_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrpt_msgs::srv::GetCMGraph_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetCMGraph_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrpt_msgs::srv::GetCMGraph_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetCMGraph_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrpt_msgs::srv::GetCMGraph_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetCMGraph_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrpt_msgs::srv::GetCMGraph_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetCMGraph_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrpt_msgs::srv::GetCMGraph_Response *>(
    get_const_function__GetCMGraph_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<mrpt_msgs::srv::GetCMGraph_Response *>(untyped_value);
  value = item;
}

void assign_function__GetCMGraph_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrpt_msgs::srv::GetCMGraph_Response *>(
    get_function__GetCMGraph_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrpt_msgs::srv::GetCMGraph_Response *>(untyped_value);
  item = value;
}

void resize_function__GetCMGraph_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrpt_msgs::srv::GetCMGraph_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetCMGraph_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::srv::GetCMGraph_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrpt_msgs::srv::GetCMGraph_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCMGraph_Event__request,  // size() function pointer
    get_const_function__GetCMGraph_Event__request,  // get_const(index) function pointer
    get_function__GetCMGraph_Event__request,  // get(index) function pointer
    fetch_function__GetCMGraph_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetCMGraph_Event__request,  // assign(index, value) function pointer
    resize_function__GetCMGraph_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mrpt_msgs::srv::GetCMGraph_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetCMGraph_Event__response,  // size() function pointer
    get_const_function__GetCMGraph_Event__response,  // get_const(index) function pointer
    get_function__GetCMGraph_Event__response,  // get(index) function pointer
    fetch_function__GetCMGraph_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetCMGraph_Event__response,  // assign(index, value) function pointer
    resize_function__GetCMGraph_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetCMGraph_Event_message_members = {
  "mrpt_msgs::srv",  // message namespace
  "GetCMGraph_Event",  // message name
  3,  // number of fields
  sizeof(mrpt_msgs::srv::GetCMGraph_Event),
  false,  // has_any_key_member_
  GetCMGraph_Event_message_member_array,  // message members
  GetCMGraph_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetCMGraph_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetCMGraph_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCMGraph_Event_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Event>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph_Event)() {
  return &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetCMGraph_service_members = {
  "mrpt_msgs::srv",  // service namespace
  "GetCMGraph",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<mrpt_msgs::srv::GetCMGraph>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetCMGraph_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetCMGraph_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrpt_msgs::srv::GetCMGraph>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrpt_msgs::srv::GetCMGraph>,
  &mrpt_msgs__srv__GetCMGraph__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph__get_type_description,
  &mrpt_msgs__srv__GetCMGraph__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrpt_msgs::srv::GetCMGraph>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mrpt_msgs::srv::rosidl_typesupport_introspection_cpp::GetCMGraph_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrpt_msgs::srv::GetCMGraph_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrpt_msgs::srv::GetCMGraph_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mrpt_msgs::srv::GetCMGraph_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mrpt_msgs::srv::GetCMGraph>();
}

#ifdef __cplusplus
}
#endif
