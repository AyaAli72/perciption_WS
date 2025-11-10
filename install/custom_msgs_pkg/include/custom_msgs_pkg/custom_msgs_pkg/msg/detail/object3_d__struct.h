// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_pkg:msg/Object3D.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__STRUCT_H_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__STRUCT_H_

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

/// Struct defined in msg/Object3D in the package custom_msgs_pkg.
typedef struct custom_msgs_pkg__msg__Object3D
{
  int32_t x1;
  int32_t y1;
  int32_t x2;
  int32_t y2;
  float xc;
  float yc;
  float zc;
  float confidence;
  rosidl_runtime_c__String class_name;
} custom_msgs_pkg__msg__Object3D;

// Struct for a sequence of custom_msgs_pkg__msg__Object3D.
typedef struct custom_msgs_pkg__msg__Object3D__Sequence
{
  custom_msgs_pkg__msg__Object3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_pkg__msg__Object3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__STRUCT_H_
