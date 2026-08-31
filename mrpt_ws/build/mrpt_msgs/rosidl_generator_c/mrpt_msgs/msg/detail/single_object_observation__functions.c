// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/SingleObjectObservation.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/single_object_observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose_wo`
// Member `pose_so`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `shape_variables`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrpt_msgs__msg__SingleObjectObservation__init(mrpt_msgs__msg__SingleObjectObservation * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // yaw
  // pitch
  // pose_wo
  if (!geometry_msgs__msg__Pose__init(&msg->pose_wo)) {
    mrpt_msgs__msg__SingleObjectObservation__fini(msg);
    return false;
  }
  // pose_so
  if (!geometry_msgs__msg__Pose__init(&msg->pose_so)) {
    mrpt_msgs__msg__SingleObjectObservation__fini(msg);
    return false;
  }
  // shape_variables
  if (!rosidl_runtime_c__float__Sequence__init(&msg->shape_variables, 0)) {
    mrpt_msgs__msg__SingleObjectObservation__fini(msg);
    return false;
  }
  // id
  return true;
}

void
mrpt_msgs__msg__SingleObjectObservation__fini(mrpt_msgs__msg__SingleObjectObservation * msg)
{
  if (!msg) {
    return;
  }
  // range
  // yaw
  // pitch
  // pose_wo
  geometry_msgs__msg__Pose__fini(&msg->pose_wo);
  // pose_so
  geometry_msgs__msg__Pose__fini(&msg->pose_so);
  // shape_variables
  rosidl_runtime_c__float__Sequence__fini(&msg->shape_variables);
  // id
}

bool
mrpt_msgs__msg__SingleObjectObservation__are_equal(const mrpt_msgs__msg__SingleObjectObservation * lhs, const mrpt_msgs__msg__SingleObjectObservation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // pose_wo
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose_wo), &(rhs->pose_wo)))
  {
    return false;
  }
  // pose_so
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose_so), &(rhs->pose_so)))
  {
    return false;
  }
  // shape_variables
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->shape_variables), &(rhs->shape_variables)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__SingleObjectObservation__copy(
  const mrpt_msgs__msg__SingleObjectObservation * input,
  mrpt_msgs__msg__SingleObjectObservation * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // pose_wo
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose_wo), &(output->pose_wo)))
  {
    return false;
  }
  // pose_so
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose_so), &(output->pose_so)))
  {
    return false;
  }
  // shape_variables
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->shape_variables), &(output->shape_variables)))
  {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

mrpt_msgs__msg__SingleObjectObservation *
mrpt_msgs__msg__SingleObjectObservation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__SingleObjectObservation * msg = (mrpt_msgs__msg__SingleObjectObservation *)allocator.allocate(sizeof(mrpt_msgs__msg__SingleObjectObservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__SingleObjectObservation));
  bool success = mrpt_msgs__msg__SingleObjectObservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__SingleObjectObservation__destroy(mrpt_msgs__msg__SingleObjectObservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__SingleObjectObservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__SingleObjectObservation__Sequence__init(mrpt_msgs__msg__SingleObjectObservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__SingleObjectObservation * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__SingleObjectObservation)) {
      return false;
    }
    data = (mrpt_msgs__msg__SingleObjectObservation *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__SingleObjectObservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__SingleObjectObservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__SingleObjectObservation__fini(&data[i - 1]);
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
mrpt_msgs__msg__SingleObjectObservation__Sequence__fini(mrpt_msgs__msg__SingleObjectObservation__Sequence * array)
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
      mrpt_msgs__msg__SingleObjectObservation__fini(&array->data[i]);
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

mrpt_msgs__msg__SingleObjectObservation__Sequence *
mrpt_msgs__msg__SingleObjectObservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__SingleObjectObservation__Sequence * array = (mrpt_msgs__msg__SingleObjectObservation__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__SingleObjectObservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__SingleObjectObservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__SingleObjectObservation__Sequence__destroy(mrpt_msgs__msg__SingleObjectObservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__SingleObjectObservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__SingleObjectObservation__Sequence__are_equal(const mrpt_msgs__msg__SingleObjectObservation__Sequence * lhs, const mrpt_msgs__msg__SingleObjectObservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__SingleObjectObservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__SingleObjectObservation__Sequence__copy(
  const mrpt_msgs__msg__SingleObjectObservation__Sequence * input,
  mrpt_msgs__msg__SingleObjectObservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__SingleObjectObservation)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__SingleObjectObservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__SingleObjectObservation * data =
      (mrpt_msgs__msg__SingleObjectObservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__SingleObjectObservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__SingleObjectObservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__SingleObjectObservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
