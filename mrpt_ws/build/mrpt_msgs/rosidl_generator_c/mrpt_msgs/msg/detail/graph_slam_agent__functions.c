// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:msg/GraphSlamAgent.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/msg/detail/graph_slam_agent__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `hostname`
// Member `ip_addr`
// Member `topic_namespace`
#include "std_msgs/msg/detail/string__functions.h"
// Member `is_online`
#include "std_msgs/msg/detail/bool__functions.h"
// Member `last_seen_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mrpt_msgs__msg__GraphSlamAgent__init(mrpt_msgs__msg__GraphSlamAgent * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!std_msgs__msg__String__init(&msg->name)) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
    return false;
  }
  // hostname
  if (!std_msgs__msg__String__init(&msg->hostname)) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
    return false;
  }
  // ip_addr
  if (!std_msgs__msg__String__init(&msg->ip_addr)) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
    return false;
  }
  // port
  // is_online
  if (!std_msgs__msg__Bool__init(&msg->is_online)) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
    return false;
  }
  // last_seen_time
  if (!builtin_interfaces__msg__Time__init(&msg->last_seen_time)) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
    return false;
  }
  // topic_namespace
  if (!std_msgs__msg__String__init(&msg->topic_namespace)) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
    return false;
  }
  // agent_id
  return true;
}

void
mrpt_msgs__msg__GraphSlamAgent__fini(mrpt_msgs__msg__GraphSlamAgent * msg)
{
  if (!msg) {
    return;
  }
  // name
  std_msgs__msg__String__fini(&msg->name);
  // hostname
  std_msgs__msg__String__fini(&msg->hostname);
  // ip_addr
  std_msgs__msg__String__fini(&msg->ip_addr);
  // port
  // is_online
  std_msgs__msg__Bool__fini(&msg->is_online);
  // last_seen_time
  builtin_interfaces__msg__Time__fini(&msg->last_seen_time);
  // topic_namespace
  std_msgs__msg__String__fini(&msg->topic_namespace);
  // agent_id
}

bool
mrpt_msgs__msg__GraphSlamAgent__are_equal(const mrpt_msgs__msg__GraphSlamAgent * lhs, const mrpt_msgs__msg__GraphSlamAgent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!std_msgs__msg__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // hostname
  if (!std_msgs__msg__String__are_equal(
      &(lhs->hostname), &(rhs->hostname)))
  {
    return false;
  }
  // ip_addr
  if (!std_msgs__msg__String__are_equal(
      &(lhs->ip_addr), &(rhs->ip_addr)))
  {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  // is_online
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->is_online), &(rhs->is_online)))
  {
    return false;
  }
  // last_seen_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_seen_time), &(rhs->last_seen_time)))
  {
    return false;
  }
  // topic_namespace
  if (!std_msgs__msg__String__are_equal(
      &(lhs->topic_namespace), &(rhs->topic_namespace)))
  {
    return false;
  }
  // agent_id
  if (lhs->agent_id != rhs->agent_id) {
    return false;
  }
  return true;
}

bool
mrpt_msgs__msg__GraphSlamAgent__copy(
  const mrpt_msgs__msg__GraphSlamAgent * input,
  mrpt_msgs__msg__GraphSlamAgent * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!std_msgs__msg__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // hostname
  if (!std_msgs__msg__String__copy(
      &(input->hostname), &(output->hostname)))
  {
    return false;
  }
  // ip_addr
  if (!std_msgs__msg__String__copy(
      &(input->ip_addr), &(output->ip_addr)))
  {
    return false;
  }
  // port
  output->port = input->port;
  // is_online
  if (!std_msgs__msg__Bool__copy(
      &(input->is_online), &(output->is_online)))
  {
    return false;
  }
  // last_seen_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_seen_time), &(output->last_seen_time)))
  {
    return false;
  }
  // topic_namespace
  if (!std_msgs__msg__String__copy(
      &(input->topic_namespace), &(output->topic_namespace)))
  {
    return false;
  }
  // agent_id
  output->agent_id = input->agent_id;
  return true;
}

mrpt_msgs__msg__GraphSlamAgent *
mrpt_msgs__msg__GraphSlamAgent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__GraphSlamAgent * msg = (mrpt_msgs__msg__GraphSlamAgent *)allocator.allocate(sizeof(mrpt_msgs__msg__GraphSlamAgent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__msg__GraphSlamAgent));
  bool success = mrpt_msgs__msg__GraphSlamAgent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__msg__GraphSlamAgent__destroy(mrpt_msgs__msg__GraphSlamAgent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__msg__GraphSlamAgent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__msg__GraphSlamAgent__Sequence__init(mrpt_msgs__msg__GraphSlamAgent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__GraphSlamAgent * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__msg__GraphSlamAgent)) {
      return false;
    }
    data = (mrpt_msgs__msg__GraphSlamAgent *)allocator.zero_allocate(size, sizeof(mrpt_msgs__msg__GraphSlamAgent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__msg__GraphSlamAgent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__msg__GraphSlamAgent__fini(&data[i - 1]);
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
mrpt_msgs__msg__GraphSlamAgent__Sequence__fini(mrpt_msgs__msg__GraphSlamAgent__Sequence * array)
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
      mrpt_msgs__msg__GraphSlamAgent__fini(&array->data[i]);
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

mrpt_msgs__msg__GraphSlamAgent__Sequence *
mrpt_msgs__msg__GraphSlamAgent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__msg__GraphSlamAgent__Sequence * array = (mrpt_msgs__msg__GraphSlamAgent__Sequence *)allocator.allocate(sizeof(mrpt_msgs__msg__GraphSlamAgent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__msg__GraphSlamAgent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__msg__GraphSlamAgent__Sequence__destroy(mrpt_msgs__msg__GraphSlamAgent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__msg__GraphSlamAgent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__msg__GraphSlamAgent__Sequence__are_equal(const mrpt_msgs__msg__GraphSlamAgent__Sequence * lhs, const mrpt_msgs__msg__GraphSlamAgent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__msg__GraphSlamAgent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__msg__GraphSlamAgent__Sequence__copy(
  const mrpt_msgs__msg__GraphSlamAgent__Sequence * input,
  mrpt_msgs__msg__GraphSlamAgent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__msg__GraphSlamAgent)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__msg__GraphSlamAgent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__msg__GraphSlamAgent * data =
      (mrpt_msgs__msg__GraphSlamAgent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__msg__GraphSlamAgent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__msg__GraphSlamAgent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__msg__GraphSlamAgent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
