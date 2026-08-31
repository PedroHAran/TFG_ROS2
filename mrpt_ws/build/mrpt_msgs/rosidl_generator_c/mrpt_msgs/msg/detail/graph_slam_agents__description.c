// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrpt_msgs:msg/GraphSlamAgents.idl
// generated code does not contain a copyright notice

#include "mrpt_msgs/msg/detail/graph_slam_agents__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__GraphSlamAgents__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x2e, 0x5d, 0x33, 0x71, 0x78, 0x88, 0x44,
      0x40, 0x87, 0x9b, 0xf6, 0xbb, 0x05, 0xcb, 0x23,
      0xab, 0x2b, 0x9e, 0x27, 0x9a, 0x2b, 0xbd, 0x15,
      0x7f, 0xcf, 0x52, 0x17, 0x4f, 0xa3, 0x46, 0xe3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mrpt_msgs/msg/detail/graph_slam_agent__functions.h"
#include "std_msgs/msg/detail/string__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/bool__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t mrpt_msgs__msg__GraphSlamAgent__EXPECTED_HASH = {1, {
    0x57, 0x8f, 0xa3, 0x70, 0x60, 0x4d, 0xd1, 0xff,
    0xa5, 0xdc, 0xc5, 0x09, 0x3e, 0xc4, 0x7d, 0x58,
    0x02, 0x41, 0xc9, 0x22, 0x87, 0x79, 0x8e, 0x14,
    0xda, 0x51, 0x7c, 0x8a, 0x33, 0xe0, 0x0d, 0x9f,
  }};
static const rosidl_type_hash_t std_msgs__msg__Bool__EXPECTED_HASH = {1, {
    0xfe, 0xb9, 0x1e, 0x99, 0x5f, 0xf9, 0xeb, 0xd0,
    0x9c, 0x0c, 0xb3, 0xd2, 0xae, 0xd1, 0x8b, 0x11,
    0x07, 0x75, 0x85, 0x83, 0x9f, 0xb5, 0xdb, 0x80,
    0x19, 0x3b, 0x62, 0xd7, 0x45, 0x28, 0xf6, 0xc9,
  }};
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char mrpt_msgs__msg__GraphSlamAgents__TYPE_NAME[] = "mrpt_msgs/msg/GraphSlamAgents";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mrpt_msgs__msg__GraphSlamAgent__TYPE_NAME[] = "mrpt_msgs/msg/GraphSlamAgent";
static char std_msgs__msg__Bool__TYPE_NAME[] = "std_msgs/msg/Bool";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char mrpt_msgs__msg__GraphSlamAgents__FIELD_NAME__list[] = "list";

static rosidl_runtime_c__type_description__Field mrpt_msgs__msg__GraphSlamAgents__FIELDS[] = {
  {
    {mrpt_msgs__msg__GraphSlamAgents__FIELD_NAME__list, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrpt_msgs__msg__GraphSlamAgent__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrpt_msgs__msg__GraphSlamAgents__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__GraphSlamAgent__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Bool__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrpt_msgs__msg__GraphSlamAgents__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrpt_msgs__msg__GraphSlamAgents__TYPE_NAME, 29, 29},
      {mrpt_msgs__msg__GraphSlamAgents__FIELDS, 1, 1},
    },
    {mrpt_msgs__msg__GraphSlamAgents__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrpt_msgs__msg__GraphSlamAgent__EXPECTED_HASH, mrpt_msgs__msg__GraphSlamAgent__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mrpt_msgs__msg__GraphSlamAgent__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Bool__EXPECTED_HASH, std_msgs__msg__Bool__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Bool__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Defines vector of GraphSlamAgents.\n"
  "# Currently used in the mrpt_graphslam_2d ROS application.\n"
  "\n"
  "GraphSlamAgent[] list\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__GraphSlamAgents__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrpt_msgs__msg__GraphSlamAgents__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 120, 120},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__GraphSlamAgents__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrpt_msgs__msg__GraphSlamAgents__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mrpt_msgs__msg__GraphSlamAgent__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Bool__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
