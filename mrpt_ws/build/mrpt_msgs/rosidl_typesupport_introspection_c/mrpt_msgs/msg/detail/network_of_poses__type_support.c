// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mrpt_msgs/msg/detail/network_of_poses__rosidl_typesupport_introspection_c.h"
#include "mrpt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"
#include "mrpt_msgs/msg/detail/network_of_poses__struct.h"


// Include directives for member types
// Member `nodes`
#include "mrpt_msgs/msg/node_id_with_pose_vec.h"
// Member `nodes`
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__rosidl_typesupport_introspection_c.h"
// Member `constraints`
#include "mrpt_msgs/msg/graph_constraint.h"
// Member `constraints`
#include "mrpt_msgs/msg/detail/graph_constraint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mrpt_msgs__msg__NetworkOfPoses__init(message_memory);
}

void mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_fini_function(void * message_memory)
{
  mrpt_msgs__msg__NetworkOfPoses__fini(message_memory);
}

size_t mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__size_function__NetworkOfPoses__constraints(
  const void * untyped_member)
{
  const mrpt_msgs__msg__GraphConstraint__Sequence * member =
    (const mrpt_msgs__msg__GraphConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__get_const_function__NetworkOfPoses__constraints(
  const void * untyped_member, size_t index)
{
  const mrpt_msgs__msg__GraphConstraint__Sequence * member =
    (const mrpt_msgs__msg__GraphConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__get_function__NetworkOfPoses__constraints(
  void * untyped_member, size_t index)
{
  mrpt_msgs__msg__GraphConstraint__Sequence * member =
    (mrpt_msgs__msg__GraphConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__fetch_function__NetworkOfPoses__constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mrpt_msgs__msg__GraphConstraint * item =
    ((const mrpt_msgs__msg__GraphConstraint *)
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__get_const_function__NetworkOfPoses__constraints(untyped_member, index));
  mrpt_msgs__msg__GraphConstraint * value =
    (mrpt_msgs__msg__GraphConstraint *)(untyped_value);
  *value = *item;
}

void mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__assign_function__NetworkOfPoses__constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mrpt_msgs__msg__GraphConstraint * item =
    ((mrpt_msgs__msg__GraphConstraint *)
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__get_function__NetworkOfPoses__constraints(untyped_member, index));
  const mrpt_msgs__msg__GraphConstraint * value =
    (const mrpt_msgs__msg__GraphConstraint *)(untyped_value);
  *item = *value;
}

bool mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__resize_function__NetworkOfPoses__constraints(
  void * untyped_member, size_t size)
{
  mrpt_msgs__msg__GraphConstraint__Sequence * member =
    (mrpt_msgs__msg__GraphConstraint__Sequence *)(untyped_member);
  mrpt_msgs__msg__GraphConstraint__Sequence__fini(member);
  return mrpt_msgs__msg__GraphConstraint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_member_array[3] = {
  {
    "root",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__NetworkOfPoses, root),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__NetworkOfPoses, nodes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mrpt_msgs__msg__NetworkOfPoses, constraints),  // bytes offset in struct
    NULL,  // default value
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__size_function__NetworkOfPoses__constraints,  // size() function pointer
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__get_const_function__NetworkOfPoses__constraints,  // get_const(index) function pointer
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__get_function__NetworkOfPoses__constraints,  // get(index) function pointer
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__fetch_function__NetworkOfPoses__constraints,  // fetch(index, &value) function pointer
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__assign_function__NetworkOfPoses__constraints,  // assign(index, value) function pointer
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__resize_function__NetworkOfPoses__constraints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_members = {
  "mrpt_msgs__msg",  // message namespace
  "NetworkOfPoses",  // message name
  3,  // number of fields
  sizeof(mrpt_msgs__msg__NetworkOfPoses),
  false,  // has_any_key_member_
  mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_member_array,  // message members
  mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_type_support_handle = {
  0,
  &mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_members,
  get_message_typesupport_handle_function,
  &mrpt_msgs__msg__NetworkOfPoses__get_type_hash,
  &mrpt_msgs__msg__NetworkOfPoses__get_type_description,
  &mrpt_msgs__msg__NetworkOfPoses__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mrpt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, NetworkOfPoses)() {
  mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, NodeIDWithPoseVec)();
  mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mrpt_msgs, msg, GraphConstraint)();
  if (!mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_type_support_handle.typesupport_identifier) {
    mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mrpt_msgs__msg__NetworkOfPoses__rosidl_typesupport_introspection_c__NetworkOfPoses_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
