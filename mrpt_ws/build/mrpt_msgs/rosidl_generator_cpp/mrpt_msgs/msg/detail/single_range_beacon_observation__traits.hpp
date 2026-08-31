// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_beacon_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/single_range_beacon_observation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SingleRangeBeaconObservation & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SingleRangeBeaconObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SingleRangeBeaconObservation & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mrpt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_msgs::msg::SingleRangeBeaconObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::SingleRangeBeaconObservation & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::SingleRangeBeaconObservation>()
{
  return "mrpt_msgs::msg::SingleRangeBeaconObservation";
}

template<>
inline const char * name<mrpt_msgs::msg::SingleRangeBeaconObservation>()
{
  return "mrpt_msgs/msg/SingleRangeBeaconObservation";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::SingleRangeBeaconObservation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::SingleRangeBeaconObservation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mrpt_msgs::msg::SingleRangeBeaconObservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEACON_OBSERVATION__TRAITS_HPP_
