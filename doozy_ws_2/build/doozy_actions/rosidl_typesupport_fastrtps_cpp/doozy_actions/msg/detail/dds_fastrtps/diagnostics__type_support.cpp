// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice
#include "doozy_actions/msg/detail/diagnostics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "doozy_actions/msg/detail/diagnostics__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace doozy_actions
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
cdr_serialize(
  const doozy_actions::msg::Diagnostics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: has_reached_position
  cdr << (ros_message.has_reached_position ? true : false);
  // Member: safe_to_latch
  cdr << ros_message.safe_to_latch;
  // Member: is_latched
  cdr << (ros_message.is_latched ? true : false);
  // Member: docking_status
  cdr << ros_message.docking_status;
  // Member: sick_detection
  cdr << (ros_message.sick_detection ? true : false);
  // Member: camera_health
  cdr << ros_message.camera_health;
  // Member: error
  cdr << ros_message.error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  doozy_actions::msg::Diagnostics & ros_message)
{
  // Member: has_reached_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_reached_position = tmp ? true : false;
  }

  // Member: safe_to_latch
  cdr >> ros_message.safe_to_latch;

  // Member: is_latched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_latched = tmp ? true : false;
  }

  // Member: docking_status
  cdr >> ros_message.docking_status;

  // Member: sick_detection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sick_detection = tmp ? true : false;
  }

  // Member: camera_health
  cdr >> ros_message.camera_health;

  // Member: error
  cdr >> ros_message.error;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
get_serialized_size(
  const doozy_actions::msg::Diagnostics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: has_reached_position
  {
    size_t item_size = sizeof(ros_message.has_reached_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safe_to_latch
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.safe_to_latch.size() + 1);
  // Member: is_latched
  {
    size_t item_size = sizeof(ros_message.is_latched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: docking_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.docking_status.size() + 1);
  // Member: sick_detection
  {
    size_t item_size = sizeof(ros_message.sick_detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_health
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.camera_health.size() + 1);
  // Member: error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
max_serialized_size_Diagnostics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: has_reached_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safe_to_latch
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: is_latched
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: docking_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sick_detection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: camera_health
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: error
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

static bool _Diagnostics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const doozy_actions::msg::Diagnostics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Diagnostics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<doozy_actions::msg::Diagnostics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Diagnostics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const doozy_actions::msg::Diagnostics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Diagnostics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Diagnostics(full_bounded, 0);
}

static message_type_support_callbacks_t _Diagnostics__callbacks = {
  "doozy_actions::msg",
  "Diagnostics",
  _Diagnostics__cdr_serialize,
  _Diagnostics__cdr_deserialize,
  _Diagnostics__get_serialized_size,
  _Diagnostics__max_serialized_size
};

static rosidl_message_type_support_t _Diagnostics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Diagnostics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace doozy_actions

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_doozy_actions
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::msg::Diagnostics>()
{
  return &doozy_actions::msg::typesupport_fastrtps_cpp::_Diagnostics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, msg, Diagnostics)() {
  return &doozy_actions::msg::typesupport_fastrtps_cpp::_Diagnostics__handle;
}

#ifdef __cplusplus
}
#endif
