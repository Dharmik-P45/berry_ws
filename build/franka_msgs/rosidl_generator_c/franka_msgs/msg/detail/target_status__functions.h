// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from franka_msgs:msg/TargetStatus.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__FUNCTIONS_H_
#define FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "franka_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "franka_msgs/msg/detail/target_status__struct.h"

/// Initialize msg/TargetStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__msg__TargetStatus
 * )) before or use
 * franka_msgs__msg__TargetStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__TargetStatus__init(franka_msgs__msg__TargetStatus * msg);

/// Finalize msg/TargetStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__TargetStatus__fini(franka_msgs__msg__TargetStatus * msg);

/// Create msg/TargetStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__msg__TargetStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__msg__TargetStatus *
franka_msgs__msg__TargetStatus__create();

/// Destroy msg/TargetStatus message.
/**
 * It calls
 * franka_msgs__msg__TargetStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__TargetStatus__destroy(franka_msgs__msg__TargetStatus * msg);

/// Check for msg/TargetStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__TargetStatus__are_equal(const franka_msgs__msg__TargetStatus * lhs, const franka_msgs__msg__TargetStatus * rhs);

/// Copy a msg/TargetStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__TargetStatus__copy(
  const franka_msgs__msg__TargetStatus * input,
  franka_msgs__msg__TargetStatus * output);

/// Initialize array of msg/TargetStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__msg__TargetStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__TargetStatus__Sequence__init(franka_msgs__msg__TargetStatus__Sequence * array, size_t size);

/// Finalize array of msg/TargetStatus messages.
/**
 * It calls
 * franka_msgs__msg__TargetStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__TargetStatus__Sequence__fini(franka_msgs__msg__TargetStatus__Sequence * array);

/// Create array of msg/TargetStatus messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__msg__TargetStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__msg__TargetStatus__Sequence *
franka_msgs__msg__TargetStatus__Sequence__create(size_t size);

/// Destroy array of msg/TargetStatus messages.
/**
 * It calls
 * franka_msgs__msg__TargetStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__TargetStatus__Sequence__destroy(franka_msgs__msg__TargetStatus__Sequence * array);

/// Check for msg/TargetStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__TargetStatus__Sequence__are_equal(const franka_msgs__msg__TargetStatus__Sequence * lhs, const franka_msgs__msg__TargetStatus__Sequence * rhs);

/// Copy an array of msg/TargetStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__TargetStatus__Sequence__copy(
  const franka_msgs__msg__TargetStatus__Sequence * input,
  franka_msgs__msg__TargetStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__TARGET_STATUS__FUNCTIONS_H_
