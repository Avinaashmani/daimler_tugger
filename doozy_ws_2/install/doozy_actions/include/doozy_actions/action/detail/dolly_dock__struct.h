// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__STRUCT_H_
#define DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'idx_no'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_Goal
{
  bool reached_point;
  rosidl_runtime_c__String idx_no;
} doozy_actions__action__DollyDock_Goal;

// Struct for a sequence of doozy_actions__action__DollyDock_Goal.
typedef struct doozy_actions__action__DollyDock_Goal__Sequence
{
  doozy_actions__action__DollyDock_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_Result
{
  bool docked_to_dolly;
} doozy_actions__action__DollyDock_Result;

// Struct for a sequence of doozy_actions__action__DollyDock_Result.
typedef struct doozy_actions__action__DollyDock_Result__Sequence
{
  doozy_actions__action__DollyDock_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'distance_to_dolly'
// Member 'angle_to_dolly'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_Feedback
{
  rosidl_runtime_c__String distance_to_dolly;
  rosidl_runtime_c__String angle_to_dolly;
} doozy_actions__action__DollyDock_Feedback;

// Struct for a sequence of doozy_actions__action__DollyDock_Feedback.
typedef struct doozy_actions__action__DollyDock_Feedback__Sequence
{
  doozy_actions__action__DollyDock_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "doozy_actions/action/detail/dolly_dock__struct.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  doozy_actions__action__DollyDock_Goal goal;
} doozy_actions__action__DollyDock_SendGoal_Request;

// Struct for a sequence of doozy_actions__action__DollyDock_SendGoal_Request.
typedef struct doozy_actions__action__DollyDock_SendGoal_Request__Sequence
{
  doozy_actions__action__DollyDock_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} doozy_actions__action__DollyDock_SendGoal_Response;

// Struct for a sequence of doozy_actions__action__DollyDock_SendGoal_Response.
typedef struct doozy_actions__action__DollyDock_SendGoal_Response__Sequence
{
  doozy_actions__action__DollyDock_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} doozy_actions__action__DollyDock_GetResult_Request;

// Struct for a sequence of doozy_actions__action__DollyDock_GetResult_Request.
typedef struct doozy_actions__action__DollyDock_GetResult_Request__Sequence
{
  doozy_actions__action__DollyDock_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_GetResult_Response
{
  int8_t status;
  doozy_actions__action__DollyDock_Result result;
} doozy_actions__action__DollyDock_GetResult_Response;

// Struct for a sequence of doozy_actions__action__DollyDock_GetResult_Response.
typedef struct doozy_actions__action__DollyDock_GetResult_Response__Sequence
{
  doozy_actions__action__DollyDock_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"

// Struct defined in action/DollyDock in the package doozy_actions.
typedef struct doozy_actions__action__DollyDock_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  doozy_actions__action__DollyDock_Feedback feedback;
} doozy_actions__action__DollyDock_FeedbackMessage;

// Struct for a sequence of doozy_actions__action__DollyDock_FeedbackMessage.
typedef struct doozy_actions__action__DollyDock_FeedbackMessage__Sequence
{
  doozy_actions__action__DollyDock_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} doozy_actions__action__DollyDock_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__STRUCT_H_
