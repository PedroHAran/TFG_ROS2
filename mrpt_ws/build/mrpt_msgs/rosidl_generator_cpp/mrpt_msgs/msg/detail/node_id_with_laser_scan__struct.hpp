// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_laser_scan.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__NodeIDWithLaserScan __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__NodeIDWithLaserScan __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeIDWithLaserScan_
{
  using Type = NodeIDWithLaserScan_<ContainerAllocator>;

  explicit NodeIDWithLaserScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
    }
  }

  explicit NodeIDWithLaserScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
    }
  }

  // field types and members
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _scan_type =
    sensor_msgs::msg::LaserScan_<ContainerAllocator>;
  _scan_type scan;

  // setters for named parameter idiom
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__scan(
    const sensor_msgs::msg::LaserScan_<ContainerAllocator> & _arg)
  {
    this->scan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__NodeIDWithLaserScan
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__NodeIDWithLaserScan
    std::shared_ptr<mrpt_msgs::msg::NodeIDWithLaserScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeIDWithLaserScan_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->scan != other.scan) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeIDWithLaserScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeIDWithLaserScan_

// alias to use template instance with default allocator
using NodeIDWithLaserScan =
  mrpt_msgs::msg::NodeIDWithLaserScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__STRUCT_HPP_
