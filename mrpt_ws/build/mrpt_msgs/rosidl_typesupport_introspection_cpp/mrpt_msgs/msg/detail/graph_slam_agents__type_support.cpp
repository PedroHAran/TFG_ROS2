// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/detail/graph_slam_agents__functions.h"
#include "mrpt_msgs/msg/detail/graph_slam_agents__struct.hpp"
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

void GraphSlamAgents_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::msg::GraphSlamAgents(_init);
}

void GraphSlamAgents_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::msg::GraphSlamAgents *>(message_memory);
  typed_message->~GraphSlamAgents();
}

size_t size_function__GraphSlamAgents__list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrpt_msgs::msg::GraphSlamAgent> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraphSlamAgents__list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrpt_msgs::msg::GraphSlamAgent> *>(untyped_member);
  return &member[index];
}

void * get_function__GraphSlamAgents__list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrpt_msgs::msg::GraphSlamAgent> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraphSlamAgents__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrpt_msgs::msg::GraphSlamAgent *>(
    get_const_function__GraphSlamAgents__list(untyped_member, index));
  auto & value = *reinterpret_cast<mrpt_msgs::msg::GraphSlamAgent *>(untyped_value);
  value = item;
}

void assign_function__GraphSlamAgents__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrpt_msgs::msg::GraphSlamAgent *>(
    get_function__GraphSlamAgents__list(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrpt_msgs::msg::GraphSlamAgent *>(untyped_value);
  item = value;
}

void resize_function__GraphSlamAgents__list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrpt_msgs::msg::GraphSlamAgent> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraphSlamAgents_message_member_array[1] = {
  {
    "list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::msg::GraphSlamAgent>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::GraphSlamAgents, list),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraphSlamAgents__list,  // size() function pointer
    get_const_function__GraphSlamAgents__list,  // get_const(index) function pointer
    get_function__GraphSlamAgents__list,  // get(index) function pointer
    fetch_function__GraphSlamAgents__list,  // fetch(index, &value) function pointer
    assign_function__GraphSlamAgents__list,  // assign(index, value) function pointer
    resize_function__GraphSlamAgents__list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraphSlamAgents_message_members = {
  "mrpt_msgs::msg",  // message namespace
  "GraphSlamAgents",  // message name
  1,  // number of fields
  sizeof(mrpt_msgs::msg::GraphSlamAgents),
  false,  // has_any_key_member_
  GraphSlamAgents_message_member_array,  // message members
  GraphSlamAgents_init_function,  // function to initialize message memory (memory has to be allocated)
  GraphSlamAgents_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraphSlamAgents_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraphSlamAgents_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__GraphSlamAgents__get_type_hash,
  &mrpt_msgs__msg__GraphSlamAgents__get_type_description,
  &mrpt_msgs__msg__GraphSlamAgents__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::msg::GraphSlamAgents>()
{
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::GraphSlamAgents_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, msg, GraphSlamAgents)() {
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::GraphSlamAgents_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
