// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:action/PTPMotion.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__PTP_MOTION__STRUCT_H_
#define FRANKA_MSGS__ACTION__DETAIL__PTP_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_joint_configuration'
// Member 'maximum_joint_velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_Goal
{
  rosidl_runtime_c__double__Sequence goal_joint_configuration;
  /// The maximum allowed joint velocities for the motion.
  /// [rad/s]
  rosidl_runtime_c__double__Sequence maximum_joint_velocities;
  /// The acceptable goal tolerance for the motion. The 'target reached condition is met when
  /// - the absolute difference between the current and goal joint positions is within this goal_tolerance
  /// - the joint velocities are below a small threshold
  /// [rad]
  double goal_tolerance;
} franka_msgs__action__PTPMotion_Goal;

// Struct for a sequence of franka_msgs__action__PTPMotion_Goal.
typedef struct franka_msgs__action__PTPMotion_Goal__Sequence
{
  franka_msgs__action__PTPMotion_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target_status'
#include "franka_msgs/msg/detail/target_status__struct.h"
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_Result
{
  franka_msgs__msg__TargetStatus target_status;
  /// In case of failure, an error message describing the issue
  rosidl_runtime_c__String error_message;
} franka_msgs__action__PTPMotion_Result;

// Struct for a sequence of franka_msgs__action__PTPMotion_Result.
typedef struct franka_msgs__action__PTPMotion_Result__Sequence
{
  franka_msgs__action__PTPMotion_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target_status'
// already included above
// #include "franka_msgs/msg/detail/target_status__struct.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_Feedback
{
  franka_msgs__msg__TargetStatus target_status;
} franka_msgs__action__PTPMotion_Feedback;

// Struct for a sequence of franka_msgs__action__PTPMotion_Feedback.
typedef struct franka_msgs__action__PTPMotion_Feedback__Sequence
{
  franka_msgs__action__PTPMotion_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "franka_msgs/action/detail/ptp_motion__struct.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  franka_msgs__action__PTPMotion_Goal goal;
} franka_msgs__action__PTPMotion_SendGoal_Request;

// Struct for a sequence of franka_msgs__action__PTPMotion_SendGoal_Request.
typedef struct franka_msgs__action__PTPMotion_SendGoal_Request__Sequence
{
  franka_msgs__action__PTPMotion_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} franka_msgs__action__PTPMotion_SendGoal_Response;

// Struct for a sequence of franka_msgs__action__PTPMotion_SendGoal_Response.
typedef struct franka_msgs__action__PTPMotion_SendGoal_Response__Sequence
{
  franka_msgs__action__PTPMotion_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} franka_msgs__action__PTPMotion_GetResult_Request;

// Struct for a sequence of franka_msgs__action__PTPMotion_GetResult_Request.
typedef struct franka_msgs__action__PTPMotion_GetResult_Request__Sequence
{
  franka_msgs__action__PTPMotion_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_GetResult_Response
{
  int8_t status;
  franka_msgs__action__PTPMotion_Result result;
} franka_msgs__action__PTPMotion_GetResult_Response;

// Struct for a sequence of franka_msgs__action__PTPMotion_GetResult_Response.
typedef struct franka_msgs__action__PTPMotion_GetResult_Response__Sequence
{
  franka_msgs__action__PTPMotion_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.h"

/// Struct defined in action/PTPMotion in the package franka_msgs.
typedef struct franka_msgs__action__PTPMotion_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  franka_msgs__action__PTPMotion_Feedback feedback;
} franka_msgs__action__PTPMotion_FeedbackMessage;

// Struct for a sequence of franka_msgs__action__PTPMotion_FeedbackMessage.
typedef struct franka_msgs__action__PTPMotion_FeedbackMessage__Sequence
{
  franka_msgs__action__PTPMotion_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__PTPMotion_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__ACTION__DETAIL__PTP_MOTION__STRUCT_H_
