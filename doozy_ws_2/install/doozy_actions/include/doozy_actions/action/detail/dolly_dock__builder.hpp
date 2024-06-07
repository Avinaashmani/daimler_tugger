// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__BUILDER_HPP_
#define DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__BUILDER_HPP_

#include "doozy_actions/action/detail/dolly_dock__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_Goal_idx_no
{
public:
  explicit Init_DollyDock_Goal_idx_no(::doozy_actions::action::DollyDock_Goal & msg)
  : msg_(msg)
  {}
  ::doozy_actions::action::DollyDock_Goal idx_no(::doozy_actions::action::DollyDock_Goal::_idx_no_type arg)
  {
    msg_.idx_no = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_Goal msg_;
};

class Init_DollyDock_Goal_reached_point
{
public:
  Init_DollyDock_Goal_reached_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DollyDock_Goal_idx_no reached_point(::doozy_actions::action::DollyDock_Goal::_reached_point_type arg)
  {
    msg_.reached_point = std::move(arg);
    return Init_DollyDock_Goal_idx_no(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_Goal>()
{
  return doozy_actions::action::builder::Init_DollyDock_Goal_reached_point();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_Result_docked_to_dolly
{
public:
  Init_DollyDock_Result_docked_to_dolly()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::doozy_actions::action::DollyDock_Result docked_to_dolly(::doozy_actions::action::DollyDock_Result::_docked_to_dolly_type arg)
  {
    msg_.docked_to_dolly = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_Result>()
{
  return doozy_actions::action::builder::Init_DollyDock_Result_docked_to_dolly();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_Feedback_angle_to_dolly
{
public:
  explicit Init_DollyDock_Feedback_angle_to_dolly(::doozy_actions::action::DollyDock_Feedback & msg)
  : msg_(msg)
  {}
  ::doozy_actions::action::DollyDock_Feedback angle_to_dolly(::doozy_actions::action::DollyDock_Feedback::_angle_to_dolly_type arg)
  {
    msg_.angle_to_dolly = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_Feedback msg_;
};

class Init_DollyDock_Feedback_distance_to_dolly
{
public:
  Init_DollyDock_Feedback_distance_to_dolly()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DollyDock_Feedback_angle_to_dolly distance_to_dolly(::doozy_actions::action::DollyDock_Feedback::_distance_to_dolly_type arg)
  {
    msg_.distance_to_dolly = std::move(arg);
    return Init_DollyDock_Feedback_angle_to_dolly(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_Feedback>()
{
  return doozy_actions::action::builder::Init_DollyDock_Feedback_distance_to_dolly();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_SendGoal_Request_goal
{
public:
  explicit Init_DollyDock_SendGoal_Request_goal(::doozy_actions::action::DollyDock_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::doozy_actions::action::DollyDock_SendGoal_Request goal(::doozy_actions::action::DollyDock_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_SendGoal_Request msg_;
};

class Init_DollyDock_SendGoal_Request_goal_id
{
public:
  Init_DollyDock_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DollyDock_SendGoal_Request_goal goal_id(::doozy_actions::action::DollyDock_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DollyDock_SendGoal_Request_goal(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_SendGoal_Request>()
{
  return doozy_actions::action::builder::Init_DollyDock_SendGoal_Request_goal_id();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_SendGoal_Response_stamp
{
public:
  explicit Init_DollyDock_SendGoal_Response_stamp(::doozy_actions::action::DollyDock_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::doozy_actions::action::DollyDock_SendGoal_Response stamp(::doozy_actions::action::DollyDock_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_SendGoal_Response msg_;
};

class Init_DollyDock_SendGoal_Response_accepted
{
public:
  Init_DollyDock_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DollyDock_SendGoal_Response_stamp accepted(::doozy_actions::action::DollyDock_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DollyDock_SendGoal_Response_stamp(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_SendGoal_Response>()
{
  return doozy_actions::action::builder::Init_DollyDock_SendGoal_Response_accepted();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_GetResult_Request_goal_id
{
public:
  Init_DollyDock_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::doozy_actions::action::DollyDock_GetResult_Request goal_id(::doozy_actions::action::DollyDock_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_GetResult_Request>()
{
  return doozy_actions::action::builder::Init_DollyDock_GetResult_Request_goal_id();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_GetResult_Response_result
{
public:
  explicit Init_DollyDock_GetResult_Response_result(::doozy_actions::action::DollyDock_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::doozy_actions::action::DollyDock_GetResult_Response result(::doozy_actions::action::DollyDock_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_GetResult_Response msg_;
};

class Init_DollyDock_GetResult_Response_status
{
public:
  Init_DollyDock_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DollyDock_GetResult_Response_result status(::doozy_actions::action::DollyDock_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DollyDock_GetResult_Response_result(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_GetResult_Response>()
{
  return doozy_actions::action::builder::Init_DollyDock_GetResult_Response_status();
}

}  // namespace doozy_actions


namespace doozy_actions
{

namespace action
{

namespace builder
{

class Init_DollyDock_FeedbackMessage_feedback
{
public:
  explicit Init_DollyDock_FeedbackMessage_feedback(::doozy_actions::action::DollyDock_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::doozy_actions::action::DollyDock_FeedbackMessage feedback(::doozy_actions::action::DollyDock_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_FeedbackMessage msg_;
};

class Init_DollyDock_FeedbackMessage_goal_id
{
public:
  Init_DollyDock_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DollyDock_FeedbackMessage_feedback goal_id(::doozy_actions::action::DollyDock_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DollyDock_FeedbackMessage_feedback(msg_);
  }

private:
  ::doozy_actions::action::DollyDock_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::doozy_actions::action::DollyDock_FeedbackMessage>()
{
  return doozy_actions::action::builder::Init_DollyDock_FeedbackMessage_goal_id();
}

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__BUILDER_HPP_
