// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_pkg:msg/Detection3DList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION3_D_LIST__TRAITS_HPP_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION3_D_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs_pkg/msg/detail/detection3_d_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "custom_msgs_pkg/msg/detail/object3_d__traits.hpp"

namespace custom_msgs_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection3DList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection3DList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection3DList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs_pkg

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs_pkg::msg::Detection3DList & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs_pkg::msg::Detection3DList & msg)
{
  return custom_msgs_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs_pkg::msg::Detection3DList>()
{
  return "custom_msgs_pkg::msg::Detection3DList";
}

template<>
inline const char * name<custom_msgs_pkg::msg::Detection3DList>()
{
  return "custom_msgs_pkg/msg/Detection3DList";
}

template<>
struct has_fixed_size<custom_msgs_pkg::msg::Detection3DList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs_pkg::msg::Detection3DList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs_pkg::msg::Detection3DList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION3_D_LIST__TRAITS_HPP_
