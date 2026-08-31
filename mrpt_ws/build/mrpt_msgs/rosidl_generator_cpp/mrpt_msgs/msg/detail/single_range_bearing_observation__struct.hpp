// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/SingleRangeBearingObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_range_bearing_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__SingleRangeBearingObservation __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__SingleRangeBearingObservation __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SingleRangeBearingObservation_
{
  using Type = SingleRangeBearingObservation_<ContainerAllocator>;

  explicit SingleRangeBearingObservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->id = 0l;
    }
  }

  explicit SingleRangeBearingObservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->id = 0l;
    }
  }

  // field types and members
  using _range_type =
    double;
  _range_type range;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__SingleRangeBearingObservation
    std::shared_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__SingleRangeBearingObservation
    std::shared_ptr<mrpt_msgs::msg::SingleRangeBearingObservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SingleRangeBearingObservation_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SingleRangeBearingObservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SingleRangeBearingObservation_

// alias to use template instance with default allocator
using SingleRangeBearingObservation =
  mrpt_msgs::msg::SingleRangeBearingObservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_RANGE_BEARING_OBSERVATION__STRUCT_HPP_
