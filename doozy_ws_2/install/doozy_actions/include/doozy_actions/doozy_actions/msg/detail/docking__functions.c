// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice
#include "doozy_actions/msg/detail/docking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_tf_status`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
doozy_actions__msg__Docking__init(doozy_actions__msg__Docking * msg)
{
  if (!msg) {
    return false;
  }
  // docked_to_target
  // safe_to_latch
  // distance_to_target
  // angle_to_target
  // target_tf_status
  if (!rosidl_runtime_c__String__init(&msg->target_tf_status)) {
    doozy_actions__msg__Docking__fini(msg);
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    doozy_actions__msg__Docking__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__msg__Docking__fini(doozy_actions__msg__Docking * msg)
{
  if (!msg) {
    return;
  }
  // docked_to_target
  // safe_to_latch
  // distance_to_target
  // angle_to_target
  // target_tf_status
  rosidl_runtime_c__String__fini(&msg->target_tf_status);
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
doozy_actions__msg__Docking__are_equal(const doozy_actions__msg__Docking * lhs, const doozy_actions__msg__Docking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // docked_to_target
  if (lhs->docked_to_target != rhs->docked_to_target) {
    return false;
  }
  // safe_to_latch
  if (lhs->safe_to_latch != rhs->safe_to_latch) {
    return false;
  }
  // distance_to_target
  if (lhs->distance_to_target != rhs->distance_to_target) {
    return false;
  }
  // angle_to_target
  if (lhs->angle_to_target != rhs->angle_to_target) {
    return false;
  }
  // target_tf_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_tf_status), &(rhs->target_tf_status)))
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
doozy_actions__msg__Docking__copy(
  const doozy_actions__msg__Docking * input,
  doozy_actions__msg__Docking * output)
{
  if (!input || !output) {
    return false;
  }
  // docked_to_target
  output->docked_to_target = input->docked_to_target;
  // safe_to_latch
  output->safe_to_latch = input->safe_to_latch;
  // distance_to_target
  output->distance_to_target = input->distance_to_target;
  // angle_to_target
  output->angle_to_target = input->angle_to_target;
  // target_tf_status
  if (!rosidl_runtime_c__String__copy(
      &(input->target_tf_status), &(output->target_tf_status)))
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

doozy_actions__msg__Docking *
doozy_actions__msg__Docking__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  doozy_actions__msg__Docking * msg = (doozy_actions__msg__Docking *)allocator.allocate(sizeof(doozy_actions__msg__Docking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__msg__Docking));
  bool success = doozy_actions__msg__Docking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
doozy_actions__msg__Docking__destroy(doozy_actions__msg__Docking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    doozy_actions__msg__Docking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
doozy_actions__msg__Docking__Sequence__init(doozy_actions__msg__Docking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  doozy_actions__msg__Docking * data = NULL;

  if (size) {
    data = (doozy_actions__msg__Docking *)allocator.zero_allocate(size, sizeof(doozy_actions__msg__Docking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__msg__Docking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__msg__Docking__fini(&data[i - 1]);
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
doozy_actions__msg__Docking__Sequence__fini(doozy_actions__msg__Docking__Sequence * array)
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
      doozy_actions__msg__Docking__fini(&array->data[i]);
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

doozy_actions__msg__Docking__Sequence *
doozy_actions__msg__Docking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  doozy_actions__msg__Docking__Sequence * array = (doozy_actions__msg__Docking__Sequence *)allocator.allocate(sizeof(doozy_actions__msg__Docking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__msg__Docking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
doozy_actions__msg__Docking__Sequence__destroy(doozy_actions__msg__Docking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    doozy_actions__msg__Docking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
doozy_actions__msg__Docking__Sequence__are_equal(const doozy_actions__msg__Docking__Sequence * lhs, const doozy_actions__msg__Docking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__msg__Docking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__msg__Docking__Sequence__copy(
  const doozy_actions__msg__Docking__Sequence * input,
  doozy_actions__msg__Docking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__msg__Docking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    doozy_actions__msg__Docking * data =
      (doozy_actions__msg__Docking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__msg__Docking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          doozy_actions__msg__Docking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!doozy_actions__msg__Docking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
