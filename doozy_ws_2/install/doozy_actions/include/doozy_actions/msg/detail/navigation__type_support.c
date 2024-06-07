// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "doozy_actions/msg/detail/navigation__rosidl_typesupport_introspection_c.h"
#include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "doozy_actions/msg/detail/navigation__functions.h"
#include "doozy_actions/msg/detail/navigation__struct.h"


// Include directives for member types
// Member `idx_of_dolly`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation__rosidl_typesupport_introspection_c__Navigation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__msg__Navigation__init(message_memory);
}

void Navigation__rosidl_typesupport_introspection_c__Navigation_fini_function(void * message_memory)
{
  doozy_actions__msg__Navigation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation__rosidl_typesupport_introspection_c__Navigation_message_member_array[3] = {
  {
    "moved_to_spot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Navigation, moved_to_spot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx_of_dolly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Navigation, idx_of_dolly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Navigation, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation__rosidl_typesupport_introspection_c__Navigation_message_members = {
  "doozy_actions__msg",  // message namespace
  "Navigation",  // message name
  3,  // number of fields
  sizeof(doozy_actions__msg__Navigation),
  Navigation__rosidl_typesupport_introspection_c__Navigation_message_member_array,  // message members
  Navigation__rosidl_typesupport_introspection_c__Navigation_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation__rosidl_typesupport_introspection_c__Navigation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle = {
  0,
  &Navigation__rosidl_typesupport_introspection_c__Navigation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, msg, Navigation)() {
  if (!Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle.typesupport_identifier) {
    Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
