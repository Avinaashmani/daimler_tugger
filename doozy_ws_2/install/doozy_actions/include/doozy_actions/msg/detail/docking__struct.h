// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DOCKING__STRUCT_H_
#define DOOZY_ACTIONS__MSG__DETAIL__DOCKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_tf_status'
// Member 'error'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Docking in the package doozy_actions.
typedef struct doozy_actions__msg__Docking
{
  bool docked_to_target;
  bool safe_to_latch;
  double distance_to_target;
  double angle_to_target;
  rosidl_runtime_c__String target_tf_status;
  rosidl_runtime_c__String error;
} doozy_actions__msg__Docking;

// Struct for a sequence of doozy_actions__msg__Docking.
typedef struct doozy_actions__msg__Docking__Sequence
{
  doozy_actions__msg__Docking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__msg__Docking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DOCKING__STRUCT_H_
