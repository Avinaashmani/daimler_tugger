// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice
#include "doozy_actions/msg/detail/diagnostics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "doozy_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "doozy_actions/msg/detail/diagnostics__struct.h"
#include "doozy_actions/msg/detail/diagnostics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // camera_health, docking_status, error, safe_to_latch
#include "rosidl_runtime_c/string_functions.h"  // camera_health, docking_status, error, safe_to_latch

// forward declare type support functions


using _Diagnostics__ros_msg_type = doozy_actions__msg__Diagnostics;

static bool _Diagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Diagnostics__ros_msg_type * ros_message = static_cast<const _Diagnostics__ros_msg_type *>(untyped_ros_message);
  // Field name: has_reached_position
  {
    cdr << (ros_message->has_reached_position ? true : false);
  }

  // Field name: safe_to_latch
  {
    const rosidl_runtime_c__String * str = &ros_message->safe_to_latch;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: is_latched
  {
    cdr << (ros_message->is_latched ? true : false);
  }

  // Field name: docking_status
  {
    const rosidl_runtime_c__String * str = &ros_message->docking_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sick_detection
  {
    cdr << (ros_message->sick_detection ? true : false);
  }

  // Field name: camera_health
  {
    const rosidl_runtime_c__String * str = &ros_message->camera_health;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error
  {
    const rosidl_runtime_c__String * str = &ros_message->error;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Diagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Diagnostics__ros_msg_type * ros_message = static_cast<_Diagnostics__ros_msg_type *>(untyped_ros_message);
  // Field name: has_reached_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_reached_position = tmp ? true : false;
  }

  // Field name: safe_to_latch
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->safe_to_latch.data) {
      rosidl_runtime_c__String__init(&ros_message->safe_to_latch);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->safe_to_latch,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'safe_to_latch'\n");
      return false;
    }
  }

  // Field name: is_latched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_latched = tmp ? true : false;
  }

  // Field name: docking_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->docking_status.data) {
      rosidl_runtime_c__String__init(&ros_message->docking_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->docking_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'docking_status'\n");
      return false;
    }
  }

  // Field name: sick_detection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sick_detection = tmp ? true : false;
  }

  // Field name: camera_health
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->camera_health.data) {
      rosidl_runtime_c__String__init(&ros_message->camera_health);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->camera_health,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'camera_health'\n");
      return false;
    }
  }

  // Field name: error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error.data) {
      rosidl_runtime_c__String__init(&ros_message->error);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_doozy_actions
size_t get_serialized_size_doozy_actions__msg__Diagnostics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Diagnostics__ros_msg_type * ros_message = static_cast<const _Diagnostics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name has_reached_position
  {
    size_t item_size = sizeof(ros_message->has_reached_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safe_to_latch
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->safe_to_latch.size + 1);
  // field.name is_latched
  {
    size_t item_size = sizeof(ros_message->is_latched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name docking_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->docking_status.size + 1);
  // field.name sick_detection
  {
    size_t item_size = sizeof(ros_message->sick_detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_health
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->camera_health.size + 1);
  // field.name error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Diagnostics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_doozy_actions__msg__Diagnostics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_doozy_actions
size_t max_serialized_size_doozy_actions__msg__Diagnostics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: has_reached_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safe_to_latch
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_latched
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: docking_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sick_detection
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: camera_health
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = doozy_actions__msg__Diagnostics;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Diagnostics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_doozy_actions__msg__Diagnostics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Diagnostics = {
  "doozy_actions::msg",
  "Diagnostics",
  _Diagnostics__cdr_serialize,
  _Diagnostics__cdr_deserialize,
  _Diagnostics__get_serialized_size,
  _Diagnostics__max_serialized_size
};

static rosidl_message_type_support_t _Diagnostics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Diagnostics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, doozy_actions, msg, Diagnostics)() {
  return &_Diagnostics__type_support;
}

#if defined(__cplusplus)
}
#endif
