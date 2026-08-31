// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mrpt_msgs:msg/GraphSlamStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_slam_stats.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__STRUCT_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__mrpt_msgs__msg__GraphSlamStats __attribute__((deprecated))
#else
# define DEPRECATED__mrpt_msgs__msg__GraphSlamStats __declspec(deprecated)
#endif

namespace mrpt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphSlamStats_
{
  using Type = GraphSlamStats_<ContainerAllocator>;

  explicit GraphSlamStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nodes_total = 0l;
      this->edges_total = 0l;
      this->edges_icp_2d = 0l;
      this->edges_icp_3d = 0l;
      this->edges_odom = 0l;
      this->loop_closures = 0l;
    }
  }

  explicit GraphSlamStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nodes_total = 0l;
      this->edges_total = 0l;
      this->edges_icp_2d = 0l;
      this->edges_icp_3d = 0l;
      this->edges_odom = 0l;
      this->loop_closures = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nodes_total_type =
    int32_t;
  _nodes_total_type nodes_total;
  using _edges_total_type =
    int32_t;
  _edges_total_type edges_total;
  using _edges_icp_2d_type =
    int32_t;
  _edges_icp_2d_type edges_icp_2d;
  using _edges_icp_3d_type =
    int32_t;
  _edges_icp_3d_type edges_icp_3d;
  using _edges_odom_type =
    int32_t;
  _edges_odom_type edges_odom;
  using _loop_closures_type =
    int32_t;
  _loop_closures_type loop_closures;
  using _slam_evaluation_metric_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _slam_evaluation_metric_type slam_evaluation_metric;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nodes_total(
    const int32_t & _arg)
  {
    this->nodes_total = _arg;
    return *this;
  }
  Type & set__edges_total(
    const int32_t & _arg)
  {
    this->edges_total = _arg;
    return *this;
  }
  Type & set__edges_icp_2d(
    const int32_t & _arg)
  {
    this->edges_icp_2d = _arg;
    return *this;
  }
  Type & set__edges_icp_3d(
    const int32_t & _arg)
  {
    this->edges_icp_3d = _arg;
    return *this;
  }
  Type & set__edges_odom(
    const int32_t & _arg)
  {
    this->edges_odom = _arg;
    return *this;
  }
  Type & set__loop_closures(
    const int32_t & _arg)
  {
    this->loop_closures = _arg;
    return *this;
  }
  Type & set__slam_evaluation_metric(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->slam_evaluation_metric = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mrpt_msgs__msg__GraphSlamStats
    std::shared_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mrpt_msgs__msg__GraphSlamStats
    std::shared_ptr<mrpt_msgs::msg::GraphSlamStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphSlamStats_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nodes_total != other.nodes_total) {
      return false;
    }
    if (this->edges_total != other.edges_total) {
      return false;
    }
    if (this->edges_icp_2d != other.edges_icp_2d) {
      return false;
    }
    if (this->edges_icp_3d != other.edges_icp_3d) {
      return false;
    }
    if (this->edges_odom != other.edges_odom) {
      return false;
    }
    if (this->loop_closures != other.loop_closures) {
      return false;
    }
    if (this->slam_evaluation_metric != other.slam_evaluation_metric) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphSlamStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphSlamStats_

// alias to use template instance with default allocator
using GraphSlamStats =
  mrpt_msgs::msg::GraphSlamStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_SLAM_STATS__STRUCT_HPP_
