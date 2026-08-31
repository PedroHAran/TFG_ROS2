// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agent.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'name'
// Member 'hostname'
// Member 'ip_addr'
// Member 'topic_namespace'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'is_online'
#include "std_msgs/msg/detail/bool__traits.hpp"
// Member 'last_seen_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphSlamAgent & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    to_flow_style_yaml(msg.name, out);
    out << ", ";
  }

  // member: hostname
  {
    out << "hostname: ";
    to_flow_style_yaml(msg.hostname, out);
    out << ", ";
  }

  // member: ip_addr
  {
    out << "ip_addr: ";
    to_flow_style_yaml(msg.ip_addr, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << ", ";
  }

  // member: is_online
  {
    out << "is_online: ";
    to_flow_style_yaml(msg.is_online, out);
    out << ", ";
  }

  // member: last_seen_time
  {
    out << "last_seen_time: ";
    to_flow_style_yaml(msg.last_seen_time, out);
    out << ", ";
  }

  // member: topic_namespace
  {
    out << "topic_namespace: ";
    to_flow_style_yaml(msg.topic_namespace, out);
    out << ", ";
  }

  // member: agent_id
  {
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphSlamAgent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name:\n";
    to_block_style_yaml(msg.name, out, indentation + 2);
  }

  // member: hostname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hostname:\n";
    to_block_style_yaml(msg.hostname, out, indentation + 2);
  }

  // member: ip_addr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip_addr:\n";
    to_block_style_yaml(msg.ip_addr, out, indentation + 2);
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }

  // member: is_online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_online:\n";
    to_block_style_yaml(msg.is_online, out, indentation + 2);
  }

  // member: last_seen_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_seen_time:\n";
    to_block_style_yaml(msg.last_seen_time, out, indentation + 2);
  }

  // member: topic_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_namespace:\n";
    to_block_style_yaml(msg.topic_namespace, out, indentation + 2);
  }

  // member: agent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphSlamAgent & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::GraphSlamAgent & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::GraphSlamAgent & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::GraphSlamAgent>()
{
  return "mrpt_msgs::msg::GraphSlamAgent";
}

template<>
inline const char * name<mrpt_msgs::msg::GraphSlamAgent>()
{
  return "mrpt_msgs/msg/GraphSlamAgent";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::GraphSlamAgent>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<std_msgs::msg::Bool>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::GraphSlamAgent>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<std_msgs::msg::Bool>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<mrpt_msgs::msg::GraphSlamAgent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__TRAITS_HPP_
