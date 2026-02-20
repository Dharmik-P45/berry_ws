// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/TargetStatus.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/target_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetStatus_status
{
public:
  Init_TargetStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::msg::TargetStatus status(::franka_msgs::msg::TargetStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::TargetStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::TargetStatus>()
{
  return franka_msgs::msg::builder::Init_TargetStatus_status();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__BUILDER_HPP_
