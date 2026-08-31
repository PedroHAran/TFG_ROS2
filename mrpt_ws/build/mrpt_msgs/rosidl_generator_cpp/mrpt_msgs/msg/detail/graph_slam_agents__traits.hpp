// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agents.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/graph_slam_agents__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'list'
#include "mrpt_msgs/msg/detail/graph_slam_agent__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphSlamAgents & msg,
  std::ostream & out)
{
  out << "{";
  // member: list
  {
    if (msg.list.size() == 0) {
      out << "list: []";
    } else {
      out << "list: [";
      size_t pending_items = msg.list.size();
      for (auto item : msg.list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphSlamAgents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list.size() == 0) {
      out << "list: []\n";
    } else {
      out << "list:\n";
      for (auto item : msg.list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphSlamAgents & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::GraphSlamAgents & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::GraphSlamAgents & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::GraphSlamAgents>()
{
  return "mrpt_msgs::msg::GraphSlamAgents";
}

template<>
inline const char * name<mrpt_msgs::msg::GraphSlamAgents>()
{
  return "mrpt_msgs/msg/GraphSlamAgents";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::GraphSlamAgents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::GraphSlamAgents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::GraphSlamAgents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__TRAITS_HPP_
