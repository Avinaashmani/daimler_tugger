// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sick_visionary_t_mini:msg/SickTMini.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sick_visionary_t_mini/msg/detail/sick_t_mini__rosidl_typesupport_introspection_c.h"
#include "sick_visionary_t_mini/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sick_visionary_t_mini/msg/detail/sick_t_mini__functions.h"
#include "sick_visionary_t_mini/msg/detail/sick_t_mini__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status_of_camera`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_corners`
// Member `right_corners`
// Member `point`
#include "geometry_msgs/msg/vector3.h"
// Member `left_corners`
// Member `right_corners`
// Member `point`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SickTMini__rosidl_typesupport_introspection_c__SickTMini_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sick_visionary_t_mini__msg__SickTMini__init(message_memory);
}

void SickTMini__rosidl_typesupport_introspection_c__SickTMini_fini_function(void * message_memory)
{
  sick_visionary_t_mini__msg__SickTMini__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_of_camera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, status_of_camera),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, left_corners),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, right_corners),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dolly_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, dolly_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corners_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sick_visionary_t_mini__msg__SickTMini, corners_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_members = {
  "sick_visionary_t_mini__msg",  // message namespace
  "SickTMini",  // message name
  7,  // number of fields
  sizeof(sick_visionary_t_mini__msg__SickTMini),
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_member_array,  // message members
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_init_function,  // function to initialize message memory (memory has to be allocated)
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_type_support_handle = {
  0,
  &SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sick_visionary_t_mini
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sick_visionary_t_mini, msg, SickTMini)() {
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_type_support_handle.typesupport_identifier) {
    SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SickTMini__rosidl_typesupport_introspection_c__SickTMini_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
