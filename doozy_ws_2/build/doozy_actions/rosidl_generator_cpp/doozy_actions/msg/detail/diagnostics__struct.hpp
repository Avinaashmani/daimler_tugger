// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from doozy_actions:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__STRUCT_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__doozy_actions__msg__Diagnostics __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__msg__Diagnostics __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Diagnostics_
{
  using Type = Diagnostics_<ContainerAllocator>;

  explicit Diagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_reached_position = false;
      this->safe_to_latch = "";
      this->is_latched = false;
      this->docking_status = "";
      this->sick_detection = false;
      this->camera_health = "";
      this->error = "";
    }
  }

  explicit Diagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : safe_to_latch(_alloc),
    docking_status(_alloc),
    camera_health(_alloc),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_reached_position = false;
      this->safe_to_latch = "";
      this->is_latched = false;
      this->docking_status = "";
      this->sick_detection = false;
      this->camera_health = "";
      this->error = "";
    }
  }

  // field types and members
  using _has_reached_position_type =
    bool;
  _has_reached_position_type has_reached_position;
  using _safe_to_latch_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _safe_to_latch_type safe_to_latch;
  using _is_latched_type =
    bool;
  _is_latched_type is_latched;
  using _docking_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _docking_status_type docking_status;
  using _sick_detection_type =
    bool;
  _sick_detection_type sick_detection;
  using _camera_health_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_health_type camera_health;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__has_reached_position(
    const bool & _arg)
  {
    this->has_reached_position = _arg;
    return *this;
  }
  Type & set__safe_to_latch(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->safe_to_latch = _arg;
    return *this;
  }
  Type & set__is_latched(
    const bool & _arg)
  {
    this->is_latched = _arg;
    return *this;
  }
  Type & set__docking_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->docking_status = _arg;
    return *this;
  }
  Type & set__sick_detection(
    const bool & _arg)
  {
    this->sick_detection = _arg;
    return *this;
  }
  Type & set__camera_health(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_health = _arg;
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
    doozy_actions::msg::Diagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::msg::Diagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::msg::Diagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::msg::Diagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__msg__Diagnostics
    std::shared_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__msg__Diagnostics
    std::shared_ptr<doozy_actions::msg::Diagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Diagnostics_ & other) const
  {
    if (this->has_reached_position != other.has_reached_position) {
      return false;
    }
    if (this->safe_to_latch != other.safe_to_latch) {
      return false;
    }
    if (this->is_latched != other.is_latched) {
      return false;
    }
    if (this->docking_status != other.docking_status) {
      return false;
    }
    if (this->sick_detection != other.sick_detection) {
      return false;
    }
    if (this->camera_health != other.camera_health) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Diagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Diagnostics_

// alias to use template instance with default allocator
using Diagnostics =
  doozy_actions::msg::Diagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__MSG__DETAIL__DIAGNOSTICS__STRUCT_HPP_
