// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DOCKING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DOCKING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "doozy_actions/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "doozy_actions/msg/detail/docking__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace doozy_actions
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
cdr_serialize(
  const doozy_actions::msg::Docking & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  doozy_actions::msg::Docking & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
get_serialized_size(
  const doozy_actions::msg::Docking & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
max_serialized_size_Docking(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace doozy_actions

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_doozy_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, msg, Docking)();

#ifdef __cplusplus
}
#endif

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DOCKING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
