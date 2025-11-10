// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_pkg:msg/Object3D.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__STRUCT_HPP_
#define CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs_pkg__msg__Object3D __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_pkg__msg__Object3D __declspec(deprecated)
#endif

namespace custom_msgs_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object3D_
{
  using Type = Object3D_<ContainerAllocator>;

  explicit Object3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0l;
      this->y1 = 0l;
      this->x2 = 0l;
      this->y2 = 0l;
      this->xc = 0.0f;
      this->yc = 0.0f;
      this->zc = 0.0f;
      this->confidence = 0.0f;
      this->class_name = "";
    }
  }

  explicit Object3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0l;
      this->y1 = 0l;
      this->x2 = 0l;
      this->y2 = 0l;
      this->xc = 0.0f;
      this->yc = 0.0f;
      this->zc = 0.0f;
      this->confidence = 0.0f;
      this->class_name = "";
    }
  }

  // field types and members
  using _x1_type =
    int32_t;
  _x1_type x1;
  using _y1_type =
    int32_t;
  _y1_type y1;
  using _x2_type =
    int32_t;
  _x2_type x2;
  using _y2_type =
    int32_t;
  _y2_type y2;
  using _xc_type =
    float;
  _xc_type xc;
  using _yc_type =
    float;
  _yc_type yc;
  using _zc_type =
    float;
  _zc_type zc;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;

  // setters for named parameter idiom
  Type & set__x1(
    const int32_t & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const int32_t & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const int32_t & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const int32_t & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__xc(
    const float & _arg)
  {
    this->xc = _arg;
    return *this;
  }
  Type & set__yc(
    const float & _arg)
  {
    this->yc = _arg;
    return *this;
  }
  Type & set__zc(
    const float & _arg)
  {
    this->zc = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_pkg::msg::Object3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_pkg::msg::Object3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_pkg::msg::Object3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_pkg::msg::Object3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_pkg__msg__Object3D
    std::shared_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_pkg__msg__Object3D
    std::shared_ptr<custom_msgs_pkg::msg::Object3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object3D_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->xc != other.xc) {
      return false;
    }
    if (this->yc != other.yc) {
      return false;
    }
    if (this->zc != other.zc) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object3D_

// alias to use template instance with default allocator
using Object3D =
  custom_msgs_pkg::msg::Object3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_pkg

#endif  // CUSTOM_MSGS_PKG__MSG__DETAIL__OBJECT3_D__STRUCT_HPP_
