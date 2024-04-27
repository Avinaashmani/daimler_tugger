// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from doozy_actions:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__STRUCT_HPP_
#define DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__doozy_actions__msg__Navigation __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__msg__Navigation __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Navigation_
{
  using Type = Navigation_<ContainerAllocator>;

  explicit Navigation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moved_to_spot = false;
      this->idx_of_dolly = "";
      this->error = "";
    }
  }

  explicit Navigation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : idx_of_dolly(_alloc),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moved_to_spot = false;
      this->idx_of_dolly = "";
      this->error = "";
    }
  }

  // field types and members
  using _moved_to_spot_type =
    bool;
  _moved_to_spot_type moved_to_spot;
  using _idx_of_dolly_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _idx_of_dolly_type idx_of_dolly;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__moved_to_spot(
    const bool & _arg)
  {
    this->moved_to_spot = _arg;
    return *this;
  }
  Type & set__idx_of_dolly(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->idx_of_dolly = _arg;
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
    doozy_actions::msg::Navigation_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::msg::Navigation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::msg::Navigation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::msg::Navigation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::msg::Navigation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::msg::Navigation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::msg::Navigation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::msg::Navigation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::msg::Navigation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::msg::Navigation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__msg__Navigation
    std::shared_ptr<doozy_actions::msg::Navigation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__msg__Navigation
    std::shared_ptr<doozy_actions::msg::Navigation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_ & other) const
  {
    if (this->moved_to_spot != other.moved_to_spot) {
      return false;
    }
    if (this->idx_of_dolly != other.idx_of_dolly) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_

// alias to use template instance with default allocator
using Navigation =
  doozy_actions::msg::Navigation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__MSG__DETAIL__NAVIGATION__STRUCT_HPP_
