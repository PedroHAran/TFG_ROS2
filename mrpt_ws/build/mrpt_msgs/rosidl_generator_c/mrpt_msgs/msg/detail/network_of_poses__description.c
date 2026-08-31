// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice

#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mrpt_msgs
const rosidl_type_hash_t *
mrpt_msgs__msg__NetworkOfPoses__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x27, 0x8c, 0xe6, 0xc8, 0xeb, 0x3d, 0xde,
      0x98, 0xd8, 0x5a, 0x12, 0x7e, 0xe0, 0x4c, 0x33,
      0xbf, 0xfb, 0x1f, 0x41, 0x4e, 0xf1, 0x1f, 0xde,
      0x36, 0xa1, 0x5e, 0xbc, 0xde, 0x11, 0x33, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/string__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
#include "mrpt_msgs/msg/detail/node_id_with_pose__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__functions.h"
#include "mrpt_msgs/msg/detail/graph_constraint__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH = {1, {
    0x9a, 0x7c, 0x0f, 0xd2, 0x34, 0xb7, 0xf4, 0x5c,
    0x60, 0x98, 0x74, 0x5e, 0xcc, 0xcd, 0x77, 0x3c,
    0xa1, 0x08, 0x56, 0x70, 0xe6, 0x41, 0x07, 0x13,
    0x53, 0x97, 0xae, 0xe3, 0x1c, 0x02, 0xe1, 0xbb,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t mrpt_msgs__msg__GraphConstraint__EXPECTED_HASH = {1, {
    0x70, 0x2f, 0xae, 0x94, 0xec, 0x8e, 0xb1, 0x98,
    0x72, 0xb3, 0x5f, 0xef, 0xdc, 0xd9, 0xb7, 0x8a,
    0x4c, 0xf8, 0xe5, 0xbf, 0xcb, 0x93, 0xcc, 0xf1,
    0x93, 0x8b, 0x99, 0xad, 0x81, 0xa7, 0x55, 0x36,
  }};
static const rosidl_type_hash_t mrpt_msgs__msg__NodeIDWithPose__EXPECTED_HASH = {1, {
    0x04, 0xf3, 0xdd, 0x1e, 0xe5, 0x95, 0x1a, 0x56,
    0x55, 0x52, 0x76, 0x38, 0x85, 0x36, 0x50, 0xe9,
    0xd7, 0x22, 0x71, 0x4a, 0x8a, 0xd6, 0xa5, 0xc2,
    0x17, 0x3a, 0x00, 0x55, 0xa3, 0xa5, 0xab, 0x72,
  }};
static const rosidl_type_hash_t mrpt_msgs__msg__NodeIDWithPoseVec__EXPECTED_HASH = {1, {
    0x2d, 0x23, 0xc6, 0xd7, 0x92, 0xcf, 0xec, 0x88,
    0xcd, 0x61, 0x2d, 0xee, 0xfd, 0xaa, 0x07, 0xb5,
    0x7d, 0xfa, 0xec, 0x95, 0x80, 0x26, 0xc5, 0xec,
    0x8e, 0x08, 0x6a, 0x9e, 0x45, 0xb6, 0x1e, 0xcf,
  }};
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char mrpt_msgs__msg__NetworkOfPoses__TYPE_NAME[] = "mrpt_msgs/msg/NetworkOfPoses";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseWithCovariance__TYPE_NAME[] = "geometry_msgs/msg/PoseWithCovariance";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char mrpt_msgs__msg__GraphConstraint__TYPE_NAME[] = "mrpt_msgs/msg/GraphConstraint";
static char mrpt_msgs__msg__NodeIDWithPose__TYPE_NAME[] = "mrpt_msgs/msg/NodeIDWithPose";
static char mrpt_msgs__msg__NodeIDWithPoseVec__TYPE_NAME[] = "mrpt_msgs/msg/NodeIDWithPoseVec";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char mrpt_msgs__msg__NetworkOfPoses__FIELD_NAME__root[] = "root";
static char mrpt_msgs__msg__NetworkOfPoses__FIELD_NAME__nodes[] = "nodes";
static char mrpt_msgs__msg__NetworkOfPoses__FIELD_NAME__constraints[] = "constraints";

static rosidl_runtime_c__type_description__Field mrpt_msgs__msg__NetworkOfPoses__FIELDS[] = {
  {
    {mrpt_msgs__msg__NetworkOfPoses__FIELD_NAME__root, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__NetworkOfPoses__FIELD_NAME__nodes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mrpt_msgs__msg__NodeIDWithPoseVec__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__NetworkOfPoses__FIELD_NAME__constraints, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mrpt_msgs__msg__GraphConstraint__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mrpt_msgs__msg__NetworkOfPoses__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseWithCovariance__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__GraphConstraint__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__NodeIDWithPose__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {mrpt_msgs__msg__NodeIDWithPoseVec__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mrpt_msgs__msg__NetworkOfPoses__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mrpt_msgs__msg__NetworkOfPoses__TYPE_NAME, 28, 28},
      {mrpt_msgs__msg__NetworkOfPoses__FIELDS, 3, 3},
    },
    {mrpt_msgs__msg__NetworkOfPoses__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseWithCovariance__EXPECTED_HASH, geometry_msgs__msg__PoseWithCovariance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PoseWithCovariance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrpt_msgs__msg__GraphConstraint__EXPECTED_HASH, mrpt_msgs__msg__GraphConstraint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = mrpt_msgs__msg__GraphConstraint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrpt_msgs__msg__NodeIDWithPose__EXPECTED_HASH, mrpt_msgs__msg__NodeIDWithPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = mrpt_msgs__msg__NodeIDWithPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mrpt_msgs__msg__NodeIDWithPoseVec__EXPECTED_HASH, mrpt_msgs__msg__NodeIDWithPoseVec__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = mrpt_msgs__msg__NodeIDWithPoseVec__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Represents a 2D/3D Directed Graph of Constraints\n"
  "#\n"
  "# Graph consists of:\n"
  "# - NodeIDs with their corresponding poses\n"
  "# - Directed Constraints that connect 2 nodes with each other\n"
  "# - Root node marking the start of the graph\n"
  "\n"
  "uint64 root\n"
  "NodeIDWithPoseVec nodes\n"
  "GraphConstraint[] constraints";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mrpt_msgs__msg__NetworkOfPoses__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mrpt_msgs__msg__NetworkOfPoses__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 291, 291},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mrpt_msgs__msg__NetworkOfPoses__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mrpt_msgs__msg__NetworkOfPoses__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PoseWithCovariance__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *mrpt_msgs__msg__GraphConstraint__get_individual_type_description_source(NULL);
    sources[6] = *mrpt_msgs__msg__NodeIDWithPose__get_individual_type_description_source(NULL);
    sources[7] = *mrpt_msgs__msg__NodeIDWithPoseVec__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
