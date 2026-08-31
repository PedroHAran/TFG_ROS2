// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/GraphSlamStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_stats.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/graph_slam_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphSlamStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: nodes_total
  {
    out << "nodes_total: ";
    rosidl_generator_traits::value_to_yaml(msg.nodes_total, out);
    out << ", ";
  }

  // member: edges_total
  {
    out << "edges_total: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_total, out);
    out << ", ";
  }

  // member: edges_icp_2d
  {
    out << "edges_icp_2d: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_icp_2d, out);
    out << ", ";
  }

  // member: edges_icp_3d
  {
    out << "edges_icp_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_icp_3d, out);
    out << ", ";
  }

  // member: edges_odom
  {
    out << "edges_odom: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_odom, out);
    out << ", ";
  }

  // member: loop_closures
  {
    out << "loop_closures: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closures, out);
    out << ", ";
  }

  // member: slam_evaluation_metric
  {
    if (msg.slam_evaluation_metric.size() == 0) {
      out << "slam_evaluation_metric: []";
    } else {
      out << "slam_evaluation_metric: [";
      size_t pending_items = msg.slam_evaluation_metric.size();
      for (auto item : msg.slam_evaluation_metric) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GraphSlamStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: nodes_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodes_total: ";
    rosidl_generator_traits::value_to_yaml(msg.nodes_total, out);
    out << "\n";
  }

  // member: edges_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edges_total: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_total, out);
    out << "\n";
  }

  // member: edges_icp_2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edges_icp_2d: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_icp_2d, out);
    out << "\n";
  }

  // member: edges_icp_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edges_icp_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_icp_3d, out);
    out << "\n";
  }

  // member: edges_odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edges_odom: ";
    rosidl_generator_traits::value_to_yaml(msg.edges_odom, out);
    out << "\n";
  }

  // member: loop_closures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closures: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closures, out);
    out << "\n";
  }

  // member: slam_evaluation_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.slam_evaluation_metric.size() == 0) {
      out << "slam_evaluation_metric: []\n";
    } else {
      out << "slam_evaluation_metric:\n";
      for (auto item : msg.slam_evaluation_metric) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphSlamStats & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::GraphSlamStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::GraphSlamStats & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::GraphSlamStats>()
{
  return "mrpt_msgs::msg::GraphSlamStats";
}

template<>
inline const char * name<mrpt_msgs::msg::GraphSlamStats>()
{
  return "mrpt_msgs/msg/GraphSlamStats";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::GraphSlamStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::GraphSlamStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::GraphSlamStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__TRAITS_HPP_
