// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_pkg:msg/Object3D.idl
// generated code does not contain a copyright notice
#include "custom_msgs_pkg/msg/detail/object3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs_pkg__msg__Object3D__init(custom_msgs_pkg__msg__Object3D * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  // xc
  // yc
  // zc
  // confidence
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    custom_msgs_pkg__msg__Object3D__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs_pkg__msg__Object3D__fini(custom_msgs_pkg__msg__Object3D * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
  // xc
  // yc
  // zc
  // confidence
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
custom_msgs_pkg__msg__Object3D__are_equal(const custom_msgs_pkg__msg__Object3D * lhs, const custom_msgs_pkg__msg__Object3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // xc
  if (lhs->xc != rhs->xc) {
    return false;
  }
  // yc
  if (lhs->yc != rhs->yc) {
    return false;
  }
  // zc
  if (lhs->zc != rhs->zc) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs_pkg__msg__Object3D__copy(
  const custom_msgs_pkg__msg__Object3D * input,
  custom_msgs_pkg__msg__Object3D * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // xc
  output->xc = input->xc;
  // yc
  output->yc = input->yc;
  // zc
  output->zc = input->zc;
  // confidence
  output->confidence = input->confidence;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

custom_msgs_pkg__msg__Object3D *
custom_msgs_pkg__msg__Object3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_pkg__msg__Object3D * msg = (custom_msgs_pkg__msg__Object3D *)allocator.allocate(sizeof(custom_msgs_pkg__msg__Object3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_pkg__msg__Object3D));
  bool success = custom_msgs_pkg__msg__Object3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs_pkg__msg__Object3D__destroy(custom_msgs_pkg__msg__Object3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs_pkg__msg__Object3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs_pkg__msg__Object3D__Sequence__init(custom_msgs_pkg__msg__Object3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_pkg__msg__Object3D * data = NULL;

  if (size) {
    data = (custom_msgs_pkg__msg__Object3D *)allocator.zero_allocate(size, sizeof(custom_msgs_pkg__msg__Object3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_pkg__msg__Object3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_pkg__msg__Object3D__fini(&data[i - 1]);
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
custom_msgs_pkg__msg__Object3D__Sequence__fini(custom_msgs_pkg__msg__Object3D__Sequence * array)
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
      custom_msgs_pkg__msg__Object3D__fini(&array->data[i]);
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

custom_msgs_pkg__msg__Object3D__Sequence *
custom_msgs_pkg__msg__Object3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_pkg__msg__Object3D__Sequence * array = (custom_msgs_pkg__msg__Object3D__Sequence *)allocator.allocate(sizeof(custom_msgs_pkg__msg__Object3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_pkg__msg__Object3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs_pkg__msg__Object3D__Sequence__destroy(custom_msgs_pkg__msg__Object3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs_pkg__msg__Object3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs_pkg__msg__Object3D__Sequence__are_equal(const custom_msgs_pkg__msg__Object3D__Sequence * lhs, const custom_msgs_pkg__msg__Object3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_pkg__msg__Object3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_pkg__msg__Object3D__Sequence__copy(
  const custom_msgs_pkg__msg__Object3D__Sequence * input,
  custom_msgs_pkg__msg__Object3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_pkg__msg__Object3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs_pkg__msg__Object3D * data =
      (custom_msgs_pkg__msg__Object3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_pkg__msg__Object3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs_pkg__msg__Object3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs_pkg__msg__Object3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
