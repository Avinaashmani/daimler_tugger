// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice
#include "doozy_actions/msg/detail/navigation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `idx_of_dolly`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
doozy_actions__msg__Navigation__init(doozy_actions__msg__Navigation * msg)
{
  if (!msg) {
    return false;
  }
  // moved_to_spot
  // idx_of_dolly
  if (!rosidl_runtime_c__String__init(&msg->idx_of_dolly)) {
    doozy_actions__msg__Navigation__fini(msg);
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    doozy_actions__msg__Navigation__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__msg__Navigation__fini(doozy_actions__msg__Navigation * msg)
{
  if (!msg) {
    return;
  }
  // moved_to_spot
  // idx_of_dolly
  rosidl_runtime_c__String__fini(&msg->idx_of_dolly);
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
doozy_actions__msg__Navigation__are_equal(const doozy_actions__msg__Navigation * lhs, const doozy_actions__msg__Navigation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // moved_to_spot
  if (lhs->moved_to_spot != rhs->moved_to_spot) {
    return false;
  }
  // idx_of_dolly
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->idx_of_dolly), &(rhs->idx_of_dolly)))
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
doozy_actions__msg__Navigation__copy(
  const doozy_actions__msg__Navigation * input,
  doozy_actions__msg__Navigation * output)
{
  if (!input || !output) {
    return false;
  }
  // moved_to_spot
  output->moved_to_spot = input->moved_to_spot;
  // idx_of_dolly
  if (!rosidl_runtime_c__String__copy(
      &(input->idx_of_dolly), &(output->idx_of_dolly)))
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

doozy_actions__msg__Navigation *
doozy_actions__msg__Navigation__create()
{
  doozy_actions__msg__Navigation * msg = (doozy_actions__msg__Navigation *)malloc(sizeof(doozy_actions__msg__Navigation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__msg__Navigation));
  bool success = doozy_actions__msg__Navigation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__msg__Navigation__destroy(doozy_actions__msg__Navigation * msg)
{
  if (msg) {
    doozy_actions__msg__Navigation__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__msg__Navigation__Sequence__init(doozy_actions__msg__Navigation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__msg__Navigation * data = NULL;
  if (size) {
    data = (doozy_actions__msg__Navigation *)calloc(size, sizeof(doozy_actions__msg__Navigation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__msg__Navigation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__msg__Navigation__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
doozy_actions__msg__Navigation__Sequence__fini(doozy_actions__msg__Navigation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__msg__Navigation__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

doozy_actions__msg__Navigation__Sequence *
doozy_actions__msg__Navigation__Sequence__create(size_t size)
{
  doozy_actions__msg__Navigation__Sequence * array = (doozy_actions__msg__Navigation__Sequence *)malloc(sizeof(doozy_actions__msg__Navigation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__msg__Navigation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__msg__Navigation__Sequence__destroy(doozy_actions__msg__Navigation__Sequence * array)
{
  if (array) {
    doozy_actions__msg__Navigation__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__msg__Navigation__Sequence__are_equal(const doozy_actions__msg__Navigation__Sequence * lhs, const doozy_actions__msg__Navigation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__msg__Navigation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__msg__Navigation__Sequence__copy(
  const doozy_actions__msg__Navigation__Sequence * input,
  doozy_actions__msg__Navigation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__msg__Navigation);
    doozy_actions__msg__Navigation * data =
      (doozy_actions__msg__Navigation *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__msg__Navigation__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__msg__Navigation__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!doozy_actions__msg__Navigation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
