// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:msg/SingleRangeBearingObservation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/detail/single_range_bearing_observation__functions.h"
#include "mrpt_msgs/msg/detail/single_range_bearing_observation__struct.hpp"
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

void SingleRangeBearingObservation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::msg::SingleRangeBearingObservation(_init);
}

void SingleRangeBearingObservation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::msg::SingleRangeBearingObservation *>(message_memory);
  typed_message->~SingleRangeBearingObservation();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SingleRangeBearingObservation_message_member_array[4] = {
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::SingleRangeBearingObservation, range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::SingleRangeBearingObservation, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::SingleRangeBearingObservation, pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::SingleRangeBearingObservation, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SingleRangeBearingObservation_message_members = {
  "mrpt_msgs::msg",  // message namespace
  "SingleRangeBearingObservation",  // message name
  4,  // number of fields
  sizeof(mrpt_msgs::msg::SingleRangeBearingObservation),
  false,  // has_any_key_member_
  SingleRangeBearingObservation_message_member_array,  // message members
  SingleRangeBearingObservation_init_function,  // function to initialize message memory (memory has to be allocated)
  SingleRangeBearingObservation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SingleRangeBearingObservation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SingleRangeBearingObservation_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__SingleRangeBearingObservation__get_type_hash,
  &mrpt_msgs__msg__SingleRangeBearingObservation__get_type_description,
  &mrpt_msgs__msg__SingleRangeBearingObservation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::msg::SingleRangeBearingObservation>()
{
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::SingleRangeBearingObservation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, msg, SingleRangeBearingObservation)() {
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::SingleRangeBearingObservation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
