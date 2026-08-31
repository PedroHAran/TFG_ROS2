// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/network_of_poses.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/network_of_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__traits.hpp"
// Member 'constraints'
#include "mrpt_msgs/msg/detail/graph_constraint__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkOfPoses & msg,
  std::ostream & out)
{
  out << "{";
  // member: root
  {
    out << "root: ";
    rosidl_generator_traits::value_to_yaml(msg.root, out);
    out << ", ";
  }

  // member: nodes
  {
    out << "nodes: ";
    to_flow_style_yaml(msg.nodes, out);
    out << ", ";
  }

  // member: constraints
  {
    if (msg.constraints.size() == 0) {
      out << "constraints: []";
    } else {
      out << "constraints: [";
      size_t pending_items = msg.constraints.size();
      for (auto item : msg.constraints) {
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
  const NetworkOfPoses & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: root
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root: ";
    rosidl_generator_traits::value_to_yaml(msg.root, out);
    out << "\n";
  }

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodes:\n";
    to_block_style_yaml(msg.nodes, out, indentation + 2);
  }

  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraints.size() == 0) {
      out << "constraints: []\n";
    } else {
      out << "constraints:\n";
      for (auto item : msg.constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkOfPoses & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::NetworkOfPoses & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::NetworkOfPoses & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::NetworkOfPoses>()
{
  return "mrpt_msgs::msg::NetworkOfPoses";
}

template<>
inline const char * name<mrpt_msgs::msg::NetworkOfPoses>()
{
  return "mrpt_msgs/msg/NetworkOfPoses";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::NetworkOfPoses>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::NetworkOfPoses>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::NetworkOfPoses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__TRAITS_HPP_
