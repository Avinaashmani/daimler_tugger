// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice

#ifndef DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__STRUCT_HPP_
#define DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_Goal __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_Goal __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_Goal_
{
  using Type = DollyDock_Goal_<ContainerAllocator>;

  explicit DollyDock_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_point = false;
      this->idx_no = "";
    }
  }

  explicit DollyDock_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : idx_no(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached_point = false;
      this->idx_no = "";
    }
  }

  // field types and members
  using _reached_point_type =
    bool;
  _reached_point_type reached_point;
  using _idx_no_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _idx_no_type idx_no;

  // setters for named parameter idiom
  Type & set__reached_point(
    const bool & _arg)
  {
    this->reached_point = _arg;
    return *this;
  }
  Type & set__idx_no(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->idx_no = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_Goal
    std::shared_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_Goal
    std::shared_ptr<doozy_actions::action::DollyDock_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_Goal_ & other) const
  {
    if (this->reached_point != other.reached_point) {
      return false;
    }
    if (this->idx_no != other.idx_no) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_Goal_

// alias to use template instance with default allocator
using DollyDock_Goal =
  doozy_actions::action::DollyDock_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions


#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_Result __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_Result __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_Result_
{
  using Type = DollyDock_Result_<ContainerAllocator>;

  explicit DollyDock_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->docked_to_dolly = false;
    }
  }

  explicit DollyDock_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->docked_to_dolly = false;
    }
  }

  // field types and members
  using _docked_to_dolly_type =
    bool;
  _docked_to_dolly_type docked_to_dolly;

  // setters for named parameter idiom
  Type & set__docked_to_dolly(
    const bool & _arg)
  {
    this->docked_to_dolly = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_Result
    std::shared_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_Result
    std::shared_ptr<doozy_actions::action::DollyDock_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_Result_ & other) const
  {
    if (this->docked_to_dolly != other.docked_to_dolly) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_Result_

// alias to use template instance with default allocator
using DollyDock_Result =
  doozy_actions::action::DollyDock_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions


#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_Feedback __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_Feedback_
{
  using Type = DollyDock_Feedback_<ContainerAllocator>;

  explicit DollyDock_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to_dolly = "";
      this->angle_to_dolly = "";
    }
  }

  explicit DollyDock_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distance_to_dolly(_alloc),
    angle_to_dolly(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to_dolly = "";
      this->angle_to_dolly = "";
    }
  }

  // field types and members
  using _distance_to_dolly_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _distance_to_dolly_type distance_to_dolly;
  using _angle_to_dolly_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _angle_to_dolly_type angle_to_dolly;

  // setters for named parameter idiom
  Type & set__distance_to_dolly(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->distance_to_dolly = _arg;
    return *this;
  }
  Type & set__angle_to_dolly(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->angle_to_dolly = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_Feedback
    std::shared_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_Feedback
    std::shared_ptr<doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_Feedback_ & other) const
  {
    if (this->distance_to_dolly != other.distance_to_dolly) {
      return false;
    }
    if (this->angle_to_dolly != other.angle_to_dolly) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_Feedback_

// alias to use template instance with default allocator
using DollyDock_Feedback =
  doozy_actions::action::DollyDock_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "doozy_actions/action/detail/dolly_dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Request __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_SendGoal_Request_
{
  using Type = DollyDock_SendGoal_Request_<ContainerAllocator>;

  explicit DollyDock_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DollyDock_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    doozy_actions::action::DollyDock_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const doozy_actions::action::DollyDock_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Request
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Request
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_SendGoal_Request_

// alias to use template instance with default allocator
using DollyDock_SendGoal_Request =
  doozy_actions::action::DollyDock_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Response __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_SendGoal_Response_
{
  using Type = DollyDock_SendGoal_Response_<ContainerAllocator>;

  explicit DollyDock_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DollyDock_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Response
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_SendGoal_Response
    std::shared_ptr<doozy_actions::action::DollyDock_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_SendGoal_Response_

// alias to use template instance with default allocator
using DollyDock_SendGoal_Response =
  doozy_actions::action::DollyDock_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions

namespace doozy_actions
{

namespace action
{

struct DollyDock_SendGoal
{
  using Request = doozy_actions::action::DollyDock_SendGoal_Request;
  using Response = doozy_actions::action::DollyDock_SendGoal_Response;
};

}  // namespace action

}  // namespace doozy_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_GetResult_Request __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_GetResult_Request_
{
  using Type = DollyDock_GetResult_Request_<ContainerAllocator>;

  explicit DollyDock_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DollyDock_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_GetResult_Request
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_GetResult_Request
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_GetResult_Request_

// alias to use template instance with default allocator
using DollyDock_GetResult_Request =
  doozy_actions::action::DollyDock_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions


// Include directives for member types
// Member 'result'
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_GetResult_Response __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_GetResult_Response_
{
  using Type = DollyDock_GetResult_Response_<ContainerAllocator>;

  explicit DollyDock_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DollyDock_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    doozy_actions::action::DollyDock_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const doozy_actions::action::DollyDock_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_GetResult_Response
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_GetResult_Response
    std::shared_ptr<doozy_actions::action::DollyDock_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_GetResult_Response_

// alias to use template instance with default allocator
using DollyDock_GetResult_Response =
  doozy_actions::action::DollyDock_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions

namespace doozy_actions
{

namespace action
{

struct DollyDock_GetResult
{
  using Request = doozy_actions::action::DollyDock_GetResult_Request;
  using Response = doozy_actions::action::DollyDock_GetResult_Response;
};

}  // namespace action

}  // namespace doozy_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__doozy_actions__action__DollyDock_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__doozy_actions__action__DollyDock_FeedbackMessage __declspec(deprecated)
#endif

namespace doozy_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DollyDock_FeedbackMessage_
{
  using Type = DollyDock_FeedbackMessage_<ContainerAllocator>;

  explicit DollyDock_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DollyDock_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    doozy_actions::action::DollyDock_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const doozy_actions::action::DollyDock_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__doozy_actions__action__DollyDock_FeedbackMessage
    std::shared_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__doozy_actions__action__DollyDock_FeedbackMessage
    std::shared_ptr<doozy_actions::action::DollyDock_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DollyDock_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DollyDock_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DollyDock_FeedbackMessage_

// alias to use template instance with default allocator
using DollyDock_FeedbackMessage =
  doozy_actions::action::DollyDock_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace doozy_actions

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace doozy_actions
{

namespace action
{

struct DollyDock
{
  /// The goal message defined in the action definition.
  using Goal = doozy_actions::action::DollyDock_Goal;
  /// The result message defined in the action definition.
  using Result = doozy_actions::action::DollyDock_Result;
  /// The feedback message defined in the action definition.
  using Feedback = doozy_actions::action::DollyDock_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = doozy_actions::action::DollyDock_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = doozy_actions::action::DollyDock_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = doozy_actions::action::DollyDock_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DollyDock DollyDock;

}  // namespace action

}  // namespace doozy_actions

#endif  // DOOZY_ACTIONS__ACTION__DETAIL__DOLLY_DOCK__STRUCT_HPP_
