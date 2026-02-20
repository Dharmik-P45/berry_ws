// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/TargetStatus.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/target_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
franka_msgs__msg__TargetStatus__init(franka_msgs__msg__TargetStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
franka_msgs__msg__TargetStatus__fini(franka_msgs__msg__TargetStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
franka_msgs__msg__TargetStatus__are_equal(const franka_msgs__msg__TargetStatus * lhs, const franka_msgs__msg__TargetStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
franka_msgs__msg__TargetStatus__copy(
  const franka_msgs__msg__TargetStatus * input,
  franka_msgs__msg__TargetStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

franka_msgs__msg__TargetStatus *
franka_msgs__msg__TargetStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__TargetStatus * msg = (franka_msgs__msg__TargetStatus *)allocator.allocate(sizeof(franka_msgs__msg__TargetStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__TargetStatus));
  bool success = franka_msgs__msg__TargetStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__TargetStatus__destroy(franka_msgs__msg__TargetStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__TargetStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__TargetStatus__Sequence__init(franka_msgs__msg__TargetStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__TargetStatus * data = NULL;

  if (size) {
    data = (franka_msgs__msg__TargetStatus *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__TargetStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__TargetStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__TargetStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
franka_msgs__msg__TargetStatus__Sequence__fini(franka_msgs__msg__TargetStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      franka_msgs__msg__TargetStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

franka_msgs__msg__TargetStatus__Sequence *
franka_msgs__msg__TargetStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__TargetStatus__Sequence * array = (franka_msgs__msg__TargetStatus__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__TargetStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__TargetStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__TargetStatus__Sequence__destroy(franka_msgs__msg__TargetStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__TargetStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__TargetStatus__Sequence__are_equal(const franka_msgs__msg__TargetStatus__Sequence * lhs, const franka_msgs__msg__TargetStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__TargetStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__TargetStatus__Sequence__copy(
  const franka_msgs__msg__TargetStatus__Sequence * input,
  franka_msgs__msg__TargetStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__TargetStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__TargetStatus * data =
      (franka_msgs__msg__TargetStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__TargetStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__TargetStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__TargetStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
