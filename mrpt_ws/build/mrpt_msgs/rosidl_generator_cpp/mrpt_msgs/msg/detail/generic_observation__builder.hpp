// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/GenericObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/generic_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/generic_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_GenericObservation_data
{
public:
  explicit Init_GenericObservation_data(::mrpt_msgs::msg::GenericObservation & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::GenericObservation data(::mrpt_msgs::msg::GenericObservation::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::GenericObservation msg_;
};

class Init_GenericObservation_header
{
public:
  Init_GenericObservation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericObservation_data header(::mrpt_msgs::msg::GenericObservation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GenericObservation_data(msg_);
  }

private:
  ::mrpt_msgs::msg::GenericObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::GenericObservation>()
{
  return mrpt_msgs::msg::builder::Init_GenericObservation_header();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GENERIC_OBSERVATION__BUILDER_HPP_
