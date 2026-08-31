// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/NodeIDWithPose.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/node_id_with_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `str_id`
#include "std_msgs/msg/detail/string__functions.h"

bool
mrpt_msgs__msg__NodeIDWithPose__init(mrpt_msgs__msg__NodeIDWithPose * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    mrpt_msgs__msg__NodeIDWithPose__fini(msg);
    return false;
  }
  // str_id
  if (!std_msgs__msg__String__init(&msg->str_id)) {
    mrpt_msgs__msg__NodeIDWithPose__fini(msg);
    return false;
  }
  // node_id_loc
  return true;
}

void
mrpt_msgs__msg__NodeIDWithPose__fini(mrpt_msgs__msg__NodeIDWithPose * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // str_id
  std_msgs__msg__String__fini(&msg->str_id);
  // node_id_loc
}

bool
mrpt_msgs__msg__NodeIDWithPose__are_equal(const mrpt_msgs__msg__NodeIDWithPose * lhs, const mrpt_msgs__msg__NodeIDWithPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // str_id
  if (!std_msgs__msg__String__are_equal(
      &(lhs->str_id), &(rhs->str_id)))
  {
    return false;
  }
  // node_id_loc
  if (lhs->node_id_loc != rhs->node_id_loc) {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__NodeIDWithPose__copy(
  const mrpt_msgs__msg__NodeIDWithPose * input,
  mrpt_msgs__msg__NodeIDWithPose * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // str_id
  if (!std_msgs__msg__String__copy(
      &(input->str_id), &(output->str_id)))
  {
    return false;
  }
  // node_id_loc
  output->node_id_loc = input->node_id_loc;
  return true;
}

mrpt_msgs__msg__NodeIDWithPose *
mrpt_msgs__msg__NodeIDWithPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithPose * msg = (mrpt_msgs__msg__NodeIDWithPose *)allocator.allocate(sizeof(mrpt_msgs__msg__NodeIDWithPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__NodeIDWithPose));
  bool success = mrpt_msgs__msg__NodeIDWithPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__NodeIDWithPose__destroy(mrpt_msgs__msg__NodeIDWithPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__NodeIDWithPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__NodeIDWithPose__Sequence__init(mrpt_msgs__msg__NodeIDWithPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithPose * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__NodeIDWithPose)) {
      return false;
    }
    data = (mrpt_msgs__msg__NodeIDWithPose *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__NodeIDWithPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__NodeIDWithPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__NodeIDWithPose__fini(&data[i - 1]);
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
mrpt_msgs__msg__NodeIDWithPose__Sequence__fini(mrpt_msgs__msg__NodeIDWithPose__Sequence * array)
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
      mrpt_msgs__msg__NodeIDWithPose__fini(&array->data[i]);
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

mrpt_msgs__msg__NodeIDWithPose__Sequence *
mrpt_msgs__msg__NodeIDWithPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NodeIDWithPose__Sequence * array = (mrpt_msgs__msg__NodeIDWithPose__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__NodeIDWithPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__NodeIDWithPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__NodeIDWithPose__Sequence__destroy(mrpt_msgs__msg__NodeIDWithPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__NodeIDWithPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__NodeIDWithPose__Sequence__are_equal(const mrpt_msgs__msg__NodeIDWithPose__Sequence * lhs, const mrpt_msgs__msg__NodeIDWithPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__NodeIDWithPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__NodeIDWithPose__Sequence__copy(
  const mrpt_msgs__msg__NodeIDWithPose__Sequence * input,
  mrpt_msgs__msg__NodeIDWithPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__NodeIDWithPose)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__NodeIDWithPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__NodeIDWithPose * data =
      (mrpt_msgs__msg__NodeIDWithPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__NodeIDWithPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__NodeIDWithPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__NodeIDWithPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
