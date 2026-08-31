// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrpt_msgs:msg/NetworkOfPoses.idl
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
#include "mrpt_msgs/msg/detail/network_of_poses__struct.h"
#include "mrpt_msgs/msg/detail/network_of_poses__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mrpt_msgs/msg/detail/graph_constraint__functions.h"
// end nested array functions include
bool mrpt_msgs__msg__node_id_with_pose_vec__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrpt_msgs__msg__node_id_with_pose_vec__convert_to_py(void * raw_ros_message);
bool mrpt_msgs__msg__graph_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrpt_msgs__msg__graph_constraint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrpt_msgs__msg__network_of_poses__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("mrpt_msgs.msg._network_of_poses.NetworkOfPoses", full_classname_dest, 46) == 0);
  }
  mrpt_msgs__msg__NetworkOfPoses * ros_message = _ros_message;
  {  // root
    PyObject * field = PyObject_GetAttrString(_pymsg, "root");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->root = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodes");
    if (!field) {
      return false;
    }
    if (!mrpt_msgs__msg__node_id_with_pose_vec__convert_from_py(field, &ros_message->nodes)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "constraints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'constraints'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mrpt_msgs__msg__GraphConstraint__Sequence__init(&(ros_message->constraints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mrpt_msgs__msg__GraphConstraint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mrpt_msgs__msg__GraphConstraint * dest = ros_message->constraints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mrpt_msgs__msg__graph_constraint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mrpt_msgs__msg__network_of_poses__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NetworkOfPoses */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrpt_msgs.msg._network_of_poses");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NetworkOfPoses");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrpt_msgs__msg__NetworkOfPoses * ros_message = (mrpt_msgs__msg__NetworkOfPoses *)raw_ros_message;
  {  // root
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->root);
    {
      int rc = PyObject_SetAttrString(_pymessage, "root", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodes
    PyObject * field = NULL;
    field = mrpt_msgs__msg__node_id_with_pose_vec__convert_to_py(&ros_message->nodes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // constraints
    PyObject * field = NULL;
    size_t size = ros_message->constraints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mrpt_msgs__msg__GraphConstraint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->constraints.data[i]);
      PyObject * pyitem = mrpt_msgs__msg__graph_constraint__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "constraints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
