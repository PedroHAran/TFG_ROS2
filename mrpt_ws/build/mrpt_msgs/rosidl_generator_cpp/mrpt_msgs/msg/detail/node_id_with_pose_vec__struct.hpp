// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithPoseVec.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_pose_vec.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vec'
#include "mrpt_msgs/msg/detail/node_id_with_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__NodeIDWithPoseVec __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__NodeIDWithPoseVec __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeIDWithPoseVec_
{
  using Type = NodeIDWithPoseVec_<ContainerAllocator>;

  explicit NodeIDWithPoseVec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NodeIDWithPoseVec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vec_type =
    std::vector<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>>;
  _vec_type vec;

  // setters for named parameter idiom
  Type & set__vec(
    const std::vector<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::NodeIDWithPose_<ContainerAllocator>>> & _arg)
  {
    this->vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__NodeIDWithPoseVec
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__NodeIDWithPoseVec
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeIDWithPoseVec_ & other) const
  {
    if (this->vec != other.vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeIDWithPoseVec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeIDWithPoseVec_

// alias to use template instance with default allocator
using NodeIDWithPoseVec =
  mrpt_msgs::msg::NodeIDWithPoseVec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_POSE_VEC__STRUCT_HPP_
