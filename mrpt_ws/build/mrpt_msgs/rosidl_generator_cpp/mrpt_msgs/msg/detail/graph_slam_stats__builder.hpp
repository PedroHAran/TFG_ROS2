// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/GraphSlamStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_stats.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/graph_slam_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphSlamStats_slam_evaluation_metric
{
public:
  explicit Init_GraphSlamStats_slam_evaluation_metric(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::GraphSlamStats slam_evaluation_metric(::mrpt_msgs::msg::GraphSlamStats::_slam_evaluation_metric_type arg)
  {
    msg_.slam_evaluation_metric = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_loop_closures
{
public:
  explicit Init_GraphSlamStats_loop_closures(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  Init_GraphSlamStats_slam_evaluation_metric loop_closures(::mrpt_msgs::msg::GraphSlamStats::_loop_closures_type arg)
  {
    msg_.loop_closures = std::move(arg);
    return Init_GraphSlamStats_slam_evaluation_metric(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_edges_odom
{
public:
  explicit Init_GraphSlamStats_edges_odom(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  Init_GraphSlamStats_loop_closures edges_odom(::mrpt_msgs::msg::GraphSlamStats::_edges_odom_type arg)
  {
    msg_.edges_odom = std::move(arg);
    return Init_GraphSlamStats_loop_closures(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_edges_icp_3d
{
public:
  explicit Init_GraphSlamStats_edges_icp_3d(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  Init_GraphSlamStats_edges_odom edges_icp_3d(::mrpt_msgs::msg::GraphSlamStats::_edges_icp_3d_type arg)
  {
    msg_.edges_icp_3d = std::move(arg);
    return Init_GraphSlamStats_edges_odom(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_edges_icp_2d
{
public:
  explicit Init_GraphSlamStats_edges_icp_2d(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  Init_GraphSlamStats_edges_icp_3d edges_icp_2d(::mrpt_msgs::msg::GraphSlamStats::_edges_icp_2d_type arg)
  {
    msg_.edges_icp_2d = std::move(arg);
    return Init_GraphSlamStats_edges_icp_3d(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_edges_total
{
public:
  explicit Init_GraphSlamStats_edges_total(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  Init_GraphSlamStats_edges_icp_2d edges_total(::mrpt_msgs::msg::GraphSlamStats::_edges_total_type arg)
  {
    msg_.edges_total = std::move(arg);
    return Init_GraphSlamStats_edges_icp_2d(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_nodes_total
{
public:
  explicit Init_GraphSlamStats_nodes_total(::mrpt_msgs::msg::GraphSlamStats & msg)
  : msg_(msg)
  {}
  Init_GraphSlamStats_edges_total nodes_total(::mrpt_msgs::msg::GraphSlamStats::_nodes_total_type arg)
  {
    msg_.nodes_total = std::move(arg);
    return Init_GraphSlamStats_edges_total(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

class Init_GraphSlamStats_header
{
public:
  Init_GraphSlamStats_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphSlamStats_nodes_total header(::mrpt_msgs::msg::GraphSlamStats::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GraphSlamStats_nodes_total(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::GraphSlamStats>()
{
  return mrpt_msgs::msg::builder::Init_GraphSlamStats_header();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__BUILDER_HPP_
