// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/node_id_with_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeIDWithPose_node_id_loc
{
public:
  explicit Init_NodeIDWithPose_node_id_loc(::mrpt_msgs::msg::NodeIDWithPose & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::NodeIDWithPose node_id_loc(::mrpt_msgs::msg::NodeIDWithPose::_node_id_loc_type arg)
  {
    msg_.node_id_loc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithPose msg_;
};

class Init_NodeIDWithPose_str_id
{
public:
  explicit Init_NodeIDWithPose_str_id(::mrpt_msgs::msg::NodeIDWithPose & msg)
  : msg_(msg)
  {}
  Init_NodeIDWithPose_node_id_loc str_id(::mrpt_msgs::msg::NodeIDWithPose::_str_id_type arg)
  {
    msg_.str_id = std::move(arg);
    return Init_NodeIDWithPose_node_id_loc(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithPose msg_;
};

class Init_NodeIDWithPose_pose
{
public:
  explicit Init_NodeIDWithPose_pose(::mrpt_msgs::msg::NodeIDWithPose & msg)
  : msg_(msg)
  {}
  Init_NodeIDWithPose_str_id pose(::mrpt_msgs::msg::NodeIDWithPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_NodeIDWithPose_str_id(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithPose msg_;
};

class Init_NodeIDWithPose_node_id
{
public:
  Init_NodeIDWithPose_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeIDWithPose_pose node_id(::mrpt_msgs::msg::NodeIDWithPose::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_NodeIDWithPose_pose(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::NodeIDWithPose>()
{
  return mrpt_msgs::msg::builder::Init_NodeIDWithPose_node_id();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__BUILDER_HPP_
