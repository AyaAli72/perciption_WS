// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_pkg:msg/Detection3DList.idl
// generated code does not contain a copyright notice
#include "custom_msgs_pkg/msg/detail/detection3_d_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "custom_msgs_pkg/msg/detail/object3_d__functions.h"

bool
custom_msgs_pkg__msg__Detection3DList__init(custom_msgs_pkg__msg__Detection3DList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    custom_msgs_pkg__msg__Detection3DList__fini(msg);
    return false;
  }
  // detections
  if (!custom_msgs_pkg__msg__Object3D__Sequence__init(&msg->detections, 0)) {
    custom_msgs_pkg__msg__Detection3DList__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs_pkg__msg__Detection3DList__fini(custom_msgs_pkg__msg__Detection3DList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  custom_msgs_pkg__msg__Object3D__Sequence__fini(&msg->detections);
}

bool
custom_msgs_pkg__msg__Detection3DList__are_equal(const custom_msgs_pkg__msg__Detection3DList * lhs, const custom_msgs_pkg__msg__Detection3DList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // detections
  if (!custom_msgs_pkg__msg__Object3D__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs_pkg__msg__Detection3DList__copy(
  const custom_msgs_pkg__msg__Detection3DList * input,
  custom_msgs_pkg__msg__Detection3DList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // detections
  if (!custom_msgs_pkg__msg__Object3D__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

custom_msgs_pkg__msg__Detection3DList *
custom_msgs_pkg__msg__Detection3DList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_pkg__msg__Detection3DList * msg = (custom_msgs_pkg__msg__Detection3DList *)allocator.allocate(sizeof(custom_msgs_pkg__msg__Detection3DList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_pkg__msg__Detection3DList));
  bool success = custom_msgs_pkg__msg__Detection3DList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs_pkg__msg__Detection3DList__destroy(custom_msgs_pkg__msg__Detection3DList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs_pkg__msg__Detection3DList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs_pkg__msg__Detection3DList__Sequence__init(custom_msgs_pkg__msg__Detection3DList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_pkg__msg__Detection3DList * data = NULL;

  if (size) {
    data = (custom_msgs_pkg__msg__Detection3DList *)allocator.zero_allocate(size, sizeof(custom_msgs_pkg__msg__Detection3DList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_pkg__msg__Detection3DList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_pkg__msg__Detection3DList__fini(&data[i - 1]);
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
custom_msgs_pkg__msg__Detection3DList__Sequence__fini(custom_msgs_pkg__msg__Detection3DList__Sequence * array)
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
      custom_msgs_pkg__msg__Detection3DList__fini(&array->data[i]);
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

custom_msgs_pkg__msg__Detection3DList__Sequence *
custom_msgs_pkg__msg__Detection3DList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_pkg__msg__Detection3DList__Sequence * array = (custom_msgs_pkg__msg__Detection3DList__Sequence *)allocator.allocate(sizeof(custom_msgs_pkg__msg__Detection3DList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_pkg__msg__Detection3DList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs_pkg__msg__Detection3DList__Sequence__destroy(custom_msgs_pkg__msg__Detection3DList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs_pkg__msg__Detection3DList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs_pkg__msg__Detection3DList__Sequence__are_equal(const custom_msgs_pkg__msg__Detection3DList__Sequence * lhs, const custom_msgs_pkg__msg__Detection3DList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_pkg__msg__Detection3DList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_pkg__msg__Detection3DList__Sequence__copy(
  const custom_msgs_pkg__msg__Detection3DList__Sequence * input,
  custom_msgs_pkg__msg__Detection3DList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_pkg__msg__Detection3DList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs_pkg__msg__Detection3DList * data =
      (custom_msgs_pkg__msg__Detection3DList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_pkg__msg__Detection3DList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs_pkg__msg__Detection3DList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs_pkg__msg__Detection3DList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
