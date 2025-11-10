// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_pkg:msg/Detection3DList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION3_D_LIST__BUILDER_HPP_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION3_D_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_pkg/msg/detail/detection3_d_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_pkg
{

namespace msg
{

namespace builder
{

class Init_Detection3DList_detections
{
public:
  explicit Init_Detection3DList_detections(::custom_msgs_pkg::msg::Detection3DList & msg)
  : msg_(msg)
  {}
  ::custom_msgs_pkg::msg::Detection3DList detections(::custom_msgs_pkg::msg::Detection3DList::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Detection3DList msg_;
};

class Init_Detection3DList_header
{
public:
  Init_Detection3DList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection3DList_detections header(::custom_msgs_pkg::msg::Detection3DList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detection3DList_detections(msg_);
  }

private:
  ::custom_msgs_pkg::msg::Detection3DList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_pkg::msg::Detection3DList>()
{
  return custom_msgs_pkg::msg::builder::Init_Detection3DList_header();
}

}  // namespace custom_msgs_pkg

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__DETECTION3_D_LIST__BUILDER_HPP_
