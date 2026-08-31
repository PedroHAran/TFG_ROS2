// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/SingleRangeBearingObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_bearing_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/single_range_bearing_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_SingleRangeBearingObservation_id
{
public:
  explicit Init_SingleRangeBearingObservation_id(::mrpt_msgs::msg::SingleRangeBearingObservation & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::SingleRangeBearingObservation id(::mrpt_msgs::msg::SingleRangeBearingObservation::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleRangeBearingObservation msg_;
};

class Init_SingleRangeBearingObservation_pitch
{
public:
  explicit Init_SingleRangeBearingObservation_pitch(::mrpt_msgs::msg::SingleRangeBearingObservation & msg)
  : msg_(msg)
  {}
  Init_SingleRangeBearingObservation_id pitch(::mrpt_msgs::msg::SingleRangeBearingObservation::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SingleRangeBearingObservation_id(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleRangeBearingObservation msg_;
};

class Init_SingleRangeBearingObservation_yaw
{
public:
  explicit Init_SingleRangeBearingObservation_yaw(::mrpt_msgs::msg::SingleRangeBearingObservation & msg)
  : msg_(msg)
  {}
  Init_SingleRangeBearingObservation_pitch yaw(::mrpt_msgs::msg::SingleRangeBearingObservation::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SingleRangeBearingObservation_pitch(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleRangeBearingObservation msg_;
};

class Init_SingleRangeBearingObservation_range
{
public:
  Init_SingleRangeBearingObservation_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleRangeBearingObservation_yaw range(::mrpt_msgs::msg::SingleRangeBearingObservation::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_SingleRangeBearingObservation_yaw(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleRangeBearingObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::SingleRangeBearingObservation>()
{
  return mrpt_msgs::msg::builder::Init_SingleRangeBearingObservation_range();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__BUILDER_HPP_
