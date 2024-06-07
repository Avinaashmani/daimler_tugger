// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from doozy_actions:msg/Docking.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "doozy_actions/msg/detail/docking__struct.h"
#include "doozy_actions/msg/detail/docking__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool doozy_actions__msg__docking__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("doozy_actions.msg._docking.Docking", full_classname_dest, 34) == 0);
  }
  doozy_actions__msg__Docking * ros_message = _ros_message;
  {  // docked_to_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "docked_to_target");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->docked_to_target = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safe_to_latch
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_to_latch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe_to_latch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // distance_to_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_to_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_to_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_to_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_tf_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_tf_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->target_tf_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * doozy_actions__msg__docking__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Docking */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("doozy_actions.msg._docking");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Docking");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  doozy_actions__msg__Docking * ros_message = (doozy_actions__msg__Docking *)raw_ros_message;
  {  // docked_to_target
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->docked_to_target ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docked_to_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_to_latch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe_to_latch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_to_latch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_to_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_to_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_to_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_tf_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->target_tf_status.data,
      strlen(ros_message->target_tf_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_tf_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error.data,
      strlen(ros_message->error.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
