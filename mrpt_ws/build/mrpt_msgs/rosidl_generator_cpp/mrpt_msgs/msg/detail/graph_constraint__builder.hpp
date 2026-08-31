// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:msg/GraphConstraint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/graph_constraint.hpp"


#ifndef MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__BUILDER_HPP_
#define MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/msg/detail/graph_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphConstraint_constraint
{
public:
  explicit Init_GraphConstraint_constraint(::mrpt_msgs::msg::GraphConstraint & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::msg::GraphConstraint constraint(::mrpt_msgs::msg::GraphConstraint::_constraint_type arg)
  {
    msg_.constraint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphConstraint msg_;
};

class Init_GraphConstraint_node_id_to
{
public:
  explicit Init_GraphConstraint_node_id_to(::mrpt_msgs::msg::GraphConstraint & msg)
  : msg_(msg)
  {}
  Init_GraphConstraint_constraint node_id_to(::mrpt_msgs::msg::GraphConstraint::_node_id_to_type arg)
  {
    msg_.node_id_to = std::move(arg);
    return Init_GraphConstraint_constraint(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphConstraint msg_;
};

class Init_GraphConstraint_node_id_from
{
public:
  Init_GraphConstraint_node_id_from()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphConstraint_node_id_to node_id_from(::mrpt_msgs::msg::GraphConstraint::_node_id_from_type arg)
  {
    msg_.node_id_from = std::move(arg);
    return Init_GraphConstraint_node_id_to(msg_);
  }

private:
  ::mrpt_msgs::msg::GraphConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::msg::GraphConstraint>()
{
  return mrpt_msgs::msg::builder::Init_GraphConstraint_node_id_from();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__MSG__DETAIL__GRAPH_CONSTRAINT__BUILDER_HPP_
