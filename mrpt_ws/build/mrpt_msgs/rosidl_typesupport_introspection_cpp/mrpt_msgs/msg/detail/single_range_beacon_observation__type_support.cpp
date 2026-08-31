// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/detail/single_range_beacon_observation__functions.h"
#include "mrpt_msgs/msg/detail/single_range_beacon_observation__struct.hpp"
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

void SingleRangeBeaconObservation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::msg::SingleRangeBeaconObservation(_init);
}

void SingleRangeBeaconObservation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::msg::SingleRangeBeaconObservation *>(message_memory);
  typed_message->~SingleRangeBeaconObservation();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SingleRangeBeaconObservation_message_member_array[2] = {
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::SingleRangeBeaconObservation, range),  // bytes offset in struct
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
    offsetof(mrpt_msgs::msg::SingleRangeBeaconObservation, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SingleRangeBeaconObservation_message_members = {
  "mrpt_msgs::msg",  // message namespace
  "SingleRangeBeaconObservation",  // message name
  2,  // number of fields
  sizeof(mrpt_msgs::msg::SingleRangeBeaconObservation),
  false,  // has_any_key_member_
  SingleRangeBeaconObservation_message_member_array,  // message members
  SingleRangeBeaconObservation_init_function,  // function to initialize message memory (memory has to be allocated)
  SingleRangeBeaconObservation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SingleRangeBeaconObservation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SingleRangeBeaconObservation_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_hash,
  &mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_description,
  &mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::msg::SingleRangeBeaconObservation>()
{
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::SingleRangeBeaconObservation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, msg, SingleRangeBeaconObservation)() {
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::SingleRangeBeaconObservation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
