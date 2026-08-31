// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'str_id'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__NodeIDWithPose __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__NodeIDWithPose __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeIDWithPose_
{
  using Type = NodeIDWithPose_<ContainerAllocator>;

  explicit NodeIDWithPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    str_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
      this->node_id_loc = 0ull;
    }
  }

  explicit NodeIDWithPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    str_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
      this->node_id_loc = 0ull;
    }
  }

  // field types and members
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _str_id_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _str_id_type str_id;
  using _node_id_loc_type =
    uint64_t;
  _node_id_loc_type node_id_loc;

  // setters for named parameter idiom
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__str_id(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->str_id = _arg;
    return *this;
  }
  Type & set__node_id_loc(
    const uint64_t & _arg)
  {
    this->node_id_loc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__NodeIDWithPose
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__NodeIDWithPose
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeIDWithPose_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->str_id != other.str_id) {
      return false;
    }
    if (this->node_id_loc != other.node_id_loc) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeIDWithPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeIDWithPose_

// alias to use template instance with default allocator
using NodeIDWithPose =
  mrpt_msgs::msg::NodeIDWithPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE__STRUCT_HPP_
