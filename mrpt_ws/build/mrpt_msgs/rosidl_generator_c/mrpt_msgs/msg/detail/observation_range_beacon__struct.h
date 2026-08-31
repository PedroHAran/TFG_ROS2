// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mrpt_msgs:msg/ObservationRangeBeacon.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrpt_msgs/msg/observation_range_beacon.h"


#ifndef MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEACON__STRUCT_H_
#define MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEACON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensor_pose_on_robot'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'sensed_data'
#include "mrpt_msgs/msg/detail/single_range_beacon_observation__struct.h"

/// Struct defined in msg/ObservationRangeBeacon in the package mrpt_msgs.
/**
  * This message holds an observation of one or more landmarks 
  *  detected by their range (distance) 
  *  from some sensor on the robot.
 */
typedef struct mrpt_msgs__msg__ObservationRangeBeacon
{
  /// Time of sensor data acquisition, coordinate frame ID.
  std_msgs__msg__Header header;
  /// The sensor pose on the robot coordinates frame.
  geometry_msgs__msg__Pose sensor_pose_on_robot;
  /// Sensor characteristics:
  /// In meters (m)
  double min_sensor_distance;
  /// (m)
  double max_sensor_distance;
  /// Typical sensor noise:
  /// (m)
  double sensor_std_range;
  /// The vector of individual observations
  mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence sensed_data;
} mrpt_msgs__msg__ObservationRangeBeacon;

// Struct for a sequence of mrpt_msgs__msg__ObservationRangeBeacon.
typedef struct mrpt_msgs__msg__ObservationRangeBeacon__Sequence
{
  mrpt_msgs__msg__ObservationRangeBeacon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mrpt_msgs__msg__ObservationRangeBeacon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MRPT_MSGS__MSG__DETAIL__OBSERVATION_RANGE_BEACON__STRUCT_H_
