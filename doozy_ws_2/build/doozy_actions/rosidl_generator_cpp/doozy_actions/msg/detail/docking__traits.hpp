// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DOCKING__TRAITS_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DOCKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "doozy_actions/msg/detail/docking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace doozy_actions
{

namespace msg
{

inline void to_flow_style_yaml(
  const Docking & msg,
  std::ostream & out)
{
  out << "{";
  // member: docked_to_target
  {
    out << "docked_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.docked_to_target, out);
    out << ", ";
  }

  // member: safe_to_latch
  {
    out << "safe_to_latch: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_to_latch, out);
    out << ", ";
  }

  // member: distance_to_target
  {
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << ", ";
  }

  // member: angle_to_target
  {
    out << "angle_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_to_target, out);
    out << ", ";
  }

  // member: target_tf_status
  {
    out << "target_tf_status: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tf_status, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Docking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: docked_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docked_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.docked_to_target, out);
    out << "\n";
  }

  // member: safe_to_latch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_to_latch: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_to_latch, out);
    out << "\n";
  }

  // member: distance_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << "\n";
  }

  // member: angle_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_to_target, out);
    out << "\n";
  }

  // member: target_tf_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tf_status: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tf_status, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Docking & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace doozy_actions

namespace rosidl_generator_traits
{

[[deprecated("use doozy_actions::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const doozy_actions::msg::Docking & msg,
  std::ostream & out, size_t indentation = 0)
{
  doozy_actions::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use doozy_actions::msg::to_yaml() instead")]]
inline std::string to_yaml(const doozy_actions::msg::Docking & msg)
{
  return doozy_actions::msg::to_yaml(msg);
}

template<>
inline const char * data_type<doozy_actions::msg::Docking>()
{
  return "doozy_actions::msg::Docking";
}

template<>
inline const char * name<doozy_actions::msg::Docking>()
{
  return "doozy_actions/msg/Docking";
}

template<>
struct has_fixed_size<doozy_actions::msg::Docking>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<doozy_actions::msg::Docking>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<doozy_actions::msg::Docking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DOCKING__TRAITS_HPP_
