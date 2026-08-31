// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_laser_scan.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeIDWithLaserScan_scan
{
public:
  explicit Init_NodeIDWithLaserScan_scan(::mrpt_msgs::msg::NodeIDWithLaserScan & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::NodeIDWithLaserScan scan(::mrpt_msgs::msg::NodeIDWithLaserScan::_scan_type arg)
  {
    msg_.scan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithLaserScan msg_;
};

class Init_NodeIDWithLaserScan_node_id
{
public:
  Init_NodeIDWithLaserScan_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeIDWithLaserScan_scan node_id(::mrpt_msgs::msg::NodeIDWithLaserScan::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_NodeIDWithLaserScan_scan(msg_);
  }

private:
  ::mrpt_msgs::msg::NodeIDWithLaserScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::NodeIDWithLaserScan>()
{
  return mrpt_msgs::msg::builder::Init_NodeIDWithLaserScan_node_id();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__BUILDER_HPP_
