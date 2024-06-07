// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
#include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "doozy_actions/action/detail/dolly_dock__functions.h"
#include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `idx_no`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_Goal__init(message_memory);
}

void DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_member_array[2] = {
  {
    "reached_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_Goal, reached_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx_no",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_Goal, idx_no),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_Goal",  // message name
  2,  // number of fields
  sizeof(doozy_actions__action__DollyDock_Goal),
  DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_member_array,  // message members
  DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_type_support_handle = {
  0,
  &DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_Goal)() {
  if (!DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_type_support_handle.typesupport_identifier) {
    DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_Goal__rosidl_typesupport_introspection_c__DollyDock_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_Result__init(message_memory);
}

void DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_member_array[1] = {
  {
    "docked_to_dolly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_Result, docked_to_dolly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_Result",  // message name
  1,  // number of fields
  sizeof(doozy_actions__action__DollyDock_Result),
  DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_member_array,  // message members
  DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_type_support_handle = {
  0,
  &DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_Result)() {
  if (!DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_type_support_handle.typesupport_identifier) {
    DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_Result__rosidl_typesupport_introspection_c__DollyDock_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `distance_to_dolly`
// Member `angle_to_dolly`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_Feedback__init(message_memory);
}

void DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_member_array[2] = {
  {
    "distance_to_dolly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_Feedback, distance_to_dolly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_to_dolly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_Feedback, angle_to_dolly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_Feedback",  // message name
  2,  // number of fields
  sizeof(doozy_actions__action__DollyDock_Feedback),
  DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_member_array,  // message members
  DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_type_support_handle = {
  0,
  &DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_Feedback)() {
  if (!DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_type_support_handle.typesupport_identifier) {
    DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_Feedback__rosidl_typesupport_introspection_c__DollyDock_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "doozy_actions/action/dolly_dock.h"
// Member `goal`
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_SendGoal_Request__init(message_memory);
}

void DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(doozy_actions__action__DollyDock_SendGoal_Request),
  DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_member_array,  // message members
  DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_type_support_handle = {
  0,
  &DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal_Request)() {
  DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_Goal)();
  if (!DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_SendGoal_Request__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_SendGoal_Response__init(message_memory);
}

void DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(doozy_actions__action__DollyDock_SendGoal_Response),
  DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_member_array,  // message members
  DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_type_support_handle = {
  0,
  &DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal_Response)() {
  DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_SendGoal_Response__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_members = {
  "doozy_actions__action",  // service namespace
  "DollyDock_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_type_support_handle = {
  0,
  &doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal)() {
  if (!doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_type_support_handle.typesupport_identifier) {
    doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_SendGoal_Response)()->data;
  }

  return &doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_GetResult_Request__init(message_memory);
}

void DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(doozy_actions__action__DollyDock_GetResult_Request),
  DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_member_array,  // message members
  DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_type_support_handle = {
  0,
  &DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult_Request)() {
  DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_GetResult_Request__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "doozy_actions/action/dolly_dock.h"
// Member `result`
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_GetResult_Response__init(message_memory);
}

void DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(doozy_actions__action__DollyDock_GetResult_Response),
  DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_member_array,  // message members
  DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_type_support_handle = {
  0,
  &DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult_Response)() {
  DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_Result)();
  if (!DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_GetResult_Response__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_members = {
  "doozy_actions__action",  // service namespace
  "DollyDock_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_type_support_handle = {
  0,
  &doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult)() {
  if (!doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_type_support_handle.typesupport_identifier) {
    doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_GetResult_Response)()->data;
  }

  return &doozy_actions__action__detail__dolly_dock__rosidl_typesupport_introspection_c__DollyDock_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"
// already included above
// #include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__functions.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "doozy_actions/action/dolly_dock.h"
// Member `feedback`
// already included above
// #include "doozy_actions/action/detail/dolly_dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__action__DollyDock_FeedbackMessage__init(message_memory);
}

void DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_fini_function(void * message_memory)
{
  doozy_actions__action__DollyDock_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__action__DollyDock_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_members = {
  "doozy_actions__action",  // message namespace
  "DollyDock_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(doozy_actions__action__DollyDock_FeedbackMessage),
  DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_member_array,  // message members
  DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_type_support_handle = {
  0,
  &DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_FeedbackMessage)() {
  DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, action, DollyDock_Feedback)();
  if (!DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DollyDock_FeedbackMessage__rosidl_typesupport_introspection_c__DollyDock_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
