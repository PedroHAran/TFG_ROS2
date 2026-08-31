// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agent.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphSlamAgent_agent_id
{
public:
  explicit Init_GraphSlamAgent_agent_id(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::GraphSlamAgent agent_id(::mrpt_msgs::msg::GraphSlamAgent::_agent_id_type arg)
  {
    msg_.agent_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_topic_namespace
{
public:
  explicit Init_GraphSlamAgent_topic_namespace(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  Init_GraphSlamAgent_agent_id topic_namespace(::mrpt_msgs::msg::GraphSlamAgent::_topic_namespace_type arg)
  {
    msg_.topic_namespace = std::move(arg);
    return Init_GraphSlamAgent_agent_id(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_last_seen_time
{
public:
  explicit Init_GraphSlamAgent_last_seen_time(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  Init_GraphSlamAgent_topic_namespace last_seen_time(::mrpt_msgs::msg::GraphSlamAgent::_last_seen_time_type arg)
  {
    msg_.last_seen_time = std::move(arg);
    return Init_GraphSlamAgent_topic_namespace(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_is_online
{
public:
  explicit Init_GraphSlamAgent_is_online(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  Init_GraphSlamAgent_last_seen_time is_online(::mrpt_msgs::msg::GraphSlamAgent::_is_online_type arg)
  {
    msg_.is_online = std::move(arg);
    return Init_GraphSlamAgent_last_seen_time(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_port
{
public:
  explicit Init_GraphSlamAgent_port(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  Init_GraphSlamAgent_is_online port(::mrpt_msgs::msg::GraphSlamAgent::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_GraphSlamAgent_is_online(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_ip_addr
{
public:
  explicit Init_GraphSlamAgent_ip_addr(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  Init_GraphSlamAgent_port ip_addr(::mrpt_msgs::msg::GraphSlamAgent::_ip_addr_type arg)
  {
    msg_.ip_addr = std::move(arg);
    return Init_GraphSlamAgent_port(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_hostname
{
public:
  explicit Init_GraphSlamAgent_hostname(::mrpt_msgs::msg::GraphSlamAgent & msg)
  : msg_(msg)
  {}
  Init_GraphSlamAgent_ip_addr hostname(::mrpt_msgs::msg::GraphSlamAgent::_hostname_type arg)
  {
    msg_.hostname = std::move(arg);
    return Init_GraphSlamAgent_ip_addr(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

class Init_GraphSlamAgent_name
{
public:
  Init_GraphSlamAgent_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphSlamAgent_hostname name(::mrpt_msgs::msg::GraphSlamAgent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GraphSlamAgent_hostname(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphSlamAgent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::GraphSlamAgent>()
{
  return mrpt_msgs::msg::builder::Init_GraphSlamAgent_name();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__BUILDER_HPP_
