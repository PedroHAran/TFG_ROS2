// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrpt_msgs:msg/ObservationRangeBearing.idl
// generated code does not contain a copyright notice

#include "mrpt_msgs/msg/detail/observation_range_bearing__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__ObservationRangeBearing__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x25, 0x1e, 0x7b, 0xea, 0x8f, 0x87, 0x06,
      0x94, 0x86, 0xf4, 0x04, 0x36, 0x48, 0xcf, 0x5d,
      0xfd, 0x7f, 0x68, 0xd1, 0x64, 0xcb, 0xea, 0x43,
      0x88, 0x29, 0x1f, 0x05, 0xae, 0x85, 0xe9, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrpt_msgs/msg/detail/single_range_bearing_observation__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t mrpt_msgs__msg__SingleRangeBearingObservation__EXPECTED_HASH = {1, {
    0xc7, 0x31, 0xfc, 0xfc, 0x78, 0x72, 0x41, 0xe0,
    0x27, 0xa9, 0xd7, 0xed, 0xdf, 0xc5, 0xb6, 0xfd,
    0x29, 0xfa, 0x43, 0x89, 0x07, 0x45, 0xf4, 0x35,
    0x54, 0x8f, 0xe0, 0x45, 0x76, 0xf6, 0x72, 0x98,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrpt_msgs__msg__ObservationRangeBearing__TYPE_NAME[] = "mrpt_msgs/msg/ObservationRangeBearing";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char mrpt_msgs__msg__SingleRangeBearingObservation__TYPE_NAME[] = "mrpt_msgs/msg/SingleRangeBearingObservation";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__header[] = "header";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_pose_on_robot[] = "sensor_pose_on_robot";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__min_sensor_distance[] = "min_sensor_distance";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__max_sensor_distance[] = "max_sensor_distance";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_std_range[] = "sensor_std_range";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_std_yaw[] = "sensor_std_yaw";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_std_pitch[] = "sensor_std_pitch";
static char mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensed_data[] = "sensed_data";

static rosidl_runtime_c__type_description__Field mrpt_msgs__msg__ObservationRangeBearing__FIELDS[] = {
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_pose_on_robot, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__min_sensor_distance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__max_sensor_distance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_std_range, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_std_yaw, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensor_std_pitch, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__ObservationRangeBearing__FIELD_NAME__sensed_data, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrpt_msgs__msg__SingleRangeBearingObservation__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrpt_msgs__msg__ObservationRangeBearing__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__SingleRangeBearingObservation__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrpt_msgs__msg__ObservationRangeBearing__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrpt_msgs__msg__ObservationRangeBearing__TYPE_NAME, 37, 37},
      {mrpt_msgs__msg__ObservationRangeBearing__FIELDS, 8, 8},
    },
    {mrpt_msgs__msg__ObservationRangeBearing__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrpt_msgs__msg__SingleRangeBearingObservation__EXPECTED_HASH, mrpt_msgs__msg__SingleRangeBearingObservation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = mrpt_msgs__msg__SingleRangeBearingObservation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message holds an observation of one or more landmarks \n"
  "#  detected by their range (distance) + bearing (2 or 3 angles) \n"
  "#  from some sensor on the robot.\n"
  "\n"
  "# Time of sensor data acquisition, coordinate frame ID.\n"
  "std_msgs/Header header\n"
  "\n"
  "# The sensor pose on the robot coordinates frame.\n"
  "geometry_msgs/Pose sensor_pose_on_robot\n"
  "\n"
  "# Sensor characteristics:\n"
  "float64 min_sensor_distance   # In meters (m)\n"
  "float64 max_sensor_distance   # (m)\n"
  "\n"
  "# Typical sensor noise:\n"
  "float64 sensor_std_range      # (m)\n"
  "float64 sensor_std_yaw        # (rad)\n"
  "float64 sensor_std_pitch      # (pitch)\n"
  "\n"
  "# The vector of individual observations\n"
  "SingleRangeBearingObservation[] sensed_data\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__ObservationRangeBearing__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrpt_msgs__msg__ObservationRangeBearing__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 667, 667},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__ObservationRangeBearing__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrpt_msgs__msg__ObservationRangeBearing__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *mrpt_msgs__msg__SingleRangeBearingObservation__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
