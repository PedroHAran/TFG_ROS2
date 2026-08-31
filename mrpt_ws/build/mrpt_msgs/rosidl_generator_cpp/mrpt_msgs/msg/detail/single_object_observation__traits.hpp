// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/SingleObjectObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_object_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/single_object_observation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose_wo'
// Member 'pose_so'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SingleObjectObservation & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: pose_wo
  {
    out << "pose_wo: ";
    to_flow_style_yaml(msg.pose_wo, out);
    out << ", ";
  }

  // member: pose_so
  {
    out << "pose_so: ";
    to_flow_style_yaml(msg.pose_so, out);
    out << ", ";
  }

  // member: shape_variables
  {
    if (msg.shape_variables.size() == 0) {
      out << "shape_variables: []";
    } else {
      out << "shape_variables: [";
      size_t pending_items = msg.shape_variables.size();
      for (auto item : msg.shape_variables) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const SingleObjectObservation & msg,
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

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: pose_wo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_wo:\n";
    to_block_style_yaml(msg.pose_wo, out, indentation + 2);
  }

  // member: pose_so
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_so:\n";
    to_block_style_yaml(msg.pose_so, out, indentation + 2);
  }

  // member: shape_variables
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.shape_variables.size() == 0) {
      out << "shape_variables: []\n";
    } else {
      out << "shape_variables:\n";
      for (auto item : msg.shape_variables) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const SingleObjectObservation & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::SingleObjectObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::SingleObjectObservation & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::SingleObjectObservation>()
{
  return "mrpt_msgs::msg::SingleObjectObservation";
}

template<>
inline const char * name<mrpt_msgs::msg::SingleObjectObservation>()
{
  return "mrpt_msgs/msg/SingleObjectObservation";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::SingleObjectObservation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::SingleObjectObservation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::SingleObjectObservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__TRAITS_HPP_
