// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:msg/ObservationObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/observation_object.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__OBSERVATION_OBJECT__TRAITS_HPP_
#define MRPT_MSGS__MSG__DETAIL__OBSERVATION_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/msg/detail/observation_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'sensor_pose_on_robot'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'sensed_data'
#include "mrpt_msgs/msg/detail/single_object_observation__traits.hpp"

namespace mrpt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObservationObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_pose_on_robot
  {
    out << "sensor_pose_on_robot: ";
    to_flow_style_yaml(msg.sensor_pose_on_robot, out);
    out << ", ";
  }

  // member: min_sensor_distance
  {
    out << "min_sensor_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_sensor_distance, out);
    out << ", ";
  }

  // member: max_sensor_distance
  {
    out << "max_sensor_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_sensor_distance, out);
    out << ", ";
  }

  // member: sensor_std_range
  {
    out << "sensor_std_range: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_std_range, out);
    out << ", ";
  }

  // member: sensor_std_yaw
  {
    out << "sensor_std_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_std_yaw, out);
    out << ", ";
  }

  // member: sensor_std_pitch
  {
    out << "sensor_std_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_std_pitch, out);
    out << ", ";
  }

  // member: sensed_data
  {
    if (msg.sensed_data.size() == 0) {
      out << "sensed_data: []";
    } else {
      out << "sensed_data: [";
      size_t pending_items = msg.sensed_data.size();
      for (auto item : msg.sensed_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObservationObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sensor_pose_on_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_pose_on_robot:\n";
    to_block_style_yaml(msg.sensor_pose_on_robot, out, indentation + 2);
  }

  // member: min_sensor_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_sensor_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_sensor_distance, out);
    out << "\n";
  }

  // member: max_sensor_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_sensor_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_sensor_distance, out);
    out << "\n";
  }

  // member: sensor_std_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_std_range: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_std_range, out);
    out << "\n";
  }

  // member: sensor_std_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_std_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_std_yaw, out);
    out << "\n";
  }

  // member: sensor_std_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_std_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_std_pitch, out);
    out << "\n";
  }

  // member: sensed_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensed_data.size() == 0) {
      out << "sensed_data: []\n";
    } else {
      out << "sensed_data:\n";
      for (auto item : msg.sensed_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObservationObject & msg, bool use_flow_style = false)
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
  const mrpt_msgs::msg::ObservationObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::msg::ObservationObject & msg)
{
  return mrpt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::msg::ObservationObject>()
{
  return "mrpt_msgs::msg::ObservationObject";
}

template<>
inline const char * name<mrpt_msgs::msg::ObservationObject>()
{
  return "mrpt_msgs/msg/ObservationObject";
}

template<>
struct has_fixed_size<mrpt_msgs::msg::ObservationObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::msg::ObservationObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::msg::ObservationObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__MSG__DETAIL__OBSERVATION_OBJECT__TRAITS_HPP_
