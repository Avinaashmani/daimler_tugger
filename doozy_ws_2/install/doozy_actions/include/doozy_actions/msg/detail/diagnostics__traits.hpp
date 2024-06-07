// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__TRAITS_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__TRAITS_HPP_

#include "doozy_actions/msg/detail/diagnostics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const doozy_actions::msg::Diagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_reached_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_reached_position: ";
    value_to_yaml(msg.has_reached_position, out);
    out << "\n";
  }

  // member: safe_to_latch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_to_latch: ";
    value_to_yaml(msg.safe_to_latch, out);
    out << "\n";
  }

  // member: is_latched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_latched: ";
    value_to_yaml(msg.is_latched, out);
    out << "\n";
  }

  // member: docking_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_status: ";
    value_to_yaml(msg.docking_status, out);
    out << "\n";
  }

  // member: sick_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sick_detection: ";
    value_to_yaml(msg.sick_detection, out);
    out << "\n";
  }

  // member: camera_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_health: ";
    value_to_yaml(msg.camera_health, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const doozy_actions::msg::Diagnostics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<doozy_actions::msg::Diagnostics>()
{
  return "doozy_actions::msg::Diagnostics";
}

template<>
inline const char * name<doozy_actions::msg::Diagnostics>()
{
  return "doozy_actions/msg/Diagnostics";
}

template<>
struct has_fixed_size<doozy_actions::msg::Diagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<doozy_actions::msg::Diagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<doozy_actions::msg::Diagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__TRAITS_HPP_
