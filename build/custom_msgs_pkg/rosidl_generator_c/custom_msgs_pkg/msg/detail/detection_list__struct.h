// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_pkg:msg/DetectionList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION_LIST__STRUCT_H_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "custom_msgs_pkg/msg/detail/bounding_box__struct.h"

/// Struct defined in msg/DetectionList in the package custom_msgs_pkg.
typedef struct custom_msgs_pkg__msg__DetectionList
{
  std_msgs__msg__Header header;
  custom_msgs_pkg__msg__BoundingBox__Sequence detections;
} custom_msgs_pkg__msg__DetectionList;

// Struct for a sequence of custom_msgs_pkg__msg__DetectionList.
typedef struct custom_msgs_pkg__msg__DetectionList__Sequence
{
  custom_msgs_pkg__msg__DetectionList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_pkg__msg__DetectionList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION_LIST__STRUCT_H_
