// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DOCKING__TRAITS_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DOCKING__TRAITS_HPP_

#include "doozy_actions/msg/detail/docking__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const doozy_actions::msg::Docking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: docked_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docked_to_target: ";
    value_to_yaml(msg.docked_to_target, out);
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

  // member: distance_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_target: ";
    value_to_yaml(msg.distance_to_target, out);
    out << "\n";
  }

  // member: angle_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_to_target: ";
    value_to_yaml(msg.angle_to_target, out);
    out << "\n";
  }

  // member: target_tf_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tf_status: ";
    value_to_yaml(msg.target_tf_status, out);
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

inline std::string to_yaml(const doozy_actions::msg::Docking & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
