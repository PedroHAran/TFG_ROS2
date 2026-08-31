// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/ObservationObject.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/observation_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_pose_on_robot`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `sensed_data`
#include "mrpt_msgs/msg/detail/single_object_observation__functions.h"

bool
mrpt_msgs__msg__ObservationObject__init(mrpt_msgs__msg__ObservationObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrpt_msgs__msg__ObservationObject__fini(msg);
    return false;
  }
  // sensor_pose_on_robot
  if (!geometry_msgs__msg__Pose__init(&msg->sensor_pose_on_robot)) {
    mrpt_msgs__msg__ObservationObject__fini(msg);
    return false;
  }
  // min_sensor_distance
  // max_sensor_distance
  // sensor_std_range
  // sensor_std_yaw
  // sensor_std_pitch
  // sensed_data
  if (!mrpt_msgs__msg__SingleObjectObservation__Sequence__init(&msg->sensed_data, 0)) {
    mrpt_msgs__msg__ObservationObject__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__msg__ObservationObject__fini(mrpt_msgs__msg__ObservationObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_pose_on_robot
  geometry_msgs__msg__Pose__fini(&msg->sensor_pose_on_robot);
  // min_sensor_distance
  // max_sensor_distance
  // sensor_std_range
  // sensor_std_yaw
  // sensor_std_pitch
  // sensed_data
  mrpt_msgs__msg__SingleObjectObservation__Sequence__fini(&msg->sensed_data);
}

bool
mrpt_msgs__msg__ObservationObject__are_equal(const mrpt_msgs__msg__ObservationObject * lhs, const mrpt_msgs__msg__ObservationObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // sensor_pose_on_robot
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->sensor_pose_on_robot), &(rhs->sensor_pose_on_robot)))
  {
    return false;
  }
  // min_sensor_distance
  if (lhs->min_sensor_distance != rhs->min_sensor_distance) {
    return false;
  }
  // max_sensor_distance
  if (lhs->max_sensor_distance != rhs->max_sensor_distance) {
    return false;
  }
  // sensor_std_range
  if (lhs->sensor_std_range != rhs->sensor_std_range) {
    return false;
  }
  // sensor_std_yaw
  if (lhs->sensor_std_yaw != rhs->sensor_std_yaw) {
    return false;
  }
  // sensor_std_pitch
  if (lhs->sensor_std_pitch != rhs->sensor_std_pitch) {
    return false;
  }
  // sensed_data
  if (!mrpt_msgs__msg__SingleObjectObservation__Sequence__are_equal(
      &(lhs->sensed_data), &(rhs->sensed_data)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__ObservationObject__copy(
  const mrpt_msgs__msg__ObservationObject * input,
  mrpt_msgs__msg__ObservationObject * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // sensor_pose_on_robot
  if (!geometry_msgs__msg__Pose__copy(
      &(input->sensor_pose_on_robot), &(output->sensor_pose_on_robot)))
  {
    return false;
  }
  // min_sensor_distance
  output->min_sensor_distance = input->min_sensor_distance;
  // max_sensor_distance
  output->max_sensor_distance = input->max_sensor_distance;
  // sensor_std_range
  output->sensor_std_range = input->sensor_std_range;
  // sensor_std_yaw
  output->sensor_std_yaw = input->sensor_std_yaw;
  // sensor_std_pitch
  output->sensor_std_pitch = input->sensor_std_pitch;
  // sensed_data
  if (!mrpt_msgs__msg__SingleObjectObservation__Sequence__copy(
      &(input->sensed_data), &(output->sensed_data)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__msg__ObservationObject *
mrpt_msgs__msg__ObservationObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__ObservationObject * msg = (mrpt_msgs__msg__ObservationObject *)allocator.allocate(sizeof(mrpt_msgs__msg__ObservationObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__ObservationObject));
  bool success = mrpt_msgs__msg__ObservationObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__ObservationObject__destroy(mrpt_msgs__msg__ObservationObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__ObservationObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__ObservationObject__Sequence__init(mrpt_msgs__msg__ObservationObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__ObservationObject * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__ObservationObject)) {
      return false;
    }
    data = (mrpt_msgs__msg__ObservationObject *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__ObservationObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__ObservationObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__ObservationObject__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mrpt_msgs__msg__ObservationObject__Sequence__fini(mrpt_msgs__msg__ObservationObject__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mrpt_msgs__msg__ObservationObject__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mrpt_msgs__msg__ObservationObject__Sequence *
mrpt_msgs__msg__ObservationObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__ObservationObject__Sequence * array = (mrpt_msgs__msg__ObservationObject__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__ObservationObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__ObservationObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__ObservationObject__Sequence__destroy(mrpt_msgs__msg__ObservationObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__ObservationObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__ObservationObject__Sequence__are_equal(const mrpt_msgs__msg__ObservationObject__Sequence * lhs, const mrpt_msgs__msg__ObservationObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__ObservationObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__ObservationObject__Sequence__copy(
  const mrpt_msgs__msg__ObservationObject__Sequence * input,
  mrpt_msgs__msg__ObservationObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__ObservationObject)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__ObservationObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__ObservationObject * data =
      (mrpt_msgs__msg__ObservationObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__ObservationObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__ObservationObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__ObservationObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
