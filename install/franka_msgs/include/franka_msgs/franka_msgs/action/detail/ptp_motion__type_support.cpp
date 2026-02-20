// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:action/PTPMotion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franka_msgs/action/detail/ptp_motion__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_Goal(_init);
}

void PTPMotion_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_Goal *>(message_memory);
  typed_message->~PTPMotion_Goal();
}

size_t size_function__PTPMotion_Goal__goal_joint_configuration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PTPMotion_Goal__goal_joint_configuration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PTPMotion_Goal__goal_joint_configuration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PTPMotion_Goal__goal_joint_configuration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PTPMotion_Goal__goal_joint_configuration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PTPMotion_Goal__goal_joint_configuration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PTPMotion_Goal__goal_joint_configuration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PTPMotion_Goal__goal_joint_configuration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PTPMotion_Goal__maximum_joint_velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PTPMotion_Goal__maximum_joint_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PTPMotion_Goal__maximum_joint_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PTPMotion_Goal__maximum_joint_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PTPMotion_Goal__maximum_joint_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PTPMotion_Goal__maximum_joint_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PTPMotion_Goal__maximum_joint_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PTPMotion_Goal__maximum_joint_velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_Goal_message_member_array[3] = {
  {
    "goal_joint_configuration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_Goal, goal_joint_configuration),  // bytes offset in struct
    nullptr,  // default value
    size_function__PTPMotion_Goal__goal_joint_configuration,  // size() function pointer
    get_const_function__PTPMotion_Goal__goal_joint_configuration,  // get_const(index) function pointer
    get_function__PTPMotion_Goal__goal_joint_configuration,  // get(index) function pointer
    fetch_function__PTPMotion_Goal__goal_joint_configuration,  // fetch(index, &value) function pointer
    assign_function__PTPMotion_Goal__goal_joint_configuration,  // assign(index, value) function pointer
    resize_function__PTPMotion_Goal__goal_joint_configuration  // resize(index) function pointer
  },
  {
    "maximum_joint_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_Goal, maximum_joint_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__PTPMotion_Goal__maximum_joint_velocities,  // size() function pointer
    get_const_function__PTPMotion_Goal__maximum_joint_velocities,  // get_const(index) function pointer
    get_function__PTPMotion_Goal__maximum_joint_velocities,  // get(index) function pointer
    fetch_function__PTPMotion_Goal__maximum_joint_velocities,  // fetch(index, &value) function pointer
    assign_function__PTPMotion_Goal__maximum_joint_velocities,  // assign(index, value) function pointer
    resize_function__PTPMotion_Goal__maximum_joint_velocities  // resize(index) function pointer
  },
  {
    "goal_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_Goal, goal_tolerance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_Goal_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_Goal",  // message name
  3,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_Goal),
  PTPMotion_Goal_message_member_array,  // message members
  PTPMotion_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_Goal>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_Goal)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_Result(_init);
}

void PTPMotion_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_Result *>(message_memory);
  typed_message->~PTPMotion_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_Result_message_member_array[2] = {
  {
    "target_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::msg::TargetStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_Result, target_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_Result, error_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_Result_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_Result",  // message name
  2,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_Result),
  PTPMotion_Result_message_member_array,  // message members
  PTPMotion_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_Result>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_Result)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_Feedback(_init);
}

void PTPMotion_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_Feedback *>(message_memory);
  typed_message->~PTPMotion_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_Feedback_message_member_array[1] = {
  {
    "target_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::msg::TargetStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_Feedback, target_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_Feedback_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_Feedback",  // message name
  1,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_Feedback),
  PTPMotion_Feedback_message_member_array,  // message members
  PTPMotion_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_Feedback>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_Feedback)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_SendGoal_Request(_init);
}

void PTPMotion_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_SendGoal_Request *>(message_memory);
  typed_message->~PTPMotion_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::action::PTPMotion_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_SendGoal_Request_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_SendGoal_Request),
  PTPMotion_SendGoal_Request_message_member_array,  // message members
  PTPMotion_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_SendGoal_Request>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_SendGoal_Request)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_SendGoal_Response(_init);
}

void PTPMotion_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_SendGoal_Response *>(message_memory);
  typed_message->~PTPMotion_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_SendGoal_Response_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_SendGoal_Response),
  PTPMotion_SendGoal_Response_message_member_array,  // message members
  PTPMotion_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_SendGoal_Response>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_SendGoal_Response)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PTPMotion_SendGoal_service_members = {
  "franka_msgs::action",  // service namespace
  "PTPMotion_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<franka_msgs::action::PTPMotion_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PTPMotion_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::action::PTPMotion_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_msgs::action::PTPMotion_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_msgs::action::PTPMotion_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<franka_msgs::action::PTPMotion_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_GetResult_Request(_init);
}

void PTPMotion_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_GetResult_Request *>(message_memory);
  typed_message->~PTPMotion_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_GetResult_Request_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_GetResult_Request),
  PTPMotion_GetResult_Request_message_member_array,  // message members
  PTPMotion_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_GetResult_Request>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_GetResult_Request)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_GetResult_Response(_init);
}

void PTPMotion_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_GetResult_Response *>(message_memory);
  typed_message->~PTPMotion_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::action::PTPMotion_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_GetResult_Response_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_GetResult_Response),
  PTPMotion_GetResult_Response_message_member_array,  // message members
  PTPMotion_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_GetResult_Response>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_GetResult_Response)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PTPMotion_GetResult_service_members = {
  "franka_msgs::action",  // service namespace
  "PTPMotion_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<franka_msgs::action::PTPMotion_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PTPMotion_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::action::PTPMotion_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_msgs::action::PTPMotion_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_msgs::action::PTPMotion_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<franka_msgs::action::PTPMotion_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PTPMotion_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::action::PTPMotion_FeedbackMessage(_init);
}

void PTPMotion_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::action::PTPMotion_FeedbackMessage *>(message_memory);
  typed_message->~PTPMotion_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PTPMotion_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::action::PTPMotion_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::action::PTPMotion_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PTPMotion_FeedbackMessage_message_members = {
  "franka_msgs::action",  // message namespace
  "PTPMotion_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(franka_msgs::action::PTPMotion_FeedbackMessage),
  PTPMotion_FeedbackMessage_message_member_array,  // message members
  PTPMotion_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PTPMotion_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PTPMotion_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PTPMotion_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_FeedbackMessage>()
{
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_FeedbackMessage)() {
  return &::franka_msgs::action::rosidl_typesupport_introspection_cpp::PTPMotion_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
