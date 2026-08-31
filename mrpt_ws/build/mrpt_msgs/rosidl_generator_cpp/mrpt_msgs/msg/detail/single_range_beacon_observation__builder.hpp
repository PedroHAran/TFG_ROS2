// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_beacon_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/single_range_beacon_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_SingleRangeBeaconObservation_id
{
public:
  explicit Init_SingleRangeBeaconObservation_id(::mrpt_msgs::msg::SingleRangeBeaconObservation & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::SingleRangeBeaconObservation id(::mrpt_msgs::msg::SingleRangeBeaconObservation::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleRangeBeaconObservation msg_;
};

class Init_SingleRangeBeaconObservation_range
{
public:
  Init_SingleRangeBeaconObservation_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleRangeBeaconObservation_id range(::mrpt_msgs::msg::SingleRangeBeaconObservation::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_SingleRangeBeaconObservation_id(msg_);
  }

private:
  ::mrpt_msgs::msg::SingleRangeBeaconObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::SingleRangeBeaconObservation>()
{
  return mrpt_msgs::msg::builder::Init_SingleRangeBeaconObservation_range();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__BUILDER_HPP_
