// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/srv/get_cm_graph.h"


#ifndef MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__STRUCT_H_
#define MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetCMGraph in the package mrpt_msgs.
typedef struct mrpt_msgs__srv__GetCMGraph_Request
{
  rosidl_runtime_c__uint64__Sequence node_ids;
} mrpt_msgs__srv__GetCMGraph_Request;

// Struct for a sequence of mrpt_msgs__srv__GetCMGraph_Request.
typedef struct mrpt_msgs__srv__GetCMGraph_Request__Sequence
{
  mrpt_msgs__srv__GetCMGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__srv__GetCMGraph_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'cm_graph'
#include "mrpt_msgs/msg/detail/network_of_poses__struct.h"

/// Struct defined in srv/GetCMGraph in the package mrpt_msgs.
typedef struct mrpt_msgs__srv__GetCMGraph_Response
{
  mrpt_msgs__msg__NetworkOfPoses cm_graph;
} mrpt_msgs__srv__GetCMGraph_Response;

// Struct for a sequence of mrpt_msgs__srv__GetCMGraph_Response.
typedef struct mrpt_msgs__srv__GetCMGraph_Response__Sequence
{
  mrpt_msgs__srv__GetCMGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__srv__GetCMGraph_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mrpt_msgs__srv__GetCMGraph_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mrpt_msgs__srv__GetCMGraph_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetCMGraph in the package mrpt_msgs.
typedef struct mrpt_msgs__srv__GetCMGraph_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mrpt_msgs__srv__GetCMGraph_Request__Sequence request;
  mrpt_msgs__srv__GetCMGraph_Response__Sequence response;
} mrpt_msgs__srv__GetCMGraph_Event;

// Struct for a sequence of mrpt_msgs__srv__GetCMGraph_Event.
typedef struct mrpt_msgs__srv__GetCMGraph_Event__Sequence
{
  mrpt_msgs__srv__GetCMGraph_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__srv__GetCMGraph_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__SRV__DETAIL__GET_CM_GRAPH__STRUCT_H_
