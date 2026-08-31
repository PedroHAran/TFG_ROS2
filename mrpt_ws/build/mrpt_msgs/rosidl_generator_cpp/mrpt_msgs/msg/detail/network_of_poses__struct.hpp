// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/network_of_poses.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nodes'
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__struct.hpp"
// Member 'constraints'
#include "mrpt_msgs/msg/detail/graph_constraint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__NetworkOfPoses __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__NetworkOfPoses __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkOfPoses_
{
  using Type = NetworkOfPoses_<ContainerAllocator>;

  explicit NetworkOfPoses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodes(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root = 0ull;
    }
  }

  explicit NetworkOfPoses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodes(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root = 0ull;
    }
  }

  // field types and members
  using _root_type =
    uint64_t;
  _root_type root;
  using _nodes_type =
    mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator>;
  _nodes_type nodes;
  using _constraints_type =
    std::vector<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>>;
  _constraints_type constraints;

  // setters for named parameter idiom
  Type & set__root(
    const uint64_t & _arg)
  {
    this->root = _arg;
    return *this;
  }
  Type & set__nodes(
    const mrpt_msgs::msg::NodeIDWithPoseVec_<ContainerAllocator> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__constraints(
    const std::vector<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>> & _arg)
  {
    this->constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__NetworkOfPoses
    std::shared_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__NetworkOfPoses
    std::shared_ptr<mrpt_msgs::msg::NetworkOfPoses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkOfPoses_ & other) const
  {
    if (this->root != other.root) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->constraints != other.constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkOfPoses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkOfPoses_

// alias to use template instance with default allocator
using NetworkOfPoses =
  mrpt_msgs::msg::NetworkOfPoses_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NETWORK_OF_POSES__STRUCT_HPP_
