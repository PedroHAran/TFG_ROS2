// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/NodeIDWithLaserScan.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/node_id_with_laser_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scan`
#include "sensor_msgs/msg/detail/laser_scan__functions.h"

bool
mrpt_msgs__msg__NodeIDWithLaserScan__init(mrpt_msgs__msg__NodeIDWithLaserScan * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // scan
  if (!sensor_msgs__msg__LaserScan__init(&msg->scan)) {
    mrpt_msgs__msg__NodeIDWithLaserScan__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__msg__NodeIDWithLaserScan__fini(mrpt_msgs__msg__NodeIDWithLaserScan * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // scan
  sensor_msgs__msg__LaserScan__fini(&msg->scan);
}

bool
mrpt_msgs__msg__NodeIDWithLaserScan__are_equal(const mrpt_msgs__msg__NodeIDWithLaserScan * lhs, const mrpt_msgs__msg__NodeIDWithLaserScan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // scan
  if (!sensor_msgs__msg__LaserScan__are_equal(
      &(lhs->scan), &(rhs->scan)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__NodeIDWithLaserScan__copy(
  const mrpt_msgs__msg__NodeIDWithLaserScan * input,
  mrpt_msgs__msg__NodeIDWithLaserScan * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // scan
  if (!sensor_msgs__msg__LaserScan__copy(
      &(input->scan), &(output->scan)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__msg__NodeIDWithLaserScan *
mrpt_msgs__msg__NodeIDWithLaserScan__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithLaserScan * msg = (mrpt_msgs__msg__NodeIDWithLaserScan *)allocator.allocate(sizeof(mrpt_msgs__msg__NodeIDWithLaserScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__NodeIDWithLaserScan));
  bool success = mrpt_msgs__msg__NodeIDWithLaserScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__NodeIDWithLaserScan__destroy(mrpt_msgs__msg__NodeIDWithLaserScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__NodeIDWithLaserScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__init(mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithLaserScan * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__NodeIDWithLaserScan)) {
      return false;
    }
    data = (mrpt_msgs__msg__NodeIDWithLaserScan *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__NodeIDWithLaserScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__NodeIDWithLaserScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__NodeIDWithLaserScan__fini(&data[i - 1]);
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
mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__fini(mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * array)
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
      mrpt_msgs__msg__NodeIDWithLaserScan__fini(&array->data[i]);
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

mrpt_msgs__msg__NodeIDWithLaserScan__Sequence *
mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * array = (mrpt_msgs__msg__NodeIDWithLaserScan__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__NodeIDWithLaserScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__destroy(mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__are_equal(const mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * lhs, const mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__NodeIDWithLaserScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__copy(
  const mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * input,
  mrpt_msgs__msg__NodeIDWithLaserScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__NodeIDWithLaserScan)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__NodeIDWithLaserScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__NodeIDWithLaserScan * data =
      (mrpt_msgs__msg__NodeIDWithLaserScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__NodeIDWithLaserScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__NodeIDWithLaserScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__NodeIDWithLaserScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
