// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DOCKING__STRUCT_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DOCKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__doozy_actions__msg__Docking __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__msg__Docking __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Docking_
{
  using Type = Docking_<ContainerAllocator>;

  explicit Docking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->docked_to_target = false;
      this->safe_to_latch = false;
      this->distance_to_target = 0.0;
      this->angle_to_target = 0.0;
      this->target_tf_status = "";
      this->error = "";
    }
  }

  explicit Docking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_tf_status(_alloc),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->docked_to_target = false;
      this->safe_to_latch = false;
      this->distance_to_target = 0.0;
      this->angle_to_target = 0.0;
      this->target_tf_status = "";
      this->error = "";
    }
  }

  // field types and members
  using _docked_to_target_type =
    bool;
  _docked_to_target_type docked_to_target;
  using _safe_to_latch_type =
    bool;
  _safe_to_latch_type safe_to_latch;
  using _distance_to_target_type =
    double;
  _distance_to_target_type distance_to_target;
  using _angle_to_target_type =
    double;
  _angle_to_target_type angle_to_target;
  using _target_tf_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_tf_status_type target_tf_status;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__docked_to_target(
    const bool & _arg)
  {
    this->docked_to_target = _arg;
    return *this;
  }
  Type & set__safe_to_latch(
    const bool & _arg)
  {
    this->safe_to_latch = _arg;
    return *this;
  }
  Type & set__distance_to_target(
    const double & _arg)
  {
    this->distance_to_target = _arg;
    return *this;
  }
  Type & set__angle_to_target(
    const double & _arg)
  {
    this->angle_to_target = _arg;
    return *this;
  }
  Type & set__target_tf_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_tf_status = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::msg::Docking_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::msg::Docking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::msg::Docking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::msg::Docking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::msg::Docking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::msg::Docking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::msg::Docking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::msg::Docking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::msg::Docking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::msg::Docking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__msg__Docking
    std::shared_ptr<doozy_actions::msg::Docking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__msg__Docking
    std::shared_ptr<doozy_actions::msg::Docking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Docking_ & other) const
  {
    if (this->docked_to_target != other.docked_to_target) {
      return false;
    }
    if (this->safe_to_latch != other.safe_to_latch) {
      return false;
    }
    if (this->distance_to_target != other.distance_to_target) {
      return false;
    }
    if (this->angle_to_target != other.angle_to_target) {
      return false;
    }
    if (this->target_tf_status != other.target_tf_status) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Docking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Docking_

// alias to use template instance with default allocator
using Docking =
  doozy_actions::msg::Docking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DOCKING__STRUCT_HPP_
