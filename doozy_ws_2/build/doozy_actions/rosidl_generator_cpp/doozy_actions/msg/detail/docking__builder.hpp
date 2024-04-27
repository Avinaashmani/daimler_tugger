// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DOCKING__BUILDER_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DOCKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "doozy_actions/msg/detail/docking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace doozy_actions
{

namespace msg
{

namespace builder
{

class Init_Docking_error
{
public:
  explicit Init_Docking_error(::doozy_actions::msg::Docking & msg)
  : msg_(msg)
  {}
  ::doozy_actions::msg::Docking error(::doozy_actions::msg::Docking::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::msg::Docking msg_;
};

class Init_Docking_target_tf_status
{
public:
  explicit Init_Docking_target_tf_status(::doozy_actions::msg::Docking & msg)
  : msg_(msg)
  {}
  Init_Docking_error target_tf_status(::doozy_actions::msg::Docking::_target_tf_status_type arg)
  {
    msg_.target_tf_status = std::move(arg);
    return Init_Docking_error(msg_);
  }

private:
  ::doozy_actions::msg::Docking msg_;
};

class Init_Docking_angle_to_target
{
public:
  explicit Init_Docking_angle_to_target(::doozy_actions::msg::Docking & msg)
  : msg_(msg)
  {}
  Init_Docking_target_tf_status angle_to_target(::doozy_actions::msg::Docking::_angle_to_target_type arg)
  {
    msg_.angle_to_target = std::move(arg);
    return Init_Docking_target_tf_status(msg_);
  }

private:
  ::doozy_actions::msg::Docking msg_;
};

class Init_Docking_distance_to_target
{
public:
  explicit Init_Docking_distance_to_target(::doozy_actions::msg::Docking & msg)
  : msg_(msg)
  {}
  Init_Docking_angle_to_target distance_to_target(::doozy_actions::msg::Docking::_distance_to_target_type arg)
  {
    msg_.distance_to_target = std::move(arg);
    return Init_Docking_angle_to_target(msg_);
  }

private:
  ::doozy_actions::msg::Docking msg_;
};

class Init_Docking_safe_to_latch
{
public:
  explicit Init_Docking_safe_to_latch(::doozy_actions::msg::Docking & msg)
  : msg_(msg)
  {}
  Init_Docking_distance_to_target safe_to_latch(::doozy_actions::msg::Docking::_safe_to_latch_type arg)
  {
    msg_.safe_to_latch = std::move(arg);
    return Init_Docking_distance_to_target(msg_);
  }

private:
  ::doozy_actions::msg::Docking msg_;
};

class Init_Docking_docked_to_target
{
public:
  Init_Docking_docked_to_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Docking_safe_to_latch docked_to_target(::doozy_actions::msg::Docking::_docked_to_target_type arg)
  {
    msg_.docked_to_target = std::move(arg);
    return Init_Docking_safe_to_latch(msg_);
  }

private:
  ::doozy_actions::msg::Docking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::msg::Docking>()
{
  return doozy_actions::msg::builder::Init_Docking_docked_to_target();
}

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DOCKING__BUILDER_HPP_
