// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__BUILDER_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "doozy_actions/msg/detail/navigation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace doozy_actions
{

namespace msg
{

namespace builder
{

class Init_Navigation_error
{
public:
  explicit Init_Navigation_error(::doozy_actions::msg::Navigation & msg)
  : msg_(msg)
  {}
  ::doozy_actions::msg::Navigation error(::doozy_actions::msg::Navigation::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::msg::Navigation msg_;
};

class Init_Navigation_idx_of_dolly
{
public:
  explicit Init_Navigation_idx_of_dolly(::doozy_actions::msg::Navigation & msg)
  : msg_(msg)
  {}
  Init_Navigation_error idx_of_dolly(::doozy_actions::msg::Navigation::_idx_of_dolly_type arg)
  {
    msg_.idx_of_dolly = std::move(arg);
    return Init_Navigation_error(msg_);
  }

private:
  ::doozy_actions::msg::Navigation msg_;
};

class Init_Navigation_moved_to_spot
{
public:
  Init_Navigation_moved_to_spot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_idx_of_dolly moved_to_spot(::doozy_actions::msg::Navigation::_moved_to_spot_type arg)
  {
    msg_.moved_to_spot = std::move(arg);
    return Init_Navigation_idx_of_dolly(msg_);
  }

private:
  ::doozy_actions::msg::Navigation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::msg::Navigation>()
{
  return doozy_actions::msg::builder::Init_Navigation_moved_to_spot();
}

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__BUILDER_HPP_
