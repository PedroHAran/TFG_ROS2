// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mrpt_msgs:srv/GetCMGraph.idl
// generated code does not contain a copyright notice
#include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `node_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mrpt_msgs__srv__GetCMGraph_Request__init(mrpt_msgs__srv__GetCMGraph_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->node_ids, 0)) {
    mrpt_msgs__srv__GetCMGraph_Request__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__srv__GetCMGraph_Request__fini(mrpt_msgs__srv__GetCMGraph_Request * msg)
{
  if (!msg) {
    return;
  }
  // node_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->node_ids);
}

bool
mrpt_msgs__srv__GetCMGraph_Request__are_equal(const mrpt_msgs__srv__GetCMGraph_Request * lhs, const mrpt_msgs__srv__GetCMGraph_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->node_ids), &(rhs->node_ids)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__srv__GetCMGraph_Request__copy(
  const mrpt_msgs__srv__GetCMGraph_Request * input,
  mrpt_msgs__srv__GetCMGraph_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->node_ids), &(output->node_ids)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__srv__GetCMGraph_Request *
mrpt_msgs__srv__GetCMGraph_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Request * msg = (mrpt_msgs__srv__GetCMGraph_Request *)allocator.allocate(sizeof(mrpt_msgs__srv__GetCMGraph_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__srv__GetCMGraph_Request));
  bool success = mrpt_msgs__srv__GetCMGraph_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__srv__GetCMGraph_Request__destroy(mrpt_msgs__srv__GetCMGraph_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__srv__GetCMGraph_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__srv__GetCMGraph_Request__Sequence__init(mrpt_msgs__srv__GetCMGraph_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__srv__GetCMGraph_Request)) {
      return false;
    }
    data = (mrpt_msgs__srv__GetCMGraph_Request *)allocator.zero_allocate(size, sizeof(mrpt_msgs__srv__GetCMGraph_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__srv__GetCMGraph_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__srv__GetCMGraph_Request__fini(&data[i - 1]);
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
mrpt_msgs__srv__GetCMGraph_Request__Sequence__fini(mrpt_msgs__srv__GetCMGraph_Request__Sequence * array)
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
      mrpt_msgs__srv__GetCMGraph_Request__fini(&array->data[i]);
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

mrpt_msgs__srv__GetCMGraph_Request__Sequence *
mrpt_msgs__srv__GetCMGraph_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Request__Sequence * array = (mrpt_msgs__srv__GetCMGraph_Request__Sequence *)allocator.allocate(sizeof(mrpt_msgs__srv__GetCMGraph_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__srv__GetCMGraph_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__srv__GetCMGraph_Request__Sequence__destroy(mrpt_msgs__srv__GetCMGraph_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__srv__GetCMGraph_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__srv__GetCMGraph_Request__Sequence__are_equal(const mrpt_msgs__srv__GetCMGraph_Request__Sequence * lhs, const mrpt_msgs__srv__GetCMGraph_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__srv__GetCMGraph_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__srv__GetCMGraph_Request__Sequence__copy(
  const mrpt_msgs__srv__GetCMGraph_Request__Sequence * input,
  mrpt_msgs__srv__GetCMGraph_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__srv__GetCMGraph_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__srv__GetCMGraph_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__srv__GetCMGraph_Request * data =
      (mrpt_msgs__srv__GetCMGraph_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__srv__GetCMGraph_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__srv__GetCMGraph_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__srv__GetCMGraph_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `cm_graph`
#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"

bool
mrpt_msgs__srv__GetCMGraph_Response__init(mrpt_msgs__srv__GetCMGraph_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cm_graph
  if (!mrpt_msgs__msg__NetworkOfPoses__init(&msg->cm_graph)) {
    mrpt_msgs__srv__GetCMGraph_Response__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__srv__GetCMGraph_Response__fini(mrpt_msgs__srv__GetCMGraph_Response * msg)
{
  if (!msg) {
    return;
  }
  // cm_graph
  mrpt_msgs__msg__NetworkOfPoses__fini(&msg->cm_graph);
}

bool
mrpt_msgs__srv__GetCMGraph_Response__are_equal(const mrpt_msgs__srv__GetCMGraph_Response * lhs, const mrpt_msgs__srv__GetCMGraph_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cm_graph
  if (!mrpt_msgs__msg__NetworkOfPoses__are_equal(
      &(lhs->cm_graph), &(rhs->cm_graph)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__srv__GetCMGraph_Response__copy(
  const mrpt_msgs__srv__GetCMGraph_Response * input,
  mrpt_msgs__srv__GetCMGraph_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cm_graph
  if (!mrpt_msgs__msg__NetworkOfPoses__copy(
      &(input->cm_graph), &(output->cm_graph)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__srv__GetCMGraph_Response *
mrpt_msgs__srv__GetCMGraph_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Response * msg = (mrpt_msgs__srv__GetCMGraph_Response *)allocator.allocate(sizeof(mrpt_msgs__srv__GetCMGraph_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__srv__GetCMGraph_Response));
  bool success = mrpt_msgs__srv__GetCMGraph_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__srv__GetCMGraph_Response__destroy(mrpt_msgs__srv__GetCMGraph_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__srv__GetCMGraph_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__srv__GetCMGraph_Response__Sequence__init(mrpt_msgs__srv__GetCMGraph_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__srv__GetCMGraph_Response)) {
      return false;
    }
    data = (mrpt_msgs__srv__GetCMGraph_Response *)allocator.zero_allocate(size, sizeof(mrpt_msgs__srv__GetCMGraph_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__srv__GetCMGraph_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__srv__GetCMGraph_Response__fini(&data[i - 1]);
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
mrpt_msgs__srv__GetCMGraph_Response__Sequence__fini(mrpt_msgs__srv__GetCMGraph_Response__Sequence * array)
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
      mrpt_msgs__srv__GetCMGraph_Response__fini(&array->data[i]);
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

mrpt_msgs__srv__GetCMGraph_Response__Sequence *
mrpt_msgs__srv__GetCMGraph_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Response__Sequence * array = (mrpt_msgs__srv__GetCMGraph_Response__Sequence *)allocator.allocate(sizeof(mrpt_msgs__srv__GetCMGraph_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__srv__GetCMGraph_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__srv__GetCMGraph_Response__Sequence__destroy(mrpt_msgs__srv__GetCMGraph_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__srv__GetCMGraph_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__srv__GetCMGraph_Response__Sequence__are_equal(const mrpt_msgs__srv__GetCMGraph_Response__Sequence * lhs, const mrpt_msgs__srv__GetCMGraph_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__srv__GetCMGraph_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__srv__GetCMGraph_Response__Sequence__copy(
  const mrpt_msgs__srv__GetCMGraph_Response__Sequence * input,
  mrpt_msgs__srv__GetCMGraph_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__srv__GetCMGraph_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__srv__GetCMGraph_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__srv__GetCMGraph_Response * data =
      (mrpt_msgs__srv__GetCMGraph_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__srv__GetCMGraph_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__srv__GetCMGraph_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__srv__GetCMGraph_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mrpt_msgs/srv/detail/get_cm_graph__functions.h"

bool
mrpt_msgs__srv__GetCMGraph_Event__init(mrpt_msgs__srv__GetCMGraph_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mrpt_msgs__srv__GetCMGraph_Event__fini(msg);
    return false;
  }
  // request
  if (!mrpt_msgs__srv__GetCMGraph_Request__Sequence__init(&msg->request, 0)) {
    mrpt_msgs__srv__GetCMGraph_Event__fini(msg);
    return false;
  }
  // response
  if (!mrpt_msgs__srv__GetCMGraph_Response__Sequence__init(&msg->response, 0)) {
    mrpt_msgs__srv__GetCMGraph_Event__fini(msg);
    return false;
  }
  return true;
}

void
mrpt_msgs__srv__GetCMGraph_Event__fini(mrpt_msgs__srv__GetCMGraph_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mrpt_msgs__srv__GetCMGraph_Request__Sequence__fini(&msg->request);
  // response
  mrpt_msgs__srv__GetCMGraph_Response__Sequence__fini(&msg->response);
}

bool
mrpt_msgs__srv__GetCMGraph_Event__are_equal(const mrpt_msgs__srv__GetCMGraph_Event * lhs, const mrpt_msgs__srv__GetCMGraph_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mrpt_msgs__srv__GetCMGraph_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mrpt_msgs__srv__GetCMGraph_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mrpt_msgs__srv__GetCMGraph_Event__copy(
  const mrpt_msgs__srv__GetCMGraph_Event * input,
  mrpt_msgs__srv__GetCMGraph_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mrpt_msgs__srv__GetCMGraph_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mrpt_msgs__srv__GetCMGraph_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mrpt_msgs__srv__GetCMGraph_Event *
mrpt_msgs__srv__GetCMGraph_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Event * msg = (mrpt_msgs__srv__GetCMGraph_Event *)allocator.allocate(sizeof(mrpt_msgs__srv__GetCMGraph_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mrpt_msgs__srv__GetCMGraph_Event));
  bool success = mrpt_msgs__srv__GetCMGraph_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mrpt_msgs__srv__GetCMGraph_Event__destroy(mrpt_msgs__srv__GetCMGraph_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mrpt_msgs__srv__GetCMGraph_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mrpt_msgs__srv__GetCMGraph_Event__Sequence__init(mrpt_msgs__srv__GetCMGraph_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mrpt_msgs__srv__GetCMGraph_Event)) {
      return false;
    }
    data = (mrpt_msgs__srv__GetCMGraph_Event *)allocator.zero_allocate(size, sizeof(mrpt_msgs__srv__GetCMGraph_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mrpt_msgs__srv__GetCMGraph_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mrpt_msgs__srv__GetCMGraph_Event__fini(&data[i - 1]);
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
mrpt_msgs__srv__GetCMGraph_Event__Sequence__fini(mrpt_msgs__srv__GetCMGraph_Event__Sequence * array)
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
      mrpt_msgs__srv__GetCMGraph_Event__fini(&array->data[i]);
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

mrpt_msgs__srv__GetCMGraph_Event__Sequence *
mrpt_msgs__srv__GetCMGraph_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mrpt_msgs__srv__GetCMGraph_Event__Sequence * array = (mrpt_msgs__srv__GetCMGraph_Event__Sequence *)allocator.allocate(sizeof(mrpt_msgs__srv__GetCMGraph_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mrpt_msgs__srv__GetCMGraph_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mrpt_msgs__srv__GetCMGraph_Event__Sequence__destroy(mrpt_msgs__srv__GetCMGraph_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mrpt_msgs__srv__GetCMGraph_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mrpt_msgs__srv__GetCMGraph_Event__Sequence__are_equal(const mrpt_msgs__srv__GetCMGraph_Event__Sequence * lhs, const mrpt_msgs__srv__GetCMGraph_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mrpt_msgs__srv__GetCMGraph_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mrpt_msgs__srv__GetCMGraph_Event__Sequence__copy(
  const mrpt_msgs__srv__GetCMGraph_Event__Sequence * input,
  mrpt_msgs__srv__GetCMGraph_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mrpt_msgs__srv__GetCMGraph_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mrpt_msgs__srv__GetCMGraph_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mrpt_msgs__srv__GetCMGraph_Event * data =
      (mrpt_msgs__srv__GetCMGraph_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mrpt_msgs__srv__GetCMGraph_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mrpt_msgs__srv__GetCMGraph_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mrpt_msgs__srv__GetCMGraph_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
