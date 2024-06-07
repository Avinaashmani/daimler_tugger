// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice
#include "doozy_actions/msg/detail/docking__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "doozy_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "doozy_actions/msg/detail/docking__struct.h"
#include "doozy_actions/msg/detail/docking__functions.h"
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

#include "rosidl_runtime_c/string.h"  // error, target_tf_status
#include "rosidl_runtime_c/string_functions.h"  // error, target_tf_status

// forward declare type support functions


using _Docking__ros_msg_type = doozy_actions__msg__Docking;

static bool _Docking__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Docking__ros_msg_type * ros_message = static_cast<const _Docking__ros_msg_type *>(untyped_ros_message);
  // Field name: docked_to_target
  {
    cdr << (ros_message->docked_to_target ? true : false);
  }

  // Field name: safe_to_latch
  {
    cdr << (ros_message->safe_to_latch ? true : false);
  }

  // Field name: distance_to_target
  {
    cdr << ros_message->distance_to_target;
  }

  // Field name: angle_to_target
  {
    cdr << ros_message->angle_to_target;
  }

  // Field name: target_tf_status
  {
    const rosidl_runtime_c__String * str = &ros_message->target_tf_status;
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

static bool _Docking__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Docking__ros_msg_type * ros_message = static_cast<_Docking__ros_msg_type *>(untyped_ros_message);
  // Field name: docked_to_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->docked_to_target = tmp ? true : false;
  }

  // Field name: safe_to_latch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safe_to_latch = tmp ? true : false;
  }

  // Field name: distance_to_target
  {
    cdr >> ros_message->distance_to_target;
  }

  // Field name: angle_to_target
  {
    cdr >> ros_message->angle_to_target;
  }

  // Field name: target_tf_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target_tf_status.data) {
      rosidl_runtime_c__String__init(&ros_message->target_tf_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target_tf_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target_tf_status'\n");
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
size_t get_serialized_size_doozy_actions__msg__Docking(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Docking__ros_msg_type * ros_message = static_cast<const _Docking__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name docked_to_target
  {
    size_t item_size = sizeof(ros_message->docked_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safe_to_latch
  {
    size_t item_size = sizeof(ros_message->safe_to_latch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_target
  {
    size_t item_size = sizeof(ros_message->distance_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_to_target
  {
    size_t item_size = sizeof(ros_message->angle_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_tf_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_tf_status.size + 1);
  // field.name error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Docking__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_doozy_actions__msg__Docking(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_doozy_actions
size_t max_serialized_size_doozy_actions__msg__Docking(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: docked_to_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safe_to_latch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distance_to_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_to_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_tf_status
  {
    size_t array_size = 1;

    full_bounded = false;
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
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Docking__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_doozy_actions__msg__Docking(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Docking = {
  "doozy_actions::msg",
  "Docking",
  _Docking__cdr_serialize,
  _Docking__cdr_deserialize,
  _Docking__get_serialized_size,
  _Docking__max_serialized_size
};

static rosidl_message_type_support_t _Docking__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Docking,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, doozy_actions, msg, Docking)() {
  return &_Docking__type_support;
}

#if defined(__cplusplus)
}
#endif
