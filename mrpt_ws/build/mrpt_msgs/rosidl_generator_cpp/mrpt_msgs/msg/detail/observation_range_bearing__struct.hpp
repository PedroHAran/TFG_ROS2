// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/ObservationRangeBearing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/observation_range_bearing.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEARING__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEARING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'sensor_pose_on_robot'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'sensed_data'
#include "mrpt_msgs/msg/detail/single_range_bearing_observation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__ObservationRangeBearing __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__ObservationRangeBearing __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObservationRangeBearing_
{
  using Type = ObservationRangeBearing_<ContainerAllocator>;

  explicit ObservationRangeBearing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    sensor_pose_on_robot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_sensor_distance = 0.0;
      this->max_sensor_distance = 0.0;
      this->sensor_std_range = 0.0;
      this->sensor_std_yaw = 0.0;
      this->sensor_std_pitch = 0.0;
    }
  }

  explicit ObservationRangeBearing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_pose_on_robot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_sensor_distance = 0.0;
      this->max_sensor_distance = 0.0;
      this->sensor_std_range = 0.0;
      this->sensor_std_yaw = 0.0;
      this->sensor_std_pitch = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_pose_on_robot_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _sensor_pose_on_robot_type sensor_pose_on_robot;
  using _min_sensor_distance_type =
    double;
  _min_sensor_distance_type min_sensor_distance;
  using _max_sensor_distance_type =
    double;
  _max_sensor_distance_type max_sensor_distance;
  using _sensor_std_range_type =
    double;
  _sensor_std_range_type sensor_std_range;
  using _sensor_std_yaw_type =
    double;
  _sensor_std_yaw_type sensor_std_yaw;
  using _sensor_std_pitch_type =
    double;
  _sensor_std_pitch_type sensor_std_pitch;
  using _sensed_data_type =
    std::vector<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>>;
  _sensed_data_type sensed_data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_pose_on_robot(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->sensor_pose_on_robot = _arg;
    return *this;
  }
  Type & set__min_sensor_distance(
    const double & _arg)
  {
    this->min_sensor_distance = _arg;
    return *this;
  }
  Type & set__max_sensor_distance(
    const double & _arg)
  {
    this->max_sensor_distance = _arg;
    return *this;
  }
  Type & set__sensor_std_range(
    const double & _arg)
  {
    this->sensor_std_range = _arg;
    return *this;
  }
  Type & set__sensor_std_yaw(
    const double & _arg)
  {
    this->sensor_std_yaw = _arg;
    return *this;
  }
  Type & set__sensor_std_pitch(
    const double & _arg)
  {
    this->sensor_std_pitch = _arg;
    return *this;
  }
  Type & set__sensed_data(
    const std::vector<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>> & _arg)
  {
    this->sensed_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__ObservationRangeBearing
    std::shared_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__ObservationRangeBearing
    std::shared_ptr<mrpt_msgs::msg::ObservationRangeBearing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObservationRangeBearing_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_pose_on_robot != other.sensor_pose_on_robot) {
      return false;
    }
    if (this->min_sensor_distance != other.min_sensor_distance) {
      return false;
    }
    if (this->max_sensor_distance != other.max_sensor_distance) {
      return false;
    }
    if (this->sensor_std_range != other.sensor_std_range) {
      return false;
    }
    if (this->sensor_std_yaw != other.sensor_std_yaw) {
      return false;
    }
    if (this->sensor_std_pitch != other.sensor_std_pitch) {
      return false;
    }
    if (this->sensed_data != other.sensed_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObservationRangeBearing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObservationRangeBearing_

// alias to use template instance with default allocator
using ObservationRangeBearing =
  mrpt_msgs::msg::ObservationRangeBearing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEARING__STRUCT_HPP_
