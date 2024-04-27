// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "doozy_actions/msg/detail/docking__rosidl_typesupport_introspection_c.h"
#include "doozy_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "doozy_actions/msg/detail/docking__functions.h"
#include "doozy_actions/msg/detail/docking__struct.h"


// Include directives for member types
// Member `target_tf_status`
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  doozy_actions__msg__Docking__init(message_memory);
}

void doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_fini_function(void * message_memory)
{
  doozy_actions__msg__Docking__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_member_array[6] = {
  {
    "docked_to_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Docking, docked_to_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safe_to_latch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Docking, safe_to_latch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Docking, distance_to_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_to_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Docking, angle_to_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_tf_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(doozy_actions__msg__Docking, target_tf_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(doozy_actions__msg__Docking, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_members = {
  "doozy_actions__msg",  // message namespace
  "Docking",  // message name
  6,  // number of fields
  sizeof(doozy_actions__msg__Docking),
  doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_member_array,  // message members
  doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_init_function,  // function to initialize message memory (memory has to be allocated)
  doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_type_support_handle = {
  0,
  &doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, msg, Docking)() {
  if (!doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_type_support_handle.typesupport_identifier) {
    doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &doozy_actions__msg__Docking__rosidl_typesupport_introspection_c__Docking_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
