// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__FUNCTIONS_H_
#define DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "doozy_actions/msg/rosidl_generator_c__visibility_control.h"

#include "doozy_actions/action/detail/dolly_dock__struct.h"

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_Goal
 * )) before or use
 * doozy_actions__action__DollyDock_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Goal__init(doozy_actions__action__DollyDock_Goal * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Goal__fini(doozy_actions__action__DollyDock_Goal * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_Goal *
doozy_actions__action__DollyDock_Goal__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Goal__destroy(doozy_actions__action__DollyDock_Goal * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Goal__are_equal(const doozy_actions__action__DollyDock_Goal * lhs, const doozy_actions__action__DollyDock_Goal * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_Goal__copy(
  const doozy_actions__action__DollyDock_Goal * input,
  doozy_actions__action__DollyDock_Goal * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Goal__Sequence__init(doozy_actions__action__DollyDock_Goal__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Goal__Sequence__fini(doozy_actions__action__DollyDock_Goal__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_Goal__Sequence *
doozy_actions__action__DollyDock_Goal__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Goal__Sequence__destroy(doozy_actions__action__DollyDock_Goal__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Goal__Sequence__are_equal(const doozy_actions__action__DollyDock_Goal__Sequence * lhs, const doozy_actions__action__DollyDock_Goal__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_Goal__Sequence__copy(
  const doozy_actions__action__DollyDock_Goal__Sequence * input,
  doozy_actions__action__DollyDock_Goal__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_Result
 * )) before or use
 * doozy_actions__action__DollyDock_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Result__init(doozy_actions__action__DollyDock_Result * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Result__fini(doozy_actions__action__DollyDock_Result * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_Result *
doozy_actions__action__DollyDock_Result__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Result__destroy(doozy_actions__action__DollyDock_Result * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Result__are_equal(const doozy_actions__action__DollyDock_Result * lhs, const doozy_actions__action__DollyDock_Result * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_Result__copy(
  const doozy_actions__action__DollyDock_Result * input,
  doozy_actions__action__DollyDock_Result * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Result__Sequence__init(doozy_actions__action__DollyDock_Result__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Result__Sequence__fini(doozy_actions__action__DollyDock_Result__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_Result__Sequence *
doozy_actions__action__DollyDock_Result__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Result__Sequence__destroy(doozy_actions__action__DollyDock_Result__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Result__Sequence__are_equal(const doozy_actions__action__DollyDock_Result__Sequence * lhs, const doozy_actions__action__DollyDock_Result__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_Result__Sequence__copy(
  const doozy_actions__action__DollyDock_Result__Sequence * input,
  doozy_actions__action__DollyDock_Result__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_Feedback
 * )) before or use
 * doozy_actions__action__DollyDock_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Feedback__init(doozy_actions__action__DollyDock_Feedback * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Feedback__fini(doozy_actions__action__DollyDock_Feedback * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_Feedback *
doozy_actions__action__DollyDock_Feedback__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Feedback__destroy(doozy_actions__action__DollyDock_Feedback * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Feedback__are_equal(const doozy_actions__action__DollyDock_Feedback * lhs, const doozy_actions__action__DollyDock_Feedback * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_Feedback__copy(
  const doozy_actions__action__DollyDock_Feedback * input,
  doozy_actions__action__DollyDock_Feedback * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Feedback__Sequence__init(doozy_actions__action__DollyDock_Feedback__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Feedback__Sequence__fini(doozy_actions__action__DollyDock_Feedback__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_Feedback__Sequence *
doozy_actions__action__DollyDock_Feedback__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_Feedback__Sequence__destroy(doozy_actions__action__DollyDock_Feedback__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_Feedback__Sequence__are_equal(const doozy_actions__action__DollyDock_Feedback__Sequence * lhs, const doozy_actions__action__DollyDock_Feedback__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_Feedback__Sequence__copy(
  const doozy_actions__action__DollyDock_Feedback__Sequence * input,
  doozy_actions__action__DollyDock_Feedback__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_SendGoal_Request
 * )) before or use
 * doozy_actions__action__DollyDock_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Request__init(doozy_actions__action__DollyDock_SendGoal_Request * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Request__fini(doozy_actions__action__DollyDock_SendGoal_Request * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_SendGoal_Request *
doozy_actions__action__DollyDock_SendGoal_Request__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Request__destroy(doozy_actions__action__DollyDock_SendGoal_Request * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Request__are_equal(const doozy_actions__action__DollyDock_SendGoal_Request * lhs, const doozy_actions__action__DollyDock_SendGoal_Request * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_SendGoal_Request__copy(
  const doozy_actions__action__DollyDock_SendGoal_Request * input,
  doozy_actions__action__DollyDock_SendGoal_Request * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__init(doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__fini(doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_SendGoal_Request__Sequence *
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__destroy(doozy_actions__action__DollyDock_SendGoal_Request__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__are_equal(const doozy_actions__action__DollyDock_SendGoal_Request__Sequence * lhs, const doozy_actions__action__DollyDock_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_SendGoal_Request__Sequence__copy(
  const doozy_actions__action__DollyDock_SendGoal_Request__Sequence * input,
  doozy_actions__action__DollyDock_SendGoal_Request__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_SendGoal_Response
 * )) before or use
 * doozy_actions__action__DollyDock_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Response__init(doozy_actions__action__DollyDock_SendGoal_Response * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Response__fini(doozy_actions__action__DollyDock_SendGoal_Response * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_SendGoal_Response *
doozy_actions__action__DollyDock_SendGoal_Response__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Response__destroy(doozy_actions__action__DollyDock_SendGoal_Response * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Response__are_equal(const doozy_actions__action__DollyDock_SendGoal_Response * lhs, const doozy_actions__action__DollyDock_SendGoal_Response * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_SendGoal_Response__copy(
  const doozy_actions__action__DollyDock_SendGoal_Response * input,
  doozy_actions__action__DollyDock_SendGoal_Response * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__init(doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__fini(doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_SendGoal_Response__Sequence *
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__destroy(doozy_actions__action__DollyDock_SendGoal_Response__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__are_equal(const doozy_actions__action__DollyDock_SendGoal_Response__Sequence * lhs, const doozy_actions__action__DollyDock_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_SendGoal_Response__Sequence__copy(
  const doozy_actions__action__DollyDock_SendGoal_Response__Sequence * input,
  doozy_actions__action__DollyDock_SendGoal_Response__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_GetResult_Request
 * )) before or use
 * doozy_actions__action__DollyDock_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Request__init(doozy_actions__action__DollyDock_GetResult_Request * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Request__fini(doozy_actions__action__DollyDock_GetResult_Request * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_GetResult_Request *
doozy_actions__action__DollyDock_GetResult_Request__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Request__destroy(doozy_actions__action__DollyDock_GetResult_Request * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Request__are_equal(const doozy_actions__action__DollyDock_GetResult_Request * lhs, const doozy_actions__action__DollyDock_GetResult_Request * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_GetResult_Request__copy(
  const doozy_actions__action__DollyDock_GetResult_Request * input,
  doozy_actions__action__DollyDock_GetResult_Request * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Request__Sequence__init(doozy_actions__action__DollyDock_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Request__Sequence__fini(doozy_actions__action__DollyDock_GetResult_Request__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_GetResult_Request__Sequence *
doozy_actions__action__DollyDock_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Request__Sequence__destroy(doozy_actions__action__DollyDock_GetResult_Request__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Request__Sequence__are_equal(const doozy_actions__action__DollyDock_GetResult_Request__Sequence * lhs, const doozy_actions__action__DollyDock_GetResult_Request__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_GetResult_Request__Sequence__copy(
  const doozy_actions__action__DollyDock_GetResult_Request__Sequence * input,
  doozy_actions__action__DollyDock_GetResult_Request__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_GetResult_Response
 * )) before or use
 * doozy_actions__action__DollyDock_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Response__init(doozy_actions__action__DollyDock_GetResult_Response * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Response__fini(doozy_actions__action__DollyDock_GetResult_Response * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_GetResult_Response *
doozy_actions__action__DollyDock_GetResult_Response__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Response__destroy(doozy_actions__action__DollyDock_GetResult_Response * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Response__are_equal(const doozy_actions__action__DollyDock_GetResult_Response * lhs, const doozy_actions__action__DollyDock_GetResult_Response * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_GetResult_Response__copy(
  const doozy_actions__action__DollyDock_GetResult_Response * input,
  doozy_actions__action__DollyDock_GetResult_Response * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Response__Sequence__init(doozy_actions__action__DollyDock_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Response__Sequence__fini(doozy_actions__action__DollyDock_GetResult_Response__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_GetResult_Response__Sequence *
doozy_actions__action__DollyDock_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_GetResult_Response__Sequence__destroy(doozy_actions__action__DollyDock_GetResult_Response__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_GetResult_Response__Sequence__are_equal(const doozy_actions__action__DollyDock_GetResult_Response__Sequence * lhs, const doozy_actions__action__DollyDock_GetResult_Response__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_GetResult_Response__Sequence__copy(
  const doozy_actions__action__DollyDock_GetResult_Response__Sequence * input,
  doozy_actions__action__DollyDock_GetResult_Response__Sequence * output);

/// Initialize action/DollyDock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * doozy_actions__action__DollyDock_FeedbackMessage
 * )) before or use
 * doozy_actions__action__DollyDock_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_FeedbackMessage__init(doozy_actions__action__DollyDock_FeedbackMessage * msg);

/// Finalize action/DollyDock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_FeedbackMessage__fini(doozy_actions__action__DollyDock_FeedbackMessage * msg);

/// Create action/DollyDock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * doozy_actions__action__DollyDock_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_FeedbackMessage *
doozy_actions__action__DollyDock_FeedbackMessage__create();

/// Destroy action/DollyDock message.
/**
 * It calls
 * doozy_actions__action__DollyDock_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_FeedbackMessage__destroy(doozy_actions__action__DollyDock_FeedbackMessage * msg);

/// Check for action/DollyDock message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_FeedbackMessage__are_equal(const doozy_actions__action__DollyDock_FeedbackMessage * lhs, const doozy_actions__action__DollyDock_FeedbackMessage * rhs);

/// Copy a action/DollyDock message.
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
doozy_actions__action__DollyDock_FeedbackMessage__copy(
  const doozy_actions__action__DollyDock_FeedbackMessage * input,
  doozy_actions__action__DollyDock_FeedbackMessage * output);

/// Initialize array of action/DollyDock messages.
/**
 * It allocates the memory for the number of elements and calls
 * doozy_actions__action__DollyDock_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__init(doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__fini(doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array);

/// Create array of action/DollyDock messages.
/**
 * It allocates the memory for the array and calls
 * doozy_actions__action__DollyDock_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
doozy_actions__action__DollyDock_FeedbackMessage__Sequence *
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/DollyDock messages.
/**
 * It calls
 * doozy_actions__action__DollyDock_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
void
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__destroy(doozy_actions__action__DollyDock_FeedbackMessage__Sequence * array);

/// Check for action/DollyDock message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_doozy_actions
bool
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__are_equal(const doozy_actions__action__DollyDock_FeedbackMessage__Sequence * lhs, const doozy_actions__action__DollyDock_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/DollyDock messages.
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
doozy_actions__action__DollyDock_FeedbackMessage__Sequence__copy(
  const doozy_actions__action__DollyDock_FeedbackMessage__Sequence * input,
  doozy_actions__action__DollyDock_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__FUNCTIONS_H_
