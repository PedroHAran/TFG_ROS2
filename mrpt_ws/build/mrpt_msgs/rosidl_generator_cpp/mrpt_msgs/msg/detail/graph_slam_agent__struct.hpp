// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_agent.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'name'
// Member 'hostname'
// Member 'ip_addr'
// Member 'topic_namespace'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'is_online'
#include "std_msgs/msg/detail/bool__struct.hpp"
// Member 'last_seen_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__GraphSlamAgent __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__GraphSlamAgent __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphSlamAgent_
{
  using Type = GraphSlamAgent_<ContainerAllocator>;

  explicit GraphSlamAgent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_init),
    hostname(_init),
    ip_addr(_init),
    is_online(_init),
    last_seen_time(_init),
    topic_namespace(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port = 0;
      this->agent_id = 0l;
    }
  }

  explicit GraphSlamAgent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc, _init),
    hostname(_alloc, _init),
    ip_addr(_alloc, _init),
    is_online(_alloc, _init),
    last_seen_time(_alloc, _init),
    topic_namespace(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port = 0;
      this->agent_id = 0l;
    }
  }

  // field types and members
  using _name_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _name_type name;
  using _hostname_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _hostname_type hostname;
  using _ip_addr_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _ip_addr_type ip_addr;
  using _port_type =
    uint16_t;
  _port_type port;
  using _is_online_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _is_online_type is_online;
  using _last_seen_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_seen_time_type last_seen_time;
  using _topic_namespace_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _topic_namespace_type topic_namespace;
  using _agent_id_type =
    int32_t;
  _agent_id_type agent_id;

  // setters for named parameter idiom
  Type & set__name(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__hostname(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->hostname = _arg;
    return *this;
  }
  Type & set__ip_addr(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->ip_addr = _arg;
    return *this;
  }
  Type & set__port(
    const uint16_t & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__is_online(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->is_online = _arg;
    return *this;
  }
  Type & set__last_seen_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_seen_time = _arg;
    return *this;
  }
  Type & set__topic_namespace(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->topic_namespace = _arg;
    return *this;
  }
  Type & set__agent_id(
    const int32_t & _arg)
  {
    this->agent_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__GraphSlamAgent
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__GraphSlamAgent
    std::shared_ptr<mrpt_msgs::msg::GraphSlamAgent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphSlamAgent_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->hostname != other.hostname) {
      return false;
    }
    if (this->ip_addr != other.ip_addr) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->is_online != other.is_online) {
      return false;
    }
    if (this->last_seen_time != other.last_seen_time) {
      return false;
    }
    if (this->topic_namespace != other.topic_namespace) {
      return false;
    }
    if (this->agent_id != other.agent_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphSlamAgent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphSlamAgent_

// alias to use template instance with default allocator
using GraphSlamAgent =
  mrpt_msgs::msg::GraphSlamAgent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_AGENT__STRUCT_HPP_
