// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"
#include "mrpt_msgs/msg/detail/network_of_poses__struct.hpp"
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

void NetworkOfPoses_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::msg::NetworkOfPoses(_init);
}

void NetworkOfPoses_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::msg::NetworkOfPoses *>(message_memory);
  typed_message->~NetworkOfPoses();
}

size_t size_function__NetworkOfPoses__constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrpt_msgs::msg::GraphConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NetworkOfPoses__constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrpt_msgs::msg::GraphConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__NetworkOfPoses__constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrpt_msgs::msg::GraphConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__NetworkOfPoses__constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrpt_msgs::msg::GraphConstraint *>(
    get_const_function__NetworkOfPoses__constraints(untyped_member, index));
  auto & value = *reinterpret_cast<mrpt_msgs::msg::GraphConstraint *>(untyped_value);
  value = item;
}

void assign_function__NetworkOfPoses__constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrpt_msgs::msg::GraphConstraint *>(
    get_function__NetworkOfPoses__constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrpt_msgs::msg::GraphConstraint *>(untyped_value);
  item = value;
}

void resize_function__NetworkOfPoses__constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrpt_msgs::msg::GraphConstraint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NetworkOfPoses_message_member_array[3] = {
  {
    "root",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::NetworkOfPoses, root),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::msg::NodeIDWithPoseVec>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::NetworkOfPoses, nodes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::msg::GraphConstraint>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::NetworkOfPoses, constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__NetworkOfPoses__constraints,  // size() function pointer
    get_const_function__NetworkOfPoses__constraints,  // get_const(index) function pointer
    get_function__NetworkOfPoses__constraints,  // get(index) function pointer
    fetch_function__NetworkOfPoses__constraints,  // fetch(index, &value) function pointer
    assign_function__NetworkOfPoses__constraints,  // assign(index, value) function pointer
    resize_function__NetworkOfPoses__constraints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NetworkOfPoses_message_members = {
  "mrpt_msgs::msg",  // message namespace
  "NetworkOfPoses",  // message name
  3,  // number of fields
  sizeof(mrpt_msgs::msg::NetworkOfPoses),
  false,  // has_any_key_member_
  NetworkOfPoses_message_member_array,  // message members
  NetworkOfPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  NetworkOfPoses_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NetworkOfPoses_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NetworkOfPoses_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__NetworkOfPoses__get_type_hash,
  &mrpt_msgs__msg__NetworkOfPoses__get_type_description,
  &mrpt_msgs__msg__NetworkOfPoses__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::msg::NetworkOfPoses>()
{
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::NetworkOfPoses_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, msg, NetworkOfPoses)() {
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::NetworkOfPoses_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
