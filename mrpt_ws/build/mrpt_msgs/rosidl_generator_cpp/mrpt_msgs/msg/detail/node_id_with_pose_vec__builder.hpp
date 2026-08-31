// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithPoseVec.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose_vec.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeIDWithPoseVec_vec
{
public:
  Init_NodeIDWithPoseVec_vec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_msgs::msg::NodeIDWithPoseVec vec(::mrpt_msgs::msg::NodeIDWithPoseVec::_vec_type arg)
  {
    msg_.vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithPoseVec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::NodeIDWithPoseVec>()
{
  return mrpt_msgs::msg::builder::Init_NodeIDWithPoseVec_vec();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__BUILDER_HPP_
