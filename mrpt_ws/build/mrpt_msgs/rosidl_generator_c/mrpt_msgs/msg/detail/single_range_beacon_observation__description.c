// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrpt_msgs:msg/SingleRangeBeaconObservation.idl
// generated code does not contain a copyright notice

#include "mrpt_msgs/msg/detail/single_range_beacon_observation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x48, 0x1e, 0x94, 0x53, 0xc9, 0x98, 0xc3,
      0xf9, 0xb4, 0x8f, 0x92, 0x83, 0x1e, 0x07, 0xac,
      0x26, 0x5e, 0x3f, 0x6d, 0xf3, 0x85, 0x2e, 0x71,
      0x1c, 0x25, 0xdf, 0xfa, 0xb5, 0xf7, 0xbf, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mrpt_msgs__msg__SingleRangeBeaconObservation__TYPE_NAME[] = "mrpt_msgs/msg/SingleRangeBeaconObservation";

// Define type names, field names, and default values
static char mrpt_msgs__msg__SingleRangeBeaconObservation__FIELD_NAME__range[] = "range";
static char mrpt_msgs__msg__SingleRangeBeaconObservation__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field mrpt_msgs__msg__SingleRangeBeaconObservation__FIELDS[] = {
  {
    {mrpt_msgs__msg__SingleRangeBeaconObservation__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__SingleRangeBeaconObservation__FIELD_NAME__id, 2, 2},
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
mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrpt_msgs__msg__SingleRangeBeaconObservation__TYPE_NAME, 42, 42},
      {mrpt_msgs__msg__SingleRangeBeaconObservation__FIELDS, 2, 2},
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
  "int32    id       # Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrpt_msgs__msg__SingleRangeBeaconObservation__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 165, 165},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__SingleRangeBeaconObservation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrpt_msgs__msg__SingleRangeBeaconObservation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
