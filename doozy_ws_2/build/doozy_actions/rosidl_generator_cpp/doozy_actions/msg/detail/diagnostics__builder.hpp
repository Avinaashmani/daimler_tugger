// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__BUILDER_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "doozy_actions/msg/detail/diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace doozy_actions
{

namespace msg
{

namespace builder
{

class Init_Diagnostics_error
{
public:
  explicit Init_Diagnostics_error(::doozy_actions::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  ::doozy_actions::msg::Diagnostics error(::doozy_actions::msg::Diagnostics::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

class Init_Diagnostics_camera_health
{
public:
  explicit Init_Diagnostics_camera_health(::doozy_actions::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_error camera_health(::doozy_actions::msg::Diagnostics::_camera_health_type arg)
  {
    msg_.camera_health = std::move(arg);
    return Init_Diagnostics_error(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

class Init_Diagnostics_sick_detection
{
public:
  explicit Init_Diagnostics_sick_detection(::doozy_actions::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_camera_health sick_detection(::doozy_actions::msg::Diagnostics::_sick_detection_type arg)
  {
    msg_.sick_detection = std::move(arg);
    return Init_Diagnostics_camera_health(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

class Init_Diagnostics_docking_status
{
public:
  explicit Init_Diagnostics_docking_status(::doozy_actions::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_sick_detection docking_status(::doozy_actions::msg::Diagnostics::_docking_status_type arg)
  {
    msg_.docking_status = std::move(arg);
    return Init_Diagnostics_sick_detection(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

class Init_Diagnostics_is_latched
{
public:
  explicit Init_Diagnostics_is_latched(::doozy_actions::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_docking_status is_latched(::doozy_actions::msg::Diagnostics::_is_latched_type arg)
  {
    msg_.is_latched = std::move(arg);
    return Init_Diagnostics_docking_status(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

class Init_Diagnostics_safe_to_latch
{
public:
  explicit Init_Diagnostics_safe_to_latch(::doozy_actions::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_is_latched safe_to_latch(::doozy_actions::msg::Diagnostics::_safe_to_latch_type arg)
  {
    msg_.safe_to_latch = std::move(arg);
    return Init_Diagnostics_is_latched(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

class Init_Diagnostics_has_reached_position
{
public:
  Init_Diagnostics_has_reached_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Diagnostics_safe_to_latch has_reached_position(::doozy_actions::msg::Diagnostics::_has_reached_position_type arg)
  {
    msg_.has_reached_position = std::move(arg);
    return Init_Diagnostics_safe_to_latch(msg_);
  }

private:
  ::doozy_actions::msg::Diagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::msg::Diagnostics>()
{
  return doozy_actions::msg::builder::Init_Diagnostics_has_reached_position();
}

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__BUILDER_HPP_
