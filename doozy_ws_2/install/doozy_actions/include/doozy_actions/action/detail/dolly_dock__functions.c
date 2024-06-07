// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice
#include "doozy_actions/action/detail/dolly_dock__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `idx_no`
#include "rosidl_runtime_c/string_functions.h"

bool
doozy_actions__action__DollyDock_Goal__init(doozy_actions__action__DollyDock_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // reached_point
  // idx_no
  if (!rosidl_runtime_c__String__init(&msg->idx_no)) {
    doozy_actions__action__DollyDock_Goal__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_Goal__fini(doozy_actions__action__DollyDock_Goal * msg)
{
  if (!msg) {
    return;
  }
  // reached_point
  // idx_no
  rosidl_runtime_c__String__fini(&msg->idx_no);
}

bool
doozy_actions__action__DollyDock_Goal__are_equal(const doozy_actions__action__DollyDock_Goal * lhs, const doozy_actions__action__DollyDock_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reached_point
  if (lhs->reached_point != rhs->reached_point) {
    return false;
  }
  // idx_no
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->idx_no), &(rhs->idx_no)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_Goal__copy(
  const doozy_actions__action__DollyDock_Goal * input,
  doozy_actions__action__DollyDock_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // reached_point
  output->reached_point = input->reached_point;
  // idx_no
  if (!rosidl_runtime_c__String__copy(
      &(input->idx_no), &(output->idx_no)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_Goal *
doozy_actions__action__DollyDock_Goal__create()
{
  doozy_actions__action__DollyDock_Goal * msg = (doozy_actions__action__DollyDock_Goal *)malloc(sizeof(doozy_actions__action__DollyDock_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_Goal));
  bool success = doozy_actions__action__DollyDock_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_Goal__destroy(doozy_actions__action__DollyDock_Goal * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_Goal__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_Goal__Sequence__init(doozy_actions__action__DollyDock_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_Goal * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_Goal *)calloc(size, sizeof(doozy_actions__action__DollyDock_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_Goal__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_Goal__Sequence__fini(doozy_actions__action__DollyDock_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_Goal__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_Goal__Sequence *
doozy_actions__action__DollyDock_Goal__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_Goal__Sequence * array = (doozy_actions__action__DollyDock_Goal__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_Goal__Sequence__destroy(doozy_actions__action__DollyDock_Goal__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_Goal__Sequence__are_equal(const doozy_actions__action__DollyDock_Goal__Sequence * lhs, const doozy_actions__action__DollyDock_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_Goal__Sequence__copy(
  const doozy_actions__action__DollyDock_Goal__Sequence * input,
  doozy_actions__action__DollyDock_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_Goal);
    doozy_actions__action__DollyDock_Goal * data =
      (doozy_actions__action__DollyDock_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_Goal__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
doozy_actions__action__DollyDock_Result__init(doozy_actions__action__DollyDock_Result * msg)
{
  if (!msg) {
    return false;
  }
  // docked_to_dolly
  return true;
}

void
doozy_actions__action__DollyDock_Result__fini(doozy_actions__action__DollyDock_Result * msg)
{
  if (!msg) {
    return;
  }
  // docked_to_dolly
}

bool
doozy_actions__action__DollyDock_Result__are_equal(const doozy_actions__action__DollyDock_Result * lhs, const doozy_actions__action__DollyDock_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // docked_to_dolly
  if (lhs->docked_to_dolly != rhs->docked_to_dolly) {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_Result__copy(
  const doozy_actions__action__DollyDock_Result * input,
  doozy_actions__action__DollyDock_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // docked_to_dolly
  output->docked_to_dolly = input->docked_to_dolly;
  return true;
}

doozy_actions__action__DollyDock_Result *
doozy_actions__action__DollyDock_Result__create()
{
  doozy_actions__action__DollyDock_Result * msg = (doozy_actions__action__DollyDock_Result *)malloc(sizeof(doozy_actions__action__DollyDock_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_Result));
  bool success = doozy_actions__action__DollyDock_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_Result__destroy(doozy_actions__action__DollyDock_Result * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_Result__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_Result__Sequence__init(doozy_actions__action__DollyDock_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_Result * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_Result *)calloc(size, sizeof(doozy_actions__action__DollyDock_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_Result__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_Result__Sequence__fini(doozy_actions__action__DollyDock_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_Result__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_Result__Sequence *
doozy_actions__action__DollyDock_Result__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_Result__Sequence * array = (doozy_actions__action__DollyDock_Result__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_Result__Sequence__destroy(doozy_actions__action__DollyDock_Result__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_Result__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_Result__Sequence__are_equal(const doozy_actions__action__DollyDock_Result__Sequence * lhs, const doozy_actions__action__DollyDock_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_Result__Sequence__copy(
  const doozy_actions__action__DollyDock_Result__Sequence * input,
  doozy_actions__action__DollyDock_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_Result);
    doozy_actions__action__DollyDock_Result * data =
      (doozy_actions__action__DollyDock_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_Result__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `distance_to_dolly`
// Member `angle_to_dolly`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
doozy_actions__action__DollyDock_Feedback__init(doozy_actions__action__DollyDock_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_dolly
  if (!rosidl_runtime_c__String__init(&msg->distance_to_dolly)) {
    doozy_actions__action__DollyDock_Feedback__fini(msg);
    return false;
  }
  // angle_to_dolly
  if (!rosidl_runtime_c__String__init(&msg->angle_to_dolly)) {
    doozy_actions__action__DollyDock_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_Feedback__fini(doozy_actions__action__DollyDock_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_dolly
  rosidl_runtime_c__String__fini(&msg->distance_to_dolly);
  // angle_to_dolly
  rosidl_runtime_c__String__fini(&msg->angle_to_dolly);
}

bool
doozy_actions__action__DollyDock_Feedback__are_equal(const doozy_actions__action__DollyDock_Feedback * lhs, const doozy_actions__action__DollyDock_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_dolly
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->distance_to_dolly), &(rhs->distance_to_dolly)))
  {
    return false;
  }
  // angle_to_dolly
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->angle_to_dolly), &(rhs->angle_to_dolly)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_Feedback__copy(
  const doozy_actions__action__DollyDock_Feedback * input,
  doozy_actions__action__DollyDock_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_dolly
  if (!rosidl_runtime_c__String__copy(
      &(input->distance_to_dolly), &(output->distance_to_dolly)))
  {
    return false;
  }
  // angle_to_dolly
  if (!rosidl_runtime_c__String__copy(
      &(input->angle_to_dolly), &(output->angle_to_dolly)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_Feedback *
doozy_actions__action__DollyDock_Feedback__create()
{
  doozy_actions__action__DollyDock_Feedback * msg = (doozy_actions__action__DollyDock_Feedback *)malloc(sizeof(doozy_actions__action__DollyDock_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_Feedback));
  bool success = doozy_actions__action__DollyDock_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_Feedback__destroy(doozy_actions__action__DollyDock_Feedback * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_Feedback__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_Feedback__Sequence__init(doozy_actions__action__DollyDock_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_Feedback * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_Feedback *)calloc(size, sizeof(doozy_actions__action__DollyDock_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_Feedback__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_Feedback__Sequence__fini(doozy_actions__action__DollyDock_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_Feedback__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_Feedback__Sequence *
doozy_actions__action__DollyDock_Feedback__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_Feedback__Sequence * array = (doozy_actions__action__DollyDock_Feedback__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_Feedback__Sequence__destroy(doozy_actions__action__DollyDock_Feedback__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_Feedback__Sequence__are_equal(const doozy_actions__action__DollyDock_Feedback__Sequence * lhs, const doozy_actions__action__DollyDock_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_Feedback__Sequence__copy(
  const doozy_actions__action__DollyDock_Feedback__Sequence * input,
  doozy_actions__action__DollyDock_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_Feedback);
    doozy_actions__action__DollyDock_Feedback * data =
      (doozy_actions__action__DollyDock_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_Feedback__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"

bool
doozy_actions__action__DollyDock_SendGoal_Request__init(doozy_actions__action__DollyDock_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    doozy_actions__action__DollyDock_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!doozy_actions__action__DollyDock_Goal__init(&msg->goal)) {
    doozy_actions__action__DollyDock_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_SendGoal_Request__fini(doozy_actions__action__DollyDock_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  doozy_actions__action__DollyDock_Goal__fini(&msg->goal);
}

bool
doozy_actions__action__DollyDock_SendGoal_Request__are_equal(const doozy_actions__action__DollyDock_SendGoal_Request * lhs, const doozy_actions__action__DollyDock_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!doozy_actions__action__DollyDock_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_SendGoal_Request__copy(
  const doozy_actions__action__DollyDock_SendGoal_Request * input,
  doozy_actions__action__DollyDock_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!doozy_actions__action__DollyDock_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_SendGoal_Request *
doozy_actions__action__DollyDock_SendGoal_Request__create()
{
  doozy_actions__action__DollyDock_SendGoal_Request * msg = (doozy_actions__action__DollyDock_SendGoal_Request *)malloc(sizeof(doozy_actions__action__DollyDock_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_SendGoal_Request));
  bool success = doozy_actions__action__DollyDock_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_SendGoal_Request__destroy(doozy_actions__action__DollyDock_SendGoal_Request * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__init(doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_SendGoal_Request * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_SendGoal_Request *)calloc(size, sizeof(doozy_actions__action__DollyDock_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_SendGoal_Request__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__fini(doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_SendGoal_Request__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_SendGoal_Request__Sequence *
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array = (doozy_actions__action__DollyDock_SendGoal_Request__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__destroy(doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__are_equal(const doozy_actions__action__DollyDock_SendGoal_Request__Sequence * lhs, const doozy_actions__action__DollyDock_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__copy(
  const doozy_actions__action__DollyDock_SendGoal_Request__Sequence * input,
  doozy_actions__action__DollyDock_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_SendGoal_Request);
    doozy_actions__action__DollyDock_SendGoal_Request * data =
      (doozy_actions__action__DollyDock_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_SendGoal_Request__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
doozy_actions__action__DollyDock_SendGoal_Response__init(doozy_actions__action__DollyDock_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    doozy_actions__action__DollyDock_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_SendGoal_Response__fini(doozy_actions__action__DollyDock_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
doozy_actions__action__DollyDock_SendGoal_Response__are_equal(const doozy_actions__action__DollyDock_SendGoal_Response * lhs, const doozy_actions__action__DollyDock_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_SendGoal_Response__copy(
  const doozy_actions__action__DollyDock_SendGoal_Response * input,
  doozy_actions__action__DollyDock_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_SendGoal_Response *
doozy_actions__action__DollyDock_SendGoal_Response__create()
{
  doozy_actions__action__DollyDock_SendGoal_Response * msg = (doozy_actions__action__DollyDock_SendGoal_Response *)malloc(sizeof(doozy_actions__action__DollyDock_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_SendGoal_Response));
  bool success = doozy_actions__action__DollyDock_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_SendGoal_Response__destroy(doozy_actions__action__DollyDock_SendGoal_Response * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__init(doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_SendGoal_Response * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_SendGoal_Response *)calloc(size, sizeof(doozy_actions__action__DollyDock_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_SendGoal_Response__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__fini(doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_SendGoal_Response__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_SendGoal_Response__Sequence *
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array = (doozy_actions__action__DollyDock_SendGoal_Response__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__destroy(doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__are_equal(const doozy_actions__action__DollyDock_SendGoal_Response__Sequence * lhs, const doozy_actions__action__DollyDock_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__copy(
  const doozy_actions__action__DollyDock_SendGoal_Response__Sequence * input,
  doozy_actions__action__DollyDock_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_SendGoal_Response);
    doozy_actions__action__DollyDock_SendGoal_Response * data =
      (doozy_actions__action__DollyDock_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_SendGoal_Response__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
doozy_actions__action__DollyDock_GetResult_Request__init(doozy_actions__action__DollyDock_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    doozy_actions__action__DollyDock_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_GetResult_Request__fini(doozy_actions__action__DollyDock_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
doozy_actions__action__DollyDock_GetResult_Request__are_equal(const doozy_actions__action__DollyDock_GetResult_Request * lhs, const doozy_actions__action__DollyDock_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_GetResult_Request__copy(
  const doozy_actions__action__DollyDock_GetResult_Request * input,
  doozy_actions__action__DollyDock_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_GetResult_Request *
doozy_actions__action__DollyDock_GetResult_Request__create()
{
  doozy_actions__action__DollyDock_GetResult_Request * msg = (doozy_actions__action__DollyDock_GetResult_Request *)malloc(sizeof(doozy_actions__action__DollyDock_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_GetResult_Request));
  bool success = doozy_actions__action__DollyDock_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_GetResult_Request__destroy(doozy_actions__action__DollyDock_GetResult_Request * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_GetResult_Request__Sequence__init(doozy_actions__action__DollyDock_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_GetResult_Request * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_GetResult_Request *)calloc(size, sizeof(doozy_actions__action__DollyDock_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_GetResult_Request__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_GetResult_Request__Sequence__fini(doozy_actions__action__DollyDock_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_GetResult_Request__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_GetResult_Request__Sequence *
doozy_actions__action__DollyDock_GetResult_Request__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_GetResult_Request__Sequence * array = (doozy_actions__action__DollyDock_GetResult_Request__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_GetResult_Request__Sequence__destroy(doozy_actions__action__DollyDock_GetResult_Request__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_GetResult_Request__Sequence__are_equal(const doozy_actions__action__DollyDock_GetResult_Request__Sequence * lhs, const doozy_actions__action__DollyDock_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_GetResult_Request__Sequence__copy(
  const doozy_actions__action__DollyDock_GetResult_Request__Sequence * input,
  doozy_actions__action__DollyDock_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_GetResult_Request);
    doozy_actions__action__DollyDock_GetResult_Request * data =
      (doozy_actions__action__DollyDock_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_GetResult_Request__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"

bool
doozy_actions__action__DollyDock_GetResult_Response__init(doozy_actions__action__DollyDock_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!doozy_actions__action__DollyDock_Result__init(&msg->result)) {
    doozy_actions__action__DollyDock_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_GetResult_Response__fini(doozy_actions__action__DollyDock_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  doozy_actions__action__DollyDock_Result__fini(&msg->result);
}

bool
doozy_actions__action__DollyDock_GetResult_Response__are_equal(const doozy_actions__action__DollyDock_GetResult_Response * lhs, const doozy_actions__action__DollyDock_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!doozy_actions__action__DollyDock_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_GetResult_Response__copy(
  const doozy_actions__action__DollyDock_GetResult_Response * input,
  doozy_actions__action__DollyDock_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!doozy_actions__action__DollyDock_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_GetResult_Response *
doozy_actions__action__DollyDock_GetResult_Response__create()
{
  doozy_actions__action__DollyDock_GetResult_Response * msg = (doozy_actions__action__DollyDock_GetResult_Response *)malloc(sizeof(doozy_actions__action__DollyDock_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_GetResult_Response));
  bool success = doozy_actions__action__DollyDock_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_GetResult_Response__destroy(doozy_actions__action__DollyDock_GetResult_Response * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_GetResult_Response__Sequence__init(doozy_actions__action__DollyDock_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_GetResult_Response * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_GetResult_Response *)calloc(size, sizeof(doozy_actions__action__DollyDock_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_GetResult_Response__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_GetResult_Response__Sequence__fini(doozy_actions__action__DollyDock_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_GetResult_Response__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_GetResult_Response__Sequence *
doozy_actions__action__DollyDock_GetResult_Response__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_GetResult_Response__Sequence * array = (doozy_actions__action__DollyDock_GetResult_Response__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_GetResult_Response__Sequence__destroy(doozy_actions__action__DollyDock_GetResult_Response__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_GetResult_Response__Sequence__are_equal(const doozy_actions__action__DollyDock_GetResult_Response__Sequence * lhs, const doozy_actions__action__DollyDock_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_GetResult_Response__Sequence__copy(
  const doozy_actions__action__DollyDock_GetResult_Response__Sequence * input,
  doozy_actions__action__DollyDock_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_GetResult_Response);
    doozy_actions__action__DollyDock_GetResult_Response * data =
      (doozy_actions__action__DollyDock_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_GetResult_Response__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"

bool
doozy_actions__action__DollyDock_FeedbackMessage__init(doozy_actions__action__DollyDock_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    doozy_actions__action__DollyDock_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!doozy_actions__action__DollyDock_Feedback__init(&msg->feedback)) {
    doozy_actions__action__DollyDock_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
doozy_actions__action__DollyDock_FeedbackMessage__fini(doozy_actions__action__DollyDock_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  doozy_actions__action__DollyDock_Feedback__fini(&msg->feedback);
}

bool
doozy_actions__action__DollyDock_FeedbackMessage__are_equal(const doozy_actions__action__DollyDock_FeedbackMessage * lhs, const doozy_actions__action__DollyDock_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!doozy_actions__action__DollyDock_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
doozy_actions__action__DollyDock_FeedbackMessage__copy(
  const doozy_actions__action__DollyDock_FeedbackMessage * input,
  doozy_actions__action__DollyDock_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!doozy_actions__action__DollyDock_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

doozy_actions__action__DollyDock_FeedbackMessage *
doozy_actions__action__DollyDock_FeedbackMessage__create()
{
  doozy_actions__action__DollyDock_FeedbackMessage * msg = (doozy_actions__action__DollyDock_FeedbackMessage *)malloc(sizeof(doozy_actions__action__DollyDock_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(doozy_actions__action__DollyDock_FeedbackMessage));
  bool success = doozy_actions__action__DollyDock_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
doozy_actions__action__DollyDock_FeedbackMessage__destroy(doozy_actions__action__DollyDock_FeedbackMessage * msg)
{
  if (msg) {
    doozy_actions__action__DollyDock_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__init(doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  doozy_actions__action__DollyDock_FeedbackMessage * data = NULL;
  if (size) {
    data = (doozy_actions__action__DollyDock_FeedbackMessage *)calloc(size, sizeof(doozy_actions__action__DollyDock_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = doozy_actions__action__DollyDock_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        doozy_actions__action__DollyDock_FeedbackMessage__fini(&data[i - 1]);
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
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__fini(doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      doozy_actions__action__DollyDock_FeedbackMessage__fini(&array->data[i]);
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

doozy_actions__action__DollyDock_FeedbackMessage__Sequence *
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__create(size_t size)
{
  doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array = (doozy_actions__action__DollyDock_FeedbackMessage__Sequence *)malloc(sizeof(doozy_actions__action__DollyDock_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = doozy_actions__action__DollyDock_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__destroy(doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array)
{
  if (array) {
    doozy_actions__action__DollyDock_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__are_equal(const doozy_actions__action__DollyDock_FeedbackMessage__Sequence * lhs, const doozy_actions__action__DollyDock_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!doozy_actions__action__DollyDock_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__copy(
  const doozy_actions__action__DollyDock_FeedbackMessage__Sequence * input,
  doozy_actions__action__DollyDock_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(doozy_actions__action__DollyDock_FeedbackMessage);
    doozy_actions__action__DollyDock_FeedbackMessage * data =
      (doozy_actions__action__DollyDock_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!doozy_actions__action__DollyDock_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          doozy_actions__action__DollyDock_FeedbackMessage__fini(&data[i]);
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
    if (!doozy_actions__action__DollyDock_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
