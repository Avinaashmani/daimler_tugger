// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "doozy_actions/msg/rosidl_typesupport_c__visibility_control.h"
#include "doozy_actions/msg/detail/docking__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace doozy_actions
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Docking_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Docking_type_support_ids_t;

static const _Docking_type_support_ids_t _Docking_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Docking_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Docking_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Docking_type_support_symbol_names_t _Docking_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, doozy_actions, msg, Docking)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, doozy_actions, msg, Docking)),
  }
};

typedef struct _Docking_type_support_data_t
{
  void * data[2];
} _Docking_type_support_data_t;

static _Docking_type_support_data_t _Docking_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Docking_message_typesupport_map = {
  2,
  "doozy_actions",
  &_Docking_message_typesupport_ids.typesupport_identifier[0],
  &_Docking_message_typesupport_symbol_names.symbol_name[0],
  &_Docking_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Docking_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Docking_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace doozy_actions

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_doozy_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, doozy_actions, msg, Docking)() {
  return &::doozy_actions::msg::rosidl_typesupport_c::Docking_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
