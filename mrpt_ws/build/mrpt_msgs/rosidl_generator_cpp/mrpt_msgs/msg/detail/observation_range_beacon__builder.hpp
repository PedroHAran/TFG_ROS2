// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/ObservationRangeBeacon.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/observation_range_beacon.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEACON__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEACON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/observation_range_beacon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_ObservationRangeBeacon_sensed_data
{
public:
  explicit Init_ObservationRangeBeacon_sensed_data(::mrpt_msgs::msg::ObservationRangeBeacon & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::ObservationRangeBeacon sensed_data(::mrpt_msgs::msg::ObservationRangeBeacon::_sensed_data_type arg)
  {
    msg_.sensed_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::ObservationRangeBeacon msg_;
};

class Init_ObservationRangeBeacon_sensor_std_range
{
public:
  explicit Init_ObservationRangeBeacon_sensor_std_range(::mrpt_msgs::msg::ObservationRangeBeacon & msg)
  : msg_(msg)
  {}
  Init_ObservationRangeBeacon_sensed_data sensor_std_range(::mrpt_msgs::msg::ObservationRangeBeacon::_sensor_std_range_type arg)
  {
    msg_.sensor_std_range = std::move(arg);
    return Init_ObservationRangeBeacon_sensed_data(msg_);
  }

private:
  ::mrpt_msgs::msg::ObservationRangeBeacon msg_;
};

class Init_ObservationRangeBeacon_max_sensor_distance
{
public:
  explicit Init_ObservationRangeBeacon_max_sensor_distance(::mrpt_msgs::msg::ObservationRangeBeacon & msg)
  : msg_(msg)
  {}
  Init_ObservationRangeBeacon_sensor_std_range max_sensor_distance(::mrpt_msgs::msg::ObservationRangeBeacon::_max_sensor_distance_type arg)
  {
    msg_.max_sensor_distance = std::move(arg);
    return Init_ObservationRangeBeacon_sensor_std_range(msg_);
  }

private:
  ::mrpt_msgs::msg::ObservationRangeBeacon msg_;
};

class Init_ObservationRangeBeacon_min_sensor_distance
{
public:
  explicit Init_ObservationRangeBeacon_min_sensor_distance(::mrpt_msgs::msg::ObservationRangeBeacon & msg)
  : msg_(msg)
  {}
  Init_ObservationRangeBeacon_max_sensor_distance min_sensor_distance(::mrpt_msgs::msg::ObservationRangeBeacon::_min_sensor_distance_type arg)
  {
    msg_.min_sensor_distance = std::move(arg);
    return Init_ObservationRangeBeacon_max_sensor_distance(msg_);
  }

private:
  ::mrpt_msgs::msg::ObservationRangeBeacon msg_;
};

class Init_ObservationRangeBeacon_sensor_pose_on_robot
{
public:
  explicit Init_ObservationRangeBeacon_sensor_pose_on_robot(::mrpt_msgs::msg::ObservationRangeBeacon & msg)
  : msg_(msg)
  {}
  Init_ObservationRangeBeacon_min_sensor_distance sensor_pose_on_robot(::mrpt_msgs::msg::ObservationRangeBeacon::_sensor_pose_on_robot_type arg)
  {
    msg_.sensor_pose_on_robot = std::move(arg);
    return Init_ObservationRangeBeacon_min_sensor_distance(msg_);
  }

private:
  ::mrpt_msgs::msg::ObservationRangeBeacon msg_;
};

class Init_ObservationRangeBeacon_header
{
public:
  Init_ObservationRangeBeacon_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObservationRangeBeacon_sensor_pose_on_robot header(::mrpt_msgs::msg::ObservationRangeBeacon::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObservationRangeBeacon_sensor_pose_on_robot(msg_);
  }

private:
  ::mrpt_msgs::msg::ObservationRangeBeacon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::ObservationRangeBeacon>()
{
  return mrpt_msgs::msg::builder::Init_ObservationRangeBeacon_header();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEACON__BUILDER_HPP_
