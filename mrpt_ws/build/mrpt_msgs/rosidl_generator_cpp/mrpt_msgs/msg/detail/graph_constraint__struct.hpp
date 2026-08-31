// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_constraint.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'constraint'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__GraphConstraint __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__GraphConstraint __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphConstraint_
{
  using Type = GraphConstraint_<ContainerAllocator>;

  explicit GraphConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constraint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id_from = 0ull;
      this->node_id_to = 0ull;
    }
  }

  explicit GraphConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : constraint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id_from = 0ull;
      this->node_id_to = 0ull;
    }
  }

  // field types and members
  using _node_id_from_type =
    uint64_t;
  _node_id_from_type node_id_from;
  using _node_id_to_type =
    uint64_t;
  _node_id_to_type node_id_to;
  using _constraint_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _constraint_type constraint;

  // setters for named parameter idiom
  Type & set__node_id_from(
    const uint64_t & _arg)
  {
    this->node_id_from = _arg;
    return *this;
  }
  Type & set__node_id_to(
    const uint64_t & _arg)
  {
    this->node_id_to = _arg;
    return *this;
  }
  Type & set__constraint(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->constraint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::GraphConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::GraphConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__GraphConstraint
    std::shared_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__GraphConstraint
    std::shared_ptr<mrpt_msgs::msg::GraphConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphConstraint_ & other) const
  {
    if (this->node_id_from != other.node_id_from) {
      return false;
    }
    if (this->node_id_to != other.node_id_to) {
      return false;
    }
    if (this->constraint != other.constraint) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphConstraint_

// alias to use template instance with default allocator
using GraphConstraint =
  mrpt_msgs::msg::GraphConstraint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__STRUCT_HPP_
