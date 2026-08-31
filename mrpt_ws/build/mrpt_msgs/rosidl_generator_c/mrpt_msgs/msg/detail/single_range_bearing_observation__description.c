// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrpt_msgs:msg/SingleRangeBearingObservation.idl
// generated code does not contain a copyright notice

#include "mrpt_msgs/msg/detail/single_range_bearing_observation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__SingleRangeBearingObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x31, 0xfc, 0xfc, 0x78, 0x72, 0x41, 0xe0,
      0x27, 0xa9, 0xd7, 0xed, 0xdf, 0xc5, 0xb6, 0xfd,
      0x29, 0xfa, 0x43, 0x89, 0x07, 0x45, 0xf4, 0x35,
      0x54, 0x8f, 0xe0, 0x45, 0x76, 0xf6, 0x72, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrpt_msgs__msg__SingleRangeBearingObservation__TYPE_NAME[] = "mrpt_msgs/msg/SingleRangeBearingObservation";

// Define type names, field names, and default values
static char mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__range[] = "range";
static char mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__yaw[] = "yaw";
static char mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__pitch[] = "pitch";
static char mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field mrpt_msgs__msg__SingleRangeBearingObservation__FIELDS[] = {
  {
    {mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__SingleRangeBearingObservation__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrpt_msgs__msg__SingleRangeBearingObservation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrpt_msgs__msg__SingleRangeBearingObservation__TYPE_NAME, 43, 43},
      {mrpt_msgs__msg__SingleRangeBearingObservation__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#int32 INVALID_LANDMARK_ID = -1\n"
  "\n"
  "\n"
  "float64  range    # Distance, in meters.\n"
  "float64  yaw      # Angle wrt +Z (rads)\n"
  "float64  pitch    # Angle wrt +Y (rads)\n"
  "int32    id       # Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__SingleRangeBearingObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrpt_msgs__msg__SingleRangeBearingObservation__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 245, 245},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__SingleRangeBearingObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrpt_msgs__msg__SingleRangeBearingObservation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
