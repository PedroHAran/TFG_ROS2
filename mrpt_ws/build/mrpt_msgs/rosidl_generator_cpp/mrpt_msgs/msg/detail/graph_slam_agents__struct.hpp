// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agents.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'list'
#include "mrpt_msgs/msg/detail/graph_slam_agent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__GraphSlamAgents __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__GraphSlamAgents __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphSlamAgents_
{
  using Type = GraphSlamAgents_<ContainerAllocator>;

  explicit GraphSlamAgents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GraphSlamAgents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _list_type =
    std::vector<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>>;
  _list_type list;

  // setters for named parameter idiom
  Type & set__list(
    const std::vector<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>> & _arg)
  {
    this->list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__GraphSlamAgents
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__GraphSlamAgents
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphSlamAgents_ & other) const
  {
    if (this->list != other.list) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphSlamAgents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphSlamAgents_

// alias to use template instance with default allocator
using GraphSlamAgents =
  mrpt_msgs::msg::GraphSlamAgents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENTS__STRUCT_HPP_
