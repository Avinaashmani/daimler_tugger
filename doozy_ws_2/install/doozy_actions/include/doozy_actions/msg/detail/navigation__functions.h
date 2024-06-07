// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__FUNCTIONS_H_
#define DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "doozy_actions/msg/rosidl_generator_c__visibility_control.h"

#include "doozy_actions/msg/detail/navigation__struct.h"

/// Initialize msg/Navigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__msg__Navigation
 * )) before or use
 * doozy_actions__msg__Navigation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__msg__Navigation__init(doozy_actions__msg__Navigation * msg);

/// Finalize msg/Navigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__msg__Navigation__fini(doozy_actions__msg__Navigation * msg);

/// Create msg/Navigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__msg__Navigation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__msg__Navigation *
doozy_actions__msg__Navigation__create();

/// Destroy msg/Navigation message.
/**
 * It calls
 * doozy_actions__msg__Navigation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__msg__Navigation__destroy(doozy_actions__msg__Navigation * msg);

/// Check for msg/Navigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__msg__Navigation__are_equal(const doozy_actions__msg__Navigation * lhs, const doozy_actions__msg__Navigation * rhs);

/// Copy a msg/Navigation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__msg__Navigation__copy(
  const doozy_actions__msg__Navigation * input,
  doozy_actions__msg__Navigation * output);

/// Initialize array of msg/Navigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__msg__Navigation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__msg__Navigation__Sequence__init(doozy_actions__msg__Navigation__Sequence * array, size_t size);

/// Finalize array of msg/Navigation messages.
/**
 * It calls
 * doozy_actions__msg__Navigation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__msg__Navigation__Sequence__fini(doozy_actions__msg__Navigation__Sequence * array);

/// Create array of msg/Navigation messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__msg__Navigation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__msg__Navigation__Sequence *
doozy_actions__msg__Navigation__Sequence__create(size_t size);

/// Destroy array of msg/Navigation messages.
/**
 * It calls
 * doozy_actions__msg__Navigation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__msg__Navigation__Sequence__destroy(doozy_actions__msg__Navigation__Sequence * array);

/// Check for msg/Navigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__msg__Navigation__Sequence__are_equal(const doozy_actions__msg__Navigation__Sequence * lhs, const doozy_actions__msg__Navigation__Sequence * rhs);

/// Copy an array of msg/Navigation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__msg__Navigation__Sequence__copy(
  const doozy_actions__msg__Navigation__Sequence * input,
  doozy_actions__msg__Navigation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__FUNCTIONS_H_
