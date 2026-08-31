// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/detail/graph_constraint__functions.h"
#include "mrpt_msgs/msg/detail/graph_constraint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mrpt_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GraphConstraint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::msg::GraphConstraint(_init);
}

void GraphConstraint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::msg::GraphConstraint *>(message_memory);
  typed_message->~GraphConstraint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraphConstraint_message_member_array[3] = {
  {
    "node_id_from",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::GraphConstraint, node_id_from),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "node_id_to",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::GraphConstraint, node_id_to),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constraint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseWithCovariance>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::GraphConstraint, constraint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraphConstraint_message_members = {
  "mrpt_msgs::msg",  // message namespace
  "GraphConstraint",  // message name
  3,  // number of fields
  sizeof(mrpt_msgs::msg::GraphConstraint),
  false,  // has_any_key_member_
  GraphConstraint_message_member_array,  // message members
  GraphConstraint_init_function,  // function to initialize message memory (memory has to be allocated)
  GraphConstraint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraphConstraint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraphConstraint_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__GraphConstraint__get_type_hash,
  &mrpt_msgs__msg__GraphConstraint__get_type_description,
  &mrpt_msgs__msg__GraphConstraint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::msg::GraphConstraint>()
{
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::GraphConstraint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, msg, GraphConstraint)() {
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::GraphConstraint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
