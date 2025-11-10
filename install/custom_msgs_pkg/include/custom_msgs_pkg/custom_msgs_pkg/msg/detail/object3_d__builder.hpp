// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_pkg:msg/Object3D.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__BUILDER_HPP_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_pkg/msg/detail/object3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_pkg
{

namespace msg
{

namespace builder
{

class Init_Object3D_class_name
{
public:
  explicit Init_Object3D_class_name(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  ::custom_msgs_pkg::msg::Object3D class_name(::custom_msgs_pkg::msg::Object3D::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_confidence
{
public:
  explicit Init_Object3D_confidence(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_class_name confidence(::custom_msgs_pkg::msg::Object3D::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Object3D_class_name(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_zc
{
public:
  explicit Init_Object3D_zc(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_confidence zc(::custom_msgs_pkg::msg::Object3D::_zc_type arg)
  {
    msg_.zc = std::move(arg);
    return Init_Object3D_confidence(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_yc
{
public:
  explicit Init_Object3D_yc(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_zc yc(::custom_msgs_pkg::msg::Object3D::_yc_type arg)
  {
    msg_.yc = std::move(arg);
    return Init_Object3D_zc(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_xc
{
public:
  explicit Init_Object3D_xc(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_yc xc(::custom_msgs_pkg::msg::Object3D::_xc_type arg)
  {
    msg_.xc = std::move(arg);
    return Init_Object3D_yc(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_y2
{
public:
  explicit Init_Object3D_y2(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_xc y2(::custom_msgs_pkg::msg::Object3D::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Object3D_xc(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_x2
{
public:
  explicit Init_Object3D_x2(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_y2 x2(::custom_msgs_pkg::msg::Object3D::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Object3D_y2(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_y1
{
public:
  explicit Init_Object3D_y1(::custom_msgs_pkg::msg::Object3D & msg)
  : msg_(msg)
  {}
  Init_Object3D_x2 y1(::custom_msgs_pkg::msg::Object3D::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Object3D_x2(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

class Init_Object3D_x1
{
public:
  Init_Object3D_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object3D_y1 x1(::custom_msgs_pkg::msg::Object3D::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Object3D_y1(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Object3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_pkg::msg::Object3D>()
{
  return custom_msgs_pkg::msg::builder::Init_Object3D_x1();
}

}  // namespace custom_msgs_pkg

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__BUILDER_HPP_
