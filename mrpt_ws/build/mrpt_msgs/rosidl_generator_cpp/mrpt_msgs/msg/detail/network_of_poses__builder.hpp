// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/network_of_poses.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/network_of_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkOfPoses_constraints
{
public:
  explicit Init_NetworkOfPoses_constraints(::mrpt_msgs::msg::NetworkOfPoses & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::NetworkOfPoses constraints(::mrpt_msgs::msg::NetworkOfPoses::_constraints_type arg)
  {
    msg_.constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::NetworkOfPoses msg_;
};

class Init_NetworkOfPoses_nodes
{
public:
  explicit Init_NetworkOfPoses_nodes(::mrpt_msgs::msg::NetworkOfPoses & msg)
  : msg_(msg)
  {}
  Init_NetworkOfPoses_constraints nodes(::mrpt_msgs::msg::NetworkOfPoses::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_NetworkOfPoses_constraints(msg_);
  }

private:
  ::mrpt_msgs::msg::NetworkOfPoses msg_;
};

class Init_NetworkOfPoses_root
{
public:
  Init_NetworkOfPoses_root()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkOfPoses_nodes root(::mrpt_msgs::msg::NetworkOfPoses::_root_type arg)
  {
    msg_.root = std::move(arg);
    return Init_NetworkOfPoses_nodes(msg_);
  }

private:
  ::mrpt_msgs::msg::NetworkOfPoses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::NetworkOfPoses>()
{
  return mrpt_msgs::msg::builder::Init_NetworkOfPoses_root();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__BUILDER_HPP_
