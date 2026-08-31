// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/SingleObjectObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_object_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/single_object_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_SingleObjectObservation_id
{
public:
  explicit Init_SingleObjectObservation_id(::mrpt_msgs::msg::SingleObjectObservation & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::SingleObjectObservation id(::mrpt_msgs::msg::SingleObjectObservation::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

class Init_SingleObjectObservation_shape_variables
{
public:
  explicit Init_SingleObjectObservation_shape_variables(::mrpt_msgs::msg::SingleObjectObservation & msg)
  : msg_(msg)
  {}
  Init_SingleObjectObservation_id shape_variables(::mrpt_msgs::msg::SingleObjectObservation::_shape_variables_type arg)
  {
    msg_.shape_variables = std::move(arg);
    return Init_SingleObjectObservation_id(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

class Init_SingleObjectObservation_pose_so
{
public:
  explicit Init_SingleObjectObservation_pose_so(::mrpt_msgs::msg::SingleObjectObservation & msg)
  : msg_(msg)
  {}
  Init_SingleObjectObservation_shape_variables pose_so(::mrpt_msgs::msg::SingleObjectObservation::_pose_so_type arg)
  {
    msg_.pose_so = std::move(arg);
    return Init_SingleObjectObservation_shape_variables(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

class Init_SingleObjectObservation_pose_wo
{
public:
  explicit Init_SingleObjectObservation_pose_wo(::mrpt_msgs::msg::SingleObjectObservation & msg)
  : msg_(msg)
  {}
  Init_SingleObjectObservation_pose_so pose_wo(::mrpt_msgs::msg::SingleObjectObservation::_pose_wo_type arg)
  {
    msg_.pose_wo = std::move(arg);
    return Init_SingleObjectObservation_pose_so(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

class Init_SingleObjectObservation_pitch
{
public:
  explicit Init_SingleObjectObservation_pitch(::mrpt_msgs::msg::SingleObjectObservation & msg)
  : msg_(msg)
  {}
  Init_SingleObjectObservation_pose_wo pitch(::mrpt_msgs::msg::SingleObjectObservation::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SingleObjectObservation_pose_wo(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

class Init_SingleObjectObservation_yaw
{
public:
  explicit Init_SingleObjectObservation_yaw(::mrpt_msgs::msg::SingleObjectObservation & msg)
  : msg_(msg)
  {}
  Init_SingleObjectObservation_pitch yaw(::mrpt_msgs::msg::SingleObjectObservation::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SingleObjectObservation_pitch(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

class Init_SingleObjectObservation_range
{
public:
  Init_SingleObjectObservation_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleObjectObservation_yaw range(::mrpt_msgs::msg::SingleObjectObservation::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_SingleObjectObservation_yaw(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleObjectObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::SingleObjectObservation>()
{
  return mrpt_msgs::msg::builder::Init_SingleObjectObservation_range();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__BUILDER_HPP_
