// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__TRAITS_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__TRAITS_HPP_

#include "doozy_actions/msg/detail/navigation__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const doozy_actions::msg::Navigation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moved_to_spot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moved_to_spot: ";
    value_to_yaml(msg.moved_to_spot, out);
    out << "\n";
  }

  // member: idx_of_dolly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_of_dolly: ";
    value_to_yaml(msg.idx_of_dolly, out);
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

inline std::string to_yaml(const doozy_actions::msg::Navigation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<doozy_actions::msg::Navigation>()
{
  return "doozy_actions::msg::Navigation";
}

template<>
inline const char * name<doozy_actions::msg::Navigation>()
{
  return "doozy_actions/msg/Navigation";
}

template<>
struct has_fixed_size<doozy_actions::msg::Navigation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<doozy_actions::msg::Navigation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<doozy_actions::msg::Navigation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__TRAITS_HPP_
