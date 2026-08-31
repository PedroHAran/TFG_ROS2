// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/node_id_with_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'str_id'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeIDWithPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: str_id
  {
    out << "str_id: ";
    to_flow_style_yaml(msg.str_id, out);
    out << ", ";
  }

  // member: node_id_loc
  {
    out << "node_id_loc: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id_loc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeIDWithPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: str_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str_id:\n";
    to_block_style_yaml(msg.str_id, out, indentation + 2);
  }

  // member: node_id_loc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id_loc: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id_loc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeIDWithPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrpt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_msgs::msg::NodeIDWithPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::NodeIDWithPose & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::NodeIDWithPose>()
{
  return "mrpt_msgs::msg::NodeIDWithPose";
}

template<>
inline const char * name<mrpt_msgs::msg::NodeIDWithPose>()
{
  return "mrpt_msgs/msg/NodeIDWithPose";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::NodeIDWithPose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::NodeIDWithPose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<mrpt_msgs::msg::NodeIDWithPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__TRAITS_HPP_
