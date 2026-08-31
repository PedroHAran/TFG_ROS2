// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/srv/get_cm_graph.hpp"


#ifndef MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__TRAITS_HPP_
#define MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mrpt_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCMGraph_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_ids
  {
    if (msg.node_ids.size() == 0) {
      out << "node_ids: []";
    } else {
      out << "node_ids: [";
      size_t pending_items = msg.node_ids.size();
      for (auto item : msg.node_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCMGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_ids.size() == 0) {
      out << "node_ids: []\n";
    } else {
      out << "node_ids:\n";
      for (auto item : msg.node_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCMGraph_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_msgs::srv::GetCMGraph_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::srv::GetCMGraph_Request & msg)
{
  return mrpt_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::srv::GetCMGraph_Request>()
{
  return "mrpt_msgs::srv::GetCMGraph_Request";
}

template<>
inline const char * name<mrpt_msgs::srv::GetCMGraph_Request>()
{
  return "mrpt_msgs/srv/GetCMGraph_Request";
}

template<>
struct has_fixed_size<mrpt_msgs::srv::GetCMGraph_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::srv::GetCMGraph_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mrpt_msgs::srv::GetCMGraph_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cm_graph'
#include "mrpt_msgs/msg/detail/network_of_poses__traits.hpp"

namespace mrpt_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCMGraph_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cm_graph
  {
    out << "cm_graph: ";
    to_flow_style_yaml(msg.cm_graph, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCMGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cm_graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cm_graph:\n";
    to_block_style_yaml(msg.cm_graph, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCMGraph_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_msgs::srv::GetCMGraph_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::srv::GetCMGraph_Response & msg)
{
  return mrpt_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::srv::GetCMGraph_Response>()
{
  return "mrpt_msgs::srv::GetCMGraph_Response";
}

template<>
inline const char * name<mrpt_msgs::srv::GetCMGraph_Response>()
{
  return "mrpt_msgs/srv/GetCMGraph_Response";
}

template<>
struct has_fixed_size<mrpt_msgs::srv::GetCMGraph_Response>
  : std::integral_constant<bool, has_fixed_size<mrpt_msgs::msg::NetworkOfPoses>::value> {};

template<>
struct has_bounded_size<mrpt_msgs::srv::GetCMGraph_Response>
  : std::integral_constant<bool, has_bounded_size<mrpt_msgs::msg::NetworkOfPoses>::value> {};

template<>
struct is_message<mrpt_msgs::srv::GetCMGraph_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mrpt_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCMGraph_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCMGraph_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCMGraph_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrpt_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrpt_msgs::srv::GetCMGraph_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrpt_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrpt_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mrpt_msgs::srv::GetCMGraph_Event & msg)
{
  return mrpt_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mrpt_msgs::srv::GetCMGraph_Event>()
{
  return "mrpt_msgs::srv::GetCMGraph_Event";
}

template<>
inline const char * name<mrpt_msgs::srv::GetCMGraph_Event>()
{
  return "mrpt_msgs/srv/GetCMGraph_Event";
}

template<>
struct has_fixed_size<mrpt_msgs::srv::GetCMGraph_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mrpt_msgs::srv::GetCMGraph_Event>
  : std::integral_constant<bool, has_bounded_size<mrpt_msgs::srv::GetCMGraph_Request>::value && has_bounded_size<mrpt_msgs::srv::GetCMGraph_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mrpt_msgs::srv::GetCMGraph_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mrpt_msgs::srv::GetCMGraph>()
{
  return "mrpt_msgs::srv::GetCMGraph";
}

template<>
inline const char * name<mrpt_msgs::srv::GetCMGraph>()
{
  return "mrpt_msgs/srv/GetCMGraph";
}

template<>
struct has_fixed_size<mrpt_msgs::srv::GetCMGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<mrpt_msgs::srv::GetCMGraph_Request>::value &&
    has_fixed_size<mrpt_msgs::srv::GetCMGraph_Response>::value
  >
{
};

template<>
struct has_bounded_size<mrpt_msgs::srv::GetCMGraph>
  : std::integral_constant<
    bool,
    has_bounded_size<mrpt_msgs::srv::GetCMGraph_Request>::value &&
    has_bounded_size<mrpt_msgs::srv::GetCMGraph_Response>::value
  >
{
};

template<>
struct is_service<mrpt_msgs::srv::GetCMGraph>
  : std::true_type
{
};

template<>
struct is_service_request<mrpt_msgs::srv::GetCMGraph_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mrpt_msgs::srv::GetCMGraph_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__TRAITS_HPP_
