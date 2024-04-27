// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__STRUCT_H_
#define DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'safe_to_latch'
// Member 'docking_status'
// Member 'camera_health'
// Member 'error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Diagnostics in the package doozy_actions.
typedef struct doozy_actions__msg__Diagnostics
{
  bool has_reached_position;
  rosidl_runtime_c__String safe_to_latch;
  bool is_latched;
  rosidl_runtime_c__String docking_status;
  bool sick_detection;
  rosidl_runtime_c__String camera_health;
  rosidl_runtime_c__String error;
} doozy_actions__msg__Diagnostics;

// Struct for a sequence of doozy_actions__msg__Diagnostics.
typedef struct doozy_actions__msg__Diagnostics__Sequence
{
  doozy_actions__msg__Diagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__msg__Diagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__STRUCT_H_
