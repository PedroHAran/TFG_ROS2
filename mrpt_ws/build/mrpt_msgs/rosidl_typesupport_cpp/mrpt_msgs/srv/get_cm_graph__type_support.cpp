// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
#include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCMGraph_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCMGraph_Request_type_support_ids_t;

static const _GetCMGraph_Request_type_support_ids_t _GetCMGraph_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCMGraph_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCMGraph_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCMGraph_Request_type_support_symbol_names_t _GetCMGraph_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_msgs, srv, GetCMGraph_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph_Request)),
  }
};

typedef struct _GetCMGraph_Request_type_support_data_t
{
  void * data[2];
} _GetCMGraph_Request_type_support_data_t;

static _GetCMGraph_Request_type_support_data_t _GetCMGraph_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCMGraph_Request_message_typesupport_map = {
  2,
  "mrpt_msgs",
  &_GetCMGraph_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCMGraph_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCMGraph_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCMGraph_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCMGraph_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Request>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_cpp::GetCMGraph_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrpt_msgs, srv, GetCMGraph_Request)() {
  return get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCMGraph_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCMGraph_Response_type_support_ids_t;

static const _GetCMGraph_Response_type_support_ids_t _GetCMGraph_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCMGraph_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCMGraph_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCMGraph_Response_type_support_symbol_names_t _GetCMGraph_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_msgs, srv, GetCMGraph_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph_Response)),
  }
};

typedef struct _GetCMGraph_Response_type_support_data_t
{
  void * data[2];
} _GetCMGraph_Response_type_support_data_t;

static _GetCMGraph_Response_type_support_data_t _GetCMGraph_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCMGraph_Response_message_typesupport_map = {
  2,
  "mrpt_msgs",
  &_GetCMGraph_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCMGraph_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCMGraph_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCMGraph_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCMGraph_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Response>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_cpp::GetCMGraph_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrpt_msgs, srv, GetCMGraph_Response)() {
  return get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCMGraph_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCMGraph_Event_type_support_ids_t;

static const _GetCMGraph_Event_type_support_ids_t _GetCMGraph_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCMGraph_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCMGraph_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCMGraph_Event_type_support_symbol_names_t _GetCMGraph_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_msgs, srv, GetCMGraph_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph_Event)),
  }
};

typedef struct _GetCMGraph_Event_type_support_data_t
{
  void * data[2];
} _GetCMGraph_Event_type_support_data_t;

static _GetCMGraph_Event_type_support_data_t _GetCMGraph_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCMGraph_Event_message_typesupport_map = {
  2,
  "mrpt_msgs",
  &_GetCMGraph_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetCMGraph_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetCMGraph_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCMGraph_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCMGraph_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_description,
  &mrpt_msgs__srv__GetCMGraph_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Event>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_cpp::GetCMGraph_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mrpt_msgs, srv, GetCMGraph_Event)() {
  return get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mrpt_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCMGraph_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCMGraph_type_support_ids_t;

static const _GetCMGraph_type_support_ids_t _GetCMGraph_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCMGraph_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCMGraph_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCMGraph_type_support_symbol_names_t _GetCMGraph_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mrpt_msgs, srv, GetCMGraph)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mrpt_msgs, srv, GetCMGraph)),
  }
};

typedef struct _GetCMGraph_type_support_data_t
{
  void * data[2];
} _GetCMGraph_type_support_data_t;

static _GetCMGraph_type_support_data_t _GetCMGraph_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCMGraph_service_typesupport_map = {
  2,
  "mrpt_msgs",
  &_GetCMGraph_service_typesupport_ids.typesupport_identifier[0],
  &_GetCMGraph_service_typesupport_symbol_names.symbol_name[0],
  &_GetCMGraph_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCMGraph_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCMGraph_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mrpt_msgs::srv::GetCMGraph_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mrpt_msgs::srv::GetCMGraph>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mrpt_msgs::srv::GetCMGraph>,
  &mrpt_msgs__srv__GetCMGraph__get_type_hash,
  &mrpt_msgs__srv__GetCMGraph__get_type_description,
  &mrpt_msgs__srv__GetCMGraph__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mrpt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mrpt_msgs::srv::GetCMGraph>()
{
  return &::mrpt_msgs::srv::rosidl_typesupport_cpp::GetCMGraph_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mrpt_msgs, srv, GetCMGraph)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mrpt_msgs::srv::GetCMGraph>();
}

#ifdef __cplusplus
}
#endif
