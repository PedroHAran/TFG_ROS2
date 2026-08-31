// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mrpt_msgs:msg/ObservationRangeBeacon.idl
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
#include "mrpt_msgs/msg/detail/observation_range_beacon__struct.h"
#include "mrpt_msgs/msg/detail/observation_range_beacon__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mrpt_msgs/msg/detail/single_range_beacon_observation__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool mrpt_msgs__msg__single_range_beacon_observation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mrpt_msgs__msg__single_range_beacon_observation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mrpt_msgs__msg__observation_range_beacon__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("mrpt_msgs.msg._observation_range_beacon.ObservationRangeBeacon", full_classname_dest, 62) == 0);
  }
  mrpt_msgs__msg__ObservationRangeBeacon * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sensor_pose_on_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_pose_on_robot");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->sensor_pose_on_robot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // min_sensor_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_sensor_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_sensor_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_sensor_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_sensor_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_sensor_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sensor_std_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_std_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sensor_std_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sensed_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensed_data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sensed_data'");
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
    if (!mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init(&(ros_message->sensed_data), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mrpt_msgs__msg__SingleRangeBeaconObservation * dest = ros_message->sensed_data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mrpt_msgs__msg__single_range_beacon_observation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * mrpt_msgs__msg__observation_range_beacon__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObservationRangeBeacon */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mrpt_msgs.msg._observation_range_beacon");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObservationRangeBeacon");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mrpt_msgs__msg__ObservationRangeBeacon * ros_message = (mrpt_msgs__msg__ObservationRangeBeacon *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_pose_on_robot
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->sensor_pose_on_robot);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_pose_on_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_sensor_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_sensor_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_sensor_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_sensor_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_sensor_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_sensor_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_std_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sensor_std_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_std_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensed_data
    PyObject * field = NULL;
    size_t size = ros_message->sensed_data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mrpt_msgs__msg__SingleRangeBeaconObservation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sensed_data.data[i]);
      PyObject * pyitem = mrpt_msgs__msg__single_range_beacon_observation__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sensed_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
