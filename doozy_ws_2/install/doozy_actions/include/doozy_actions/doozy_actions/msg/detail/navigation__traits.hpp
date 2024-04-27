// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__TRAITS_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "doozy_actions/msg/detail/navigation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace doozy_actions
{

namespace msg
{

inline void to_flow_style_yaml(
  const Navigation & msg,
  std::ostream & out)
{
  out << "{";
  // member: moved_to_spot
  {
    out << "moved_to_spot: ";
    rosidl_generator_traits::value_to_yaml(msg.moved_to_spot, out);
    out << ", ";
  }

  // member: idx_of_dolly
  {
    out << "idx_of_dolly: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_of_dolly, out);
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
  const Navigation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moved_to_spot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moved_to_spot: ";
    rosidl_generator_traits::value_to_yaml(msg.moved_to_spot, out);
    out << "\n";
  }

  // member: idx_of_dolly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_of_dolly: ";
    rosidl_generator_traits::value_to_yaml(msg.idx_of_dolly, out);
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

inline std::string to_yaml(const Navigation & msg, bool use_flow_style = false)
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
  const doozy_actions::msg::Navigation & msg,
  std::ostream & out, size_t indentation = 0)
{
  doozy_actions::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use doozy_actions::msg::to_yaml() instead")]]
inline std::string to_yaml(const doozy_actions::msg::Navigation & msg)
{
  return doozy_actions::msg::to_yaml(msg);
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
