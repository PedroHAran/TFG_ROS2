// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nodes`
#include "mrpt_msgs/msg/detail/node_id_with_pose_vec__functions.h"
// Member `constraints`
#include "mrpt_msgs/msg/detail/graph_constraint__functions.h"

bool
mrpt_msgs__msg__NetworkOfPoses__init(mrpt_msgs__msg__NetworkOfPoses * msg)
{
  if (!msg) {
    return false;
  }
  // root
  // nodes
  if (!mrpt_msgs__msg__NodeIDWithPoseVec__init(&msg->nodes)) {
    mrpt_msgs__msg__NetworkOfPoses__fini(msg);
    return false;
  }
  // constraints
  if (!mrpt_msgs__msg__GraphConstraint__Sequence__init(&msg->constraints, 0)) {
    mrpt_msgs__msg__NetworkOfPoses__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__msg__NetworkOfPoses__fini(mrpt_msgs__msg__NetworkOfPoses * msg)
{
  if (!msg) {
    return;
  }
  // root
  // nodes
  mrpt_msgs__msg__NodeIDWithPoseVec__fini(&msg->nodes);
  // constraints
  mrpt_msgs__msg__GraphConstraint__Sequence__fini(&msg->constraints);
}

bool
mrpt_msgs__msg__NetworkOfPoses__are_equal(const mrpt_msgs__msg__NetworkOfPoses * lhs, const mrpt_msgs__msg__NetworkOfPoses * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // root
  if (lhs->root != rhs->root) {
    return false;
  }
  // nodes
  if (!mrpt_msgs__msg__NodeIDWithPoseVec__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  // constraints
  if (!mrpt_msgs__msg__GraphConstraint__Sequence__are_equal(
      &(lhs->constraints), &(rhs->constraints)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__NetworkOfPoses__copy(
  const mrpt_msgs__msg__NetworkOfPoses * input,
  mrpt_msgs__msg__NetworkOfPoses * output)
{
  if (!input || !output) {
    return false;
  }
  // root
  output->root = input->root;
  // nodes
  if (!mrpt_msgs__msg__NodeIDWithPoseVec__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  // constraints
  if (!mrpt_msgs__msg__GraphConstraint__Sequence__copy(
      &(input->constraints), &(output->constraints)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__msg__NetworkOfPoses *
mrpt_msgs__msg__NetworkOfPoses__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NetworkOfPoses * msg = (mrpt_msgs__msg__NetworkOfPoses *)allocator.allocate(sizeof(mrpt_msgs__msg__NetworkOfPoses), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__NetworkOfPoses));
  bool success = mrpt_msgs__msg__NetworkOfPoses__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__NetworkOfPoses__destroy(mrpt_msgs__msg__NetworkOfPoses * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__NetworkOfPoses__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__NetworkOfPoses__Sequence__init(mrpt_msgs__msg__NetworkOfPoses__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NetworkOfPoses * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__NetworkOfPoses)) {
      return false;
    }
    data = (mrpt_msgs__msg__NetworkOfPoses *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__NetworkOfPoses), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__NetworkOfPoses__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__NetworkOfPoses__fini(&data[i - 1]);
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
mrpt_msgs__msg__NetworkOfPoses__Sequence__fini(mrpt_msgs__msg__NetworkOfPoses__Sequence * array)
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
      mrpt_msgs__msg__NetworkOfPoses__fini(&array->data[i]);
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

mrpt_msgs__msg__NetworkOfPoses__Sequence *
mrpt_msgs__msg__NetworkOfPoses__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__NetworkOfPoses__Sequence * array = (mrpt_msgs__msg__NetworkOfPoses__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__NetworkOfPoses__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__NetworkOfPoses__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__NetworkOfPoses__Sequence__destroy(mrpt_msgs__msg__NetworkOfPoses__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__NetworkOfPoses__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__NetworkOfPoses__Sequence__are_equal(const mrpt_msgs__msg__NetworkOfPoses__Sequence * lhs, const mrpt_msgs__msg__NetworkOfPoses__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__NetworkOfPoses__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__NetworkOfPoses__Sequence__copy(
  const mrpt_msgs__msg__NetworkOfPoses__Sequence * input,
  mrpt_msgs__msg__NetworkOfPoses__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__NetworkOfPoses)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__NetworkOfPoses);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__NetworkOfPoses * data =
      (mrpt_msgs__msg__NetworkOfPoses *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__NetworkOfPoses__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__NetworkOfPoses__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__NetworkOfPoses__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
