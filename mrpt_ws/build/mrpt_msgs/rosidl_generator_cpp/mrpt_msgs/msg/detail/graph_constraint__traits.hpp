// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_constraint.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/graph_constraint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'constraint'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphConstraint & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id_from
  {
    out << "node_id_from: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id_from, out);
    out << ", ";
  }

  // member: node_id_to
  {
    out << "node_id_to: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id_to, out);
    out << ", ";
  }

  // member: constraint
  {
    out << "constraint: ";
    to_flow_style_yaml(msg.constraint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id_from: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id_from, out);
    out << "\n";
  }

  // member: node_id_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id_to: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id_to, out);
    out << "\n";
  }

  // member: constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constraint:\n";
    to_block_style_yaml(msg.constraint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphConstraint & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::GraphConstraint & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::GraphConstraint & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::GraphConstraint>()
{
  return "mrpt_msgs::msg::GraphConstraint";
}

template<>
inline const char * name<mrpt_msgs::msg::GraphConstraint>()
{
  return "mrpt_msgs/msg/GraphConstraint";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::GraphConstraint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::GraphConstraint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value> {};

template<>
struct is_message<mrpt_msgs::msg::GraphConstraint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__TRAITS_HPP_
