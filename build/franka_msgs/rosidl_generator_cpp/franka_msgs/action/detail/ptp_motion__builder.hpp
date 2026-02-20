// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:action/PTPMotion.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__PTP_MOTION__BUILDER_HPP_
#define FRANKA_MSGS__ACTION__DETAIL__PTP_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/action/detail/ptp_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_Goal_goal_tolerance
{
public:
  explicit Init_PTPMotion_Goal_goal_tolerance(::franka_msgs::action::PTPMotion_Goal & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::PTPMotion_Goal goal_tolerance(::franka_msgs::action::PTPMotion_Goal::_goal_tolerance_type arg)
  {
    msg_.goal_tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_Goal msg_;
};

class Init_PTPMotion_Goal_maximum_joint_velocities
{
public:
  explicit Init_PTPMotion_Goal_maximum_joint_velocities(::franka_msgs::action::PTPMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_PTPMotion_Goal_goal_tolerance maximum_joint_velocities(::franka_msgs::action::PTPMotion_Goal::_maximum_joint_velocities_type arg)
  {
    msg_.maximum_joint_velocities = std::move(arg);
    return Init_PTPMotion_Goal_goal_tolerance(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_Goal msg_;
};

class Init_PTPMotion_Goal_goal_joint_configuration
{
public:
  Init_PTPMotion_Goal_goal_joint_configuration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTPMotion_Goal_maximum_joint_velocities goal_joint_configuration(::franka_msgs::action::PTPMotion_Goal::_goal_joint_configuration_type arg)
  {
    msg_.goal_joint_configuration = std::move(arg);
    return Init_PTPMotion_Goal_maximum_joint_velocities(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_Goal>()
{
  return franka_msgs::action::builder::Init_PTPMotion_Goal_goal_joint_configuration();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_Result_error_message
{
public:
  explicit Init_PTPMotion_Result_error_message(::franka_msgs::action::PTPMotion_Result & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::PTPMotion_Result error_message(::franka_msgs::action::PTPMotion_Result::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_Result msg_;
};

class Init_PTPMotion_Result_target_status
{
public:
  Init_PTPMotion_Result_target_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTPMotion_Result_error_message target_status(::franka_msgs::action::PTPMotion_Result::_target_status_type arg)
  {
    msg_.target_status = std::move(arg);
    return Init_PTPMotion_Result_error_message(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_Result>()
{
  return franka_msgs::action::builder::Init_PTPMotion_Result_target_status();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_Feedback_target_status
{
public:
  Init_PTPMotion_Feedback_target_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::action::PTPMotion_Feedback target_status(::franka_msgs::action::PTPMotion_Feedback::_target_status_type arg)
  {
    msg_.target_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_Feedback>()
{
  return franka_msgs::action::builder::Init_PTPMotion_Feedback_target_status();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_SendGoal_Request_goal
{
public:
  explicit Init_PTPMotion_SendGoal_Request_goal(::franka_msgs::action::PTPMotion_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::PTPMotion_SendGoal_Request goal(::franka_msgs::action::PTPMotion_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_SendGoal_Request msg_;
};

class Init_PTPMotion_SendGoal_Request_goal_id
{
public:
  Init_PTPMotion_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTPMotion_SendGoal_Request_goal goal_id(::franka_msgs::action::PTPMotion_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PTPMotion_SendGoal_Request_goal(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_SendGoal_Request>()
{
  return franka_msgs::action::builder::Init_PTPMotion_SendGoal_Request_goal_id();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_SendGoal_Response_stamp
{
public:
  explicit Init_PTPMotion_SendGoal_Response_stamp(::franka_msgs::action::PTPMotion_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::PTPMotion_SendGoal_Response stamp(::franka_msgs::action::PTPMotion_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_SendGoal_Response msg_;
};

class Init_PTPMotion_SendGoal_Response_accepted
{
public:
  Init_PTPMotion_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTPMotion_SendGoal_Response_stamp accepted(::franka_msgs::action::PTPMotion_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PTPMotion_SendGoal_Response_stamp(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_SendGoal_Response>()
{
  return franka_msgs::action::builder::Init_PTPMotion_SendGoal_Response_accepted();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_GetResult_Request_goal_id
{
public:
  Init_PTPMotion_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::action::PTPMotion_GetResult_Request goal_id(::franka_msgs::action::PTPMotion_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_GetResult_Request>()
{
  return franka_msgs::action::builder::Init_PTPMotion_GetResult_Request_goal_id();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_GetResult_Response_result
{
public:
  explicit Init_PTPMotion_GetResult_Response_result(::franka_msgs::action::PTPMotion_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::PTPMotion_GetResult_Response result(::franka_msgs::action::PTPMotion_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_GetResult_Response msg_;
};

class Init_PTPMotion_GetResult_Response_status
{
public:
  Init_PTPMotion_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTPMotion_GetResult_Response_result status(::franka_msgs::action::PTPMotion_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PTPMotion_GetResult_Response_result(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_GetResult_Response>()
{
  return franka_msgs::action::builder::Init_PTPMotion_GetResult_Response_status();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_PTPMotion_FeedbackMessage_feedback
{
public:
  explicit Init_PTPMotion_FeedbackMessage_feedback(::franka_msgs::action::PTPMotion_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::PTPMotion_FeedbackMessage feedback(::franka_msgs::action::PTPMotion_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_FeedbackMessage msg_;
};

class Init_PTPMotion_FeedbackMessage_goal_id
{
public:
  Init_PTPMotion_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTPMotion_FeedbackMessage_feedback goal_id(::franka_msgs::action::PTPMotion_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PTPMotion_FeedbackMessage_feedback(msg_);
  }

private:
  ::franka_msgs::action::PTPMotion_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::PTPMotion_FeedbackMessage>()
{
  return franka_msgs::action::builder::Init_PTPMotion_FeedbackMessage_goal_id();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__ACTION__DETAIL__PTP_MOTION__BUILDER_HPP_
