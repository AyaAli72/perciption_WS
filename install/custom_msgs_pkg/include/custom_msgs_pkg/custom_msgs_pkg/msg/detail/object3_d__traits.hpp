// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_pkg:msg/Object3D.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__TRAITS_HPP_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs_pkg/msg/detail/object3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << ", ";
  }

  // member: xc
  {
    out << "xc: ";
    rosidl_generator_traits::value_to_yaml(msg.xc, out);
    out << ", ";
  }

  // member: yc
  {
    out << "yc: ";
    rosidl_generator_traits::value_to_yaml(msg.yc, out);
    out << ", ";
  }

  // member: zc
  {
    out << "zc: ";
    rosidl_generator_traits::value_to_yaml(msg.zc, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }

  // member: xc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xc: ";
    rosidl_generator_traits::value_to_yaml(msg.xc, out);
    out << "\n";
  }

  // member: yc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yc: ";
    rosidl_generator_traits::value_to_yaml(msg.yc, out);
    out << "\n";
  }

  // member: zc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zc: ";
    rosidl_generator_traits::value_to_yaml(msg.zc, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object3D & msg, bool use_flow_style = false)
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
  const custom_msgs_pkg::msg::Object3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs_pkg::msg::Object3D & msg)
{
  return custom_msgs_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs_pkg::msg::Object3D>()
{
  return "custom_msgs_pkg::msg::Object3D";
}

template<>
inline const char * name<custom_msgs_pkg::msg::Object3D>()
{
  return "custom_msgs_pkg/msg/Object3D";
}

template<>
struct has_fixed_size<custom_msgs_pkg::msg::Object3D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs_pkg::msg::Object3D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs_pkg::msg::Object3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__TRAITS_HPP_
