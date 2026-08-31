// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice

#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__NodeIDWithLaserScan__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x4f, 0xb5, 0x47, 0xb0, 0xf3, 0x4d, 0x90,
      0x46, 0x51, 0x45, 0x88, 0xce, 0x98, 0xdd, 0xdf,
      0xa1, 0x3d, 0xce, 0xe2, 0x81, 0xa1, 0xb3, 0xf9,
      0xb8, 0xfc, 0x06, 0x56, 0x38, 0x05, 0xba, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "sensor_msgs/msg/detail/laser_scan__functions.h"
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
static const rosidl_type_hash_t sensor_msgs__msg__LaserScan__EXPECTED_HASH = {1, {
    0x64, 0xc1, 0x91, 0x39, 0x80, 0x13, 0xaf, 0x96,
    0x50, 0x9d, 0x51, 0x8d, 0xac, 0x71, 0xd5, 0x16,
    0x4f, 0x93, 0x82, 0x55, 0x3f, 0xce, 0x5c, 0x1f,
    0x8c, 0xca, 0x5b, 0xe7, 0x92, 0x4b, 0xd8, 0x28,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char mrpt_msgs__msg__NodeIDWithLaserScan__TYPE_NAME[] = "mrpt_msgs/msg/NodeIDWithLaserScan";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__LaserScan__TYPE_NAME[] = "sensor_msgs/msg/LaserScan";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char mrpt_msgs__msg__NodeIDWithLaserScan__FIELD_NAME__node_id[] = "node_id";
static char mrpt_msgs__msg__NodeIDWithLaserScan__FIELD_NAME__scan[] = "scan";

static rosidl_runtime_c__type_description__Field mrpt_msgs__msg__NodeIDWithLaserScan__FIELDS[] = {
  {
    {mrpt_msgs__msg__NodeIDWithLaserScan__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__NodeIDWithLaserScan__FIELD_NAME__scan, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__LaserScan__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrpt_msgs__msg__NodeIDWithLaserScan__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__LaserScan__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrpt_msgs__msg__NodeIDWithLaserScan__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrpt_msgs__msg__NodeIDWithLaserScan__TYPE_NAME, 33, 33},
      {mrpt_msgs__msg__NodeIDWithLaserScan__FIELDS, 2, 2},
    },
    {mrpt_msgs__msg__NodeIDWithLaserScan__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__LaserScan__EXPECTED_HASH, sensor_msgs__msg__LaserScan__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__LaserScan__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NodeID along with the associated LaserScan\n"
  "#\n"
  "# Currently used in the mrpt_graphslam_2d ROS application.\n"
  "\n"
  "uint64 node_id\n"
  "sensor_msgs/LaserScan scan";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__NodeIDWithLaserScan__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrpt_msgs__msg__NodeIDWithLaserScan__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 149, 149},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__NodeIDWithLaserScan__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrpt_msgs__msg__NodeIDWithLaserScan__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__LaserScan__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
