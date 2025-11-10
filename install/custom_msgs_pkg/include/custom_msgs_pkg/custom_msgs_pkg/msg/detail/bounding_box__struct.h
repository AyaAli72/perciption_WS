// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_pkg:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BoundingBox in the package custom_msgs_pkg.
typedef struct custom_msgs_pkg__msg__BoundingBox
{
  int32_t x1;
  int32_t y1;
  int32_t x2;
  int32_t y2;
  float confidence;
  rosidl_runtime_c__String class_name;
} custom_msgs_pkg__msg__BoundingBox;

// Struct for a sequence of custom_msgs_pkg__msg__BoundingBox.
typedef struct custom_msgs_pkg__msg__BoundingBox__Sequence
{
  custom_msgs_pkg__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_pkg__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
