// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/TargetStatus.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  franka_msgs__msg__TargetStatus__IDLE = 0
};

/// Constant 'EXECUTING'.
/**
  * EXECUTING: The robot is currently executing the motion
 */
enum
{
  franka_msgs__msg__TargetStatus__EXECUTING = 1
};

/// Constant 'TARGET_REACHED'.
/**
  * TARGET_REACHED: The robot has reached the target position given two conditions:
  * - the absolute difference between the current and goal joint positions is within the goal_tolerance
  * - the joint velocities are below a small threshold
 */
enum
{
  franka_msgs__msg__TargetStatus__TARGET_REACHED = 2
};

/// Constant 'ABORTED'.
/**
  * ABORTED: The motion was aborted due to an error or external intervention
 */
enum
{
  franka_msgs__msg__TargetStatus__ABORTED = 3
};

/// Struct defined in msg/TargetStatus in the package franka_msgs.
/**
  * The status of a motion action
  * IDLE: The robot is idle, no motion is being executed
 */
typedef struct franka_msgs__msg__TargetStatus
{
  /// The current status of the motion (one of the above states)
  uint8_t status;
} franka_msgs__msg__TargetStatus;

// Struct for a sequence of franka_msgs__msg__TargetStatus.
typedef struct franka_msgs__msg__TargetStatus__Sequence
{
  franka_msgs__msg__TargetStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__TargetStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__STRUCT_H_
