// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/SingleObjectObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/single_object_observation.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose_wo'
// Member 'pose_so'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__SingleObjectObservation __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__SingleObjectObservation __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SingleObjectObservation_
{
  using Type = SingleObjectObservation_<ContainerAllocator>;

  explicit SingleObjectObservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_wo(_init),
    pose_so(_init)
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

  explicit SingleObjectObservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_wo(_alloc, _init),
    pose_so(_alloc, _init)
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
  using _pose_wo_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_wo_type pose_wo;
  using _pose_so_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_so_type pose_so;
  using _shape_variables_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _shape_variables_type shape_variables;
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
  Type & set__pose_wo(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose_wo = _arg;
    return *this;
  }
  Type & set__pose_so(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose_so = _arg;
    return *this;
  }
  Type & set__shape_variables(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->shape_variables = _arg;
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
    mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__SingleObjectObservation
    std::shared_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__SingleObjectObservation
    std::shared_ptr<mrpt_msgs::msg::SingleObjectObservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SingleObjectObservation_ & other) const
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
    if (this->pose_wo != other.pose_wo) {
      return false;
    }
    if (this->pose_so != other.pose_so) {
      return false;
    }
    if (this->shape_variables != other.shape_variables) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SingleObjectObservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SingleObjectObservation_

// alias to use template instance with default allocator
using SingleObjectObservation =
  mrpt_msgs::msg::SingleObjectObservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__SINGLE_OBJECT_OBSERVATION__STRUCT_HPP_
