// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__STRUCT_H_
#define DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'idx_of_dolly'
// Member 'error'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Navigation in the package doozy_actions.
typedef struct doozy_actions__msg__Navigation
{
  bool moved_to_spot;
  rosidl_runtime_c__String idx_of_dolly;
  rosidl_runtime_c__String error;
} doozy_actions__msg__Navigation;

// Struct for a sequence of doozy_actions__msg__Navigation.
typedef struct doozy_actions__msg__Navigation__Sequence
{
  doozy_actions__msg__Navigation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__msg__Navigation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__STRUCT_H_
