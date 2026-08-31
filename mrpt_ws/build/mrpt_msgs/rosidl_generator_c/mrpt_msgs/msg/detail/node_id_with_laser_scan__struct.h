// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/node_id_with_laser_scan.h"


#ifndef MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__struct.h"

/// Struct defined in msg/NodeIDWithLaserScan in the package mrpt_msgs.
/**
  * NodeID along with the associated LaserScan
  *
  * Currently used in the mrpt_graphslam_2d ROS application.
 */
typedef struct mrpt_msgs__msg__NodeIDWithLaserScan
{
  uint64_t node_id;
  sensor_msgs__msg__LaserScan scan;
} mrpt_msgs__msg__NodeIDWithLaserScan;

// Struct for a sequence of mrpt_msgs__msg__NodeIDWithLaserScan.
typedef struct mrpt_msgs__msg__NodeIDWithLaserScan__Sequence
{
  mrpt_msgs__msg__NodeIDWithLaserScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__NodeIDWithLaserScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__NODE_ID_WITH_LASER_SCAN__STRUCT_H_
