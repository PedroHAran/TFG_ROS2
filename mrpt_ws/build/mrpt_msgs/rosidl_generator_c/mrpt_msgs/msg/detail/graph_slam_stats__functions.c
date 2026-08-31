// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/GraphSlamStats.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/graph_slam_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `slam_evaluation_metric`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrpt_msgs__msg__GraphSlamStats__init(mrpt_msgs__msg__GraphSlamStats * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mrpt_msgs__msg__GraphSlamStats__fini(msg);
    return false;
  }
  // nodes_total
  // edges_total
  // edges_icp_2d
  // edges_icp_3d
  // edges_odom
  // loop_closures
  // slam_evaluation_metric
  if (!rosidl_runtime_c__double__Sequence__init(&msg->slam_evaluation_metric, 0)) {
    mrpt_msgs__msg__GraphSlamStats__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__msg__GraphSlamStats__fini(mrpt_msgs__msg__GraphSlamStats * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nodes_total
  // edges_total
  // edges_icp_2d
  // edges_icp_3d
  // edges_odom
  // loop_closures
  // slam_evaluation_metric
  rosidl_runtime_c__double__Sequence__fini(&msg->slam_evaluation_metric);
}

bool
mrpt_msgs__msg__GraphSlamStats__are_equal(const mrpt_msgs__msg__GraphSlamStats * lhs, const mrpt_msgs__msg__GraphSlamStats * rhs)
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
  // nodes_total
  if (lhs->nodes_total != rhs->nodes_total) {
    return false;
  }
  // edges_total
  if (lhs->edges_total != rhs->edges_total) {
    return false;
  }
  // edges_icp_2d
  if (lhs->edges_icp_2d != rhs->edges_icp_2d) {
    return false;
  }
  // edges_icp_3d
  if (lhs->edges_icp_3d != rhs->edges_icp_3d) {
    return false;
  }
  // edges_odom
  if (lhs->edges_odom != rhs->edges_odom) {
    return false;
  }
  // loop_closures
  if (lhs->loop_closures != rhs->loop_closures) {
    return false;
  }
  // slam_evaluation_metric
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->slam_evaluation_metric), &(rhs->slam_evaluation_metric)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__GraphSlamStats__copy(
  const mrpt_msgs__msg__GraphSlamStats * input,
  mrpt_msgs__msg__GraphSlamStats * output)
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
  // nodes_total
  output->nodes_total = input->nodes_total;
  // edges_total
  output->edges_total = input->edges_total;
  // edges_icp_2d
  output->edges_icp_2d = input->edges_icp_2d;
  // edges_icp_3d
  output->edges_icp_3d = input->edges_icp_3d;
  // edges_odom
  output->edges_odom = input->edges_odom;
  // loop_closures
  output->loop_closures = input->loop_closures;
  // slam_evaluation_metric
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->slam_evaluation_metric), &(output->slam_evaluation_metric)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__msg__GraphSlamStats *
mrpt_msgs__msg__GraphSlamStats__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__GraphSlamStats * msg = (mrpt_msgs__msg__GraphSlamStats *)allocator.allocate(sizeof(mrpt_msgs__msg__GraphSlamStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__GraphSlamStats));
  bool success = mrpt_msgs__msg__GraphSlamStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__GraphSlamStats__destroy(mrpt_msgs__msg__GraphSlamStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__GraphSlamStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__GraphSlamStats__Sequence__init(mrpt_msgs__msg__GraphSlamStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__GraphSlamStats * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__GraphSlamStats)) {
      return false;
    }
    data = (mrpt_msgs__msg__GraphSlamStats *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__GraphSlamStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__GraphSlamStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__GraphSlamStats__fini(&data[i - 1]);
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
mrpt_msgs__msg__GraphSlamStats__Sequence__fini(mrpt_msgs__msg__GraphSlamStats__Sequence * array)
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
      mrpt_msgs__msg__GraphSlamStats__fini(&array->data[i]);
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

mrpt_msgs__msg__GraphSlamStats__Sequence *
mrpt_msgs__msg__GraphSlamStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__GraphSlamStats__Sequence * array = (mrpt_msgs__msg__GraphSlamStats__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__GraphSlamStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__GraphSlamStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__GraphSlamStats__Sequence__destroy(mrpt_msgs__msg__GraphSlamStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__GraphSlamStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__GraphSlamStats__Sequence__are_equal(const mrpt_msgs__msg__GraphSlamStats__Sequence * lhs, const mrpt_msgs__msg__GraphSlamStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__GraphSlamStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__GraphSlamStats__Sequence__copy(
  const mrpt_msgs__msg__GraphSlamStats__Sequence * input,
  mrpt_msgs__msg__GraphSlamStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__GraphSlamStats)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__GraphSlamStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__GraphSlamStats * data =
      (mrpt_msgs__msg__GraphSlamStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__GraphSlamStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__GraphSlamStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__GraphSlamStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
