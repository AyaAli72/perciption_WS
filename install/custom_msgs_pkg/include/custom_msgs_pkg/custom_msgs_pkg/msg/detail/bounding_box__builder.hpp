// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_pkg:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_pkg/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_pkg
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_class_name
{
public:
  explicit Init_BoundingBox_class_name(::custom_msgs_pkg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::custom_msgs_pkg::msg::BoundingBox class_name(::custom_msgs_pkg::msg::BoundingBox::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_pkg::msg::BoundingBox msg_;
};

class Init_BoundingBox_confidence
{
public:
  explicit Init_BoundingBox_confidence(::custom_msgs_pkg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_class_name confidence(::custom_msgs_pkg::msg::BoundingBox::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_BoundingBox_class_name(msg_);
  }

private:
  ::custom_msgs_pkg::msg::BoundingBox msg_;
};

class Init_BoundingBox_y2
{
public:
  explicit Init_BoundingBox_y2(::custom_msgs_pkg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_confidence y2(::custom_msgs_pkg::msg::BoundingBox::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_BoundingBox_confidence(msg_);
  }

private:
  ::custom_msgs_pkg::msg::BoundingBox msg_;
};

class Init_BoundingBox_x2
{
public:
  explicit Init_BoundingBox_x2(::custom_msgs_pkg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_y2 x2(::custom_msgs_pkg::msg::BoundingBox::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_BoundingBox_y2(msg_);
  }

private:
  ::custom_msgs_pkg::msg::BoundingBox msg_;
};

class Init_BoundingBox_y1
{
public:
  explicit Init_BoundingBox_y1(::custom_msgs_pkg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_x2 y1(::custom_msgs_pkg::msg::BoundingBox::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_BoundingBox_x2(msg_);
  }

private:
  ::custom_msgs_pkg::msg::BoundingBox msg_;
};

class Init_BoundingBox_x1
{
public:
  Init_BoundingBox_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_y1 x1(::custom_msgs_pkg::msg::BoundingBox::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_BoundingBox_y1(msg_);
  }

private:
  ::custom_msgs_pkg::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_pkg::msg::BoundingBox>()
{
  return custom_msgs_pkg::msg::builder::Init_BoundingBox_x1();
}

}  // namespace custom_msgs_pkg

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
