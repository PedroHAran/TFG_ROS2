// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agents.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/graph_slam_agents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphSlamAgents_list
{
public:
  Init_GraphSlamAgents_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_msgs::msg::GraphSlamAgents list(::mrpt_msgs::msg::GraphSlamAgents::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::GraphSlamAgents>()
{
  return mrpt_msgs::msg::builder::Init_GraphSlamAgents_list();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__BUILDER_HPP_
