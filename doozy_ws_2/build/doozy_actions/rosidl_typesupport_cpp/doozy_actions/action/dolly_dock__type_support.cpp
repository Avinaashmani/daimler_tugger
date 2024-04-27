// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from doozy_actions:action/DollyDock.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "doozy_actions/action/detail/dolly_dock__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_Goal_type_support_ids_t;

static const _DollyDock_Goal_type_support_ids_t _DollyDock_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_Goal_type_support_symbol_names_t _DollyDock_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_Goal)),
  }
};

typedef struct _DollyDock_Goal_type_support_data_t
{
  void * data[2];
} _DollyDock_Goal_type_support_data_t;

static _DollyDock_Goal_type_support_data_t _DollyDock_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_Goal_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_Goal>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_Goal)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_Result_type_support_ids_t;

static const _DollyDock_Result_type_support_ids_t _DollyDock_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_Result_type_support_symbol_names_t _DollyDock_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_Result)),
  }
};

typedef struct _DollyDock_Result_type_support_data_t
{
  void * data[2];
} _DollyDock_Result_type_support_data_t;

static _DollyDock_Result_type_support_data_t _DollyDock_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_Result_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_Result>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_Result)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_Feedback_type_support_ids_t;

static const _DollyDock_Feedback_type_support_ids_t _DollyDock_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_Feedback_type_support_symbol_names_t _DollyDock_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_Feedback)),
  }
};

typedef struct _DollyDock_Feedback_type_support_data_t
{
  void * data[2];
} _DollyDock_Feedback_type_support_data_t;

static _DollyDock_Feedback_type_support_data_t _DollyDock_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_Feedback_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_Feedback>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_Feedback)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_SendGoal_Request_type_support_ids_t;

static const _DollyDock_SendGoal_Request_type_support_ids_t _DollyDock_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_SendGoal_Request_type_support_symbol_names_t _DollyDock_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_SendGoal_Request)),
  }
};

typedef struct _DollyDock_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DollyDock_SendGoal_Request_type_support_data_t;

static _DollyDock_SendGoal_Request_type_support_data_t _DollyDock_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_SendGoal_Request_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_SendGoal_Request>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_SendGoal_Request)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_SendGoal_Response_type_support_ids_t;

static const _DollyDock_SendGoal_Response_type_support_ids_t _DollyDock_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_SendGoal_Response_type_support_symbol_names_t _DollyDock_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_SendGoal_Response)),
  }
};

typedef struct _DollyDock_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DollyDock_SendGoal_Response_type_support_data_t;

static _DollyDock_SendGoal_Response_type_support_data_t _DollyDock_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_SendGoal_Response_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_SendGoal_Response>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_SendGoal_Response)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_SendGoal_type_support_ids_t;

static const _DollyDock_SendGoal_type_support_ids_t _DollyDock_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_SendGoal_type_support_symbol_names_t _DollyDock_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_SendGoal)),
  }
};

typedef struct _DollyDock_SendGoal_type_support_data_t
{
  void * data[2];
} _DollyDock_SendGoal_type_support_data_t;

static _DollyDock_SendGoal_type_support_data_t _DollyDock_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_SendGoal_service_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DollyDock_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<doozy_actions::action::DollyDock_SendGoal>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_GetResult_Request_type_support_ids_t;

static const _DollyDock_GetResult_Request_type_support_ids_t _DollyDock_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_GetResult_Request_type_support_symbol_names_t _DollyDock_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_GetResult_Request)),
  }
};

typedef struct _DollyDock_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DollyDock_GetResult_Request_type_support_data_t;

static _DollyDock_GetResult_Request_type_support_data_t _DollyDock_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_GetResult_Request_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_GetResult_Request>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_GetResult_Request)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_GetResult_Response_type_support_ids_t;

static const _DollyDock_GetResult_Response_type_support_ids_t _DollyDock_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_GetResult_Response_type_support_symbol_names_t _DollyDock_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_GetResult_Response)),
  }
};

typedef struct _DollyDock_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DollyDock_GetResult_Response_type_support_data_t;

static _DollyDock_GetResult_Response_type_support_data_t _DollyDock_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_GetResult_Response_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_GetResult_Response>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_GetResult_Response)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_GetResult_type_support_ids_t;

static const _DollyDock_GetResult_type_support_ids_t _DollyDock_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_GetResult_type_support_symbol_names_t _DollyDock_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_GetResult)),
  }
};

typedef struct _DollyDock_GetResult_type_support_data_t
{
  void * data[2];
} _DollyDock_GetResult_type_support_data_t;

static _DollyDock_GetResult_type_support_data_t _DollyDock_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_GetResult_service_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DollyDock_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<doozy_actions::action::DollyDock_GetResult>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DollyDock_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DollyDock_FeedbackMessage_type_support_ids_t;

static const _DollyDock_FeedbackMessage_type_support_ids_t _DollyDock_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DollyDock_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DollyDock_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DollyDock_FeedbackMessage_type_support_symbol_names_t _DollyDock_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, doozy_actions, action, DollyDock_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, doozy_actions, action, DollyDock_FeedbackMessage)),
  }
};

typedef struct _DollyDock_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DollyDock_FeedbackMessage_type_support_data_t;

static _DollyDock_FeedbackMessage_type_support_data_t _DollyDock_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DollyDock_FeedbackMessage_message_typesupport_map = {
  2,
  "doozy_actions",
  &_DollyDock_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DollyDock_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DollyDock_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DollyDock_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DollyDock_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<doozy_actions::action::DollyDock_FeedbackMessage>()
{
  return &::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, doozy_actions, action, DollyDock_FeedbackMessage)() {
  return get_message_type_support_handle<doozy_actions::action::DollyDock_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "doozy_actions/action/detail/dolly_dock__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace doozy_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DollyDock_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace doozy_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<doozy_actions::action::DollyDock>()
{
  using ::doozy_actions::action::rosidl_typesupport_cpp::DollyDock_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DollyDock_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::doozy_actions::action::DollyDock::Impl::SendGoalService>();
  DollyDock_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::doozy_actions::action::DollyDock::Impl::GetResultService>();
  DollyDock_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::doozy_actions::action::DollyDock::Impl::CancelGoalService>();
  DollyDock_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::doozy_actions::action::DollyDock::Impl::FeedbackMessage>();
  DollyDock_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::doozy_actions::action::DollyDock::Impl::GoalStatusMessage>();
  return &DollyDock_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
