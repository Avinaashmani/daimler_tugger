// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice
#include "doozy_actions/msg/detail/diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `safe_to_latch`
// Member `docking_status`
// Member `camera_health`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
doozy_actions__msg__Diagnostics__init(doozy_actions__msg__Diagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // has_reached_position
  // safe_to_latch
  if (!rosidl_runtime_c__String__init(&msg->safe_to_latch)) {
    doozy_actions__msg__Diagnostics__fini(msg);
    return false;
  }
  // is_latched
  // docking_status
  if (!rosidl_runtime_c__String__init(&msg->docking_status)) {
    doozy_actions__msg__Diagnostics__fini(msg);
    return false;
  }
  // sick_detection
  // camera_health
  if (!rosidl_runtime_c__String__init(&msg->camera_health)) {
    doozy_actions__msg__Diagnostics__fini(msg);
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    doozy_actions__msg__Diagnostics__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__msg__Diagnostics__fini(doozy_actions__msg__Diagnostics * msg)
{
  if (!msg) {
    return;
  }
  // has_reached_position
  // safe_to_latch
  rosidl_runtime_c__String__fini(&msg->safe_to_latch);
  // is_latched
  // docking_status
  rosidl_runtime_c__String__fini(&msg->docking_status);
  // sick_detection
  // camera_health
  rosidl_runtime_c__String__fini(&msg->camera_health);
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
doozy_actions__msg__Diagnostics__are_equal(const doozy_actions__msg__Diagnostics * lhs, const doozy_actions__msg__Diagnostics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_reached_position
  if (lhs->has_reached_position != rhs->has_reached_position) {
    return false;
  }
  // safe_to_latch
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->safe_to_latch), &(rhs->safe_to_latch)))
  {
    return false;
  }
  // is_latched
  if (lhs->is_latched != rhs->is_latched) {
    return false;
  }
  // docking_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->docking_status), &(rhs->docking_status)))
  {
    return false;
  }
  // sick_detection
  if (lhs->sick_detection != rhs->sick_detection) {
    return false;
  }
  // camera_health
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_health), &(rhs->camera_health)))
  {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__msg__Diagnostics__copy(
  const doozy_actions__msg__Diagnostics * input,
  doozy_actions__msg__Diagnostics * output)
{
  if (!input || !output) {
    return false;
  }
  // has_reached_position
  output->has_reached_position = input->has_reached_position;
  // safe_to_latch
  if (!rosidl_runtime_c__String__copy(
      &(input->safe_to_latch), &(output->safe_to_latch)))
  {
    return false;
  }
  // is_latched
  output->is_latched = input->is_latched;
  // docking_status
  if (!rosidl_runtime_c__String__copy(
      &(input->docking_status), &(output->docking_status)))
  {
    return false;
  }
  // sick_detection
  output->sick_detection = input->sick_detection;
  // camera_health
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_health), &(output->camera_health)))
  {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

doozy_actions__msg__Diagnostics *
doozy_actions__msg__Diagnostics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  doozy_actions__msg__Diagnostics * msg = (doozy_actions__msg__Diagnostics *)allocator.allocate(sizeof(doozy_actions__msg__Diagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__msg__Diagnostics));
  bool success = doozy_actions__msg__Diagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
doozy_actions__msg__Diagnostics__destroy(doozy_actions__msg__Diagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    doozy_actions__msg__Diagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
doozy_actions__msg__Diagnostics__Sequence__init(doozy_actions__msg__Diagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  doozy_actions__msg__Diagnostics * data = NULL;

  if (size) {
    data = (doozy_actions__msg__Diagnostics *)allocator.zero_allocate(size, sizeof(doozy_actions__msg__Diagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__msg__Diagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__msg__Diagnostics__fini(&data[i - 1]);
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
doozy_actions__msg__Diagnostics__Sequence__fini(doozy_actions__msg__Diagnostics__Sequence * array)
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
      doozy_actions__msg__Diagnostics__fini(&array->data[i]);
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

doozy_actions__msg__Diagnostics__Sequence *
doozy_actions__msg__Diagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  doozy_actions__msg__Diagnostics__Sequence * array = (doozy_actions__msg__Diagnostics__Sequence *)allocator.allocate(sizeof(doozy_actions__msg__Diagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__msg__Diagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
doozy_actions__msg__Diagnostics__Sequence__destroy(doozy_actions__msg__Diagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    doozy_actions__msg__Diagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
doozy_actions__msg__Diagnostics__Sequence__are_equal(const doozy_actions__msg__Diagnostics__Sequence * lhs, const doozy_actions__msg__Diagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__msg__Diagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__msg__Diagnostics__Sequence__copy(
  const doozy_actions__msg__Diagnostics__Sequence * input,
  doozy_actions__msg__Diagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__msg__Diagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    doozy_actions__msg__Diagnostics * data =
      (doozy_actions__msg__Diagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__msg__Diagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          doozy_actions__msg__Diagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!doozy_actions__msg__Diagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
