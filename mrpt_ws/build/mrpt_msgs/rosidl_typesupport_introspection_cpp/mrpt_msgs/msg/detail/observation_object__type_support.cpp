// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:msg/ObservationObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mrpt_msgs/msg/detail/observation_object__functions.h"
#include "mrpt_msgs/msg/detail/observation_object__struct.hpp"
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

void ObservationObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mrpt_msgs::msg::ObservationObject(_init);
}

void ObservationObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mrpt_msgs::msg::ObservationObject *>(message_memory);
  typed_message->~ObservationObject();
}

size_t size_function__ObservationObject__sensed_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mrpt_msgs::msg::SingleObjectObservation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObservationObject__sensed_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mrpt_msgs::msg::SingleObjectObservation> *>(untyped_member);
  return &member[index];
}

void * get_function__ObservationObject__sensed_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mrpt_msgs::msg::SingleObjectObservation> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObservationObject__sensed_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mrpt_msgs::msg::SingleObjectObservation *>(
    get_const_function__ObservationObject__sensed_data(untyped_member, index));
  auto & value = *reinterpret_cast<mrpt_msgs::msg::SingleObjectObservation *>(untyped_value);
  value = item;
}

void assign_function__ObservationObject__sensed_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mrpt_msgs::msg::SingleObjectObservation *>(
    get_function__ObservationObject__sensed_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const mrpt_msgs::msg::SingleObjectObservation *>(untyped_value);
  item = value;
}

void resize_function__ObservationObject__sensed_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mrpt_msgs::msg::SingleObjectObservation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObservationObject_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_pose_on_robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, sensor_pose_on_robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_sensor_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, min_sensor_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_sensor_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, max_sensor_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_std_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, sensor_std_range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_std_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, sensor_std_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_std_pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, sensor_std_pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensed_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mrpt_msgs::msg::SingleObjectObservation>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs::msg::ObservationObject, sensed_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObservationObject__sensed_data,  // size() function pointer
    get_const_function__ObservationObject__sensed_data,  // get_const(index) function pointer
    get_function__ObservationObject__sensed_data,  // get(index) function pointer
    fetch_function__ObservationObject__sensed_data,  // fetch(index, &value) function pointer
    assign_function__ObservationObject__sensed_data,  // assign(index, value) function pointer
    resize_function__ObservationObject__sensed_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObservationObject_message_members = {
  "mrpt_msgs::msg",  // message namespace
  "ObservationObject",  // message name
  8,  // number of fields
  sizeof(mrpt_msgs::msg::ObservationObject),
  false,  // has_any_key_member_
  ObservationObject_message_member_array,  // message members
  ObservationObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ObservationObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObservationObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObservationObject_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__ObservationObject__get_type_hash,
  &mrpt_msgs__msg__ObservationObject__get_type_description,
  &mrpt_msgs__msg__ObservationObject__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mrpt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::msg::ObservationObject>()
{
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::ObservationObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, msg, ObservationObject)() {
  return &::mrpt_msgs::msg::rosidl_typesupport_introspection_cpp::ObservationObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
