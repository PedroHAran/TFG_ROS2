// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/srv/get_cm_graph.hpp"


#ifndef MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__BUILDER_HPP_
#define MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mrpt_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCMGraph_Request_node_ids
{
public:
  Init_GetCMGraph_Request_node_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_msgs::srv::GetCMGraph_Request node_ids(::mrpt_msgs::srv::GetCMGraph_Request::_node_ids_type arg)
  {
    msg_.node_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::srv::GetCMGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::srv::GetCMGraph_Request>()
{
  return mrpt_msgs::srv::builder::Init_GetCMGraph_Request_node_ids();
}

}  // namespace mrpt_msgs


namespace mrpt_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCMGraph_Response_cm_graph
{
public:
  Init_GetCMGraph_Response_cm_graph()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mrpt_msgs::srv::GetCMGraph_Response cm_graph(::mrpt_msgs::srv::GetCMGraph_Response::_cm_graph_type arg)
  {
    msg_.cm_graph = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::srv::GetCMGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::srv::GetCMGraph_Response>()
{
  return mrpt_msgs::srv::builder::Init_GetCMGraph_Response_cm_graph();
}

}  // namespace mrpt_msgs


namespace mrpt_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCMGraph_Event_response
{
public:
  explicit Init_GetCMGraph_Event_response(::mrpt_msgs::srv::GetCMGraph_Event & msg)
  : msg_(msg)
  {}
  ::mrpt_msgs::srv::GetCMGraph_Event response(::mrpt_msgs::srv::GetCMGraph_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mrpt_msgs::srv::GetCMGraph_Event msg_;
};

class Init_GetCMGraph_Event_request
{
public:
  explicit Init_GetCMGraph_Event_request(::mrpt_msgs::srv::GetCMGraph_Event & msg)
  : msg_(msg)
  {}
  Init_GetCMGraph_Event_response request(::mrpt_msgs::srv::GetCMGraph_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetCMGraph_Event_response(msg_);
  }

private:
  ::mrpt_msgs::srv::GetCMGraph_Event msg_;
};

class Init_GetCMGraph_Event_info
{
public:
  Init_GetCMGraph_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCMGraph_Event_request info(::mrpt_msgs::srv::GetCMGraph_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetCMGraph_Event_request(msg_);
  }

private:
  ::mrpt_msgs::srv::GetCMGraph_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mrpt_msgs::srv::GetCMGraph_Event>()
{
  return mrpt_msgs::srv::builder::Init_GetCMGraph_Event_info();
}

}  // namespace mrpt_msgs

#endif  // MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__BUILDER_HPP_
