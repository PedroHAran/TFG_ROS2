# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/ObservationRangeBearing.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObservationRangeBearing(type):
    """Metaclass of message 'ObservationRangeBearing'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mrpt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrpt_msgs.msg.ObservationRangeBearing')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__observation_range_bearing
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__observation_range_bearing
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__observation_range_bearing
            cls._TYPE_SUPPORT = module.type_support_msg__msg__observation_range_bearing
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__observation_range_bearing

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from mrpt_msgs.msg import SingleRangeBearingObservation
            if SingleRangeBearingObservation.__class__._TYPE_SUPPORT is None:
                SingleRangeBearingObservation.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObservationRangeBearing(metaclass=Metaclass_ObservationRangeBearing):
    """Message class 'ObservationRangeBearing'."""

    __slots__ = [
        '_header',
        '_sensor_pose_on_robot',
        '_min_sensor_distance',
        '_max_sensor_distance',
        '_sensor_std_range',
        '_sensor_std_yaw',
        '_sensor_std_pitch',
        '_sensed_data',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_pose_on_robot': 'geometry_msgs/Pose',
        'min_sensor_distance': 'double',
        'max_sensor_distance': 'double',
        'sensor_std_range': 'double',
        'sensor_std_yaw': 'double',
        'sensor_std_pitch': 'double',
        'sensed_data': 'sequence<mrpt_msgs/SingleRangeBearingObservation>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrpt_msgs', 'msg'], 'SingleRangeBearingObservation')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.sensor_pose_on_robot = kwargs.get('sensor_pose_on_robot', Pose())
        self.min_sensor_distance = kwargs.get('min_sensor_distance', float())
        self.max_sensor_distance = kwargs.get('max_sensor_distance', float())
        self.sensor_std_range = kwargs.get('sensor_std_range', float())
        self.sensor_std_yaw = kwargs.get('sensor_std_yaw', float())
        self.sensor_std_pitch = kwargs.get('sensor_std_pitch', float())
        self.sensed_data = kwargs.get('sensed_data', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.sensor_pose_on_robot != other.sensor_pose_on_robot:
            return False
        if self.min_sensor_distance != other.min_sensor_distance:
            return False
        if self.max_sensor_distance != other.max_sensor_distance:
            return False
        if self.sensor_std_range != other.sensor_std_range:
            return False
        if self.sensor_std_yaw != other.sensor_std_yaw:
            return False
        if self.sensor_std_pitch != other.sensor_std_pitch:
            return False
        if self.sensed_data != other.sensed_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def sensor_pose_on_robot(self):
        """Message field 'sensor_pose_on_robot'."""
        return self._sensor_pose_on_robot

    @sensor_pose_on_robot.setter
    def sensor_pose_on_robot(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'sensor_pose_on_robot' field must be a sub message of type 'Pose'"
        self._sensor_pose_on_robot = value

    @builtins.property
    def min_sensor_distance(self):
        """Message field 'min_sensor_distance'."""
        return self._min_sensor_distance

    @min_sensor_distance.setter
    def min_sensor_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_sensor_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_sensor_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_sensor_distance = value

    @builtins.property
    def max_sensor_distance(self):
        """Message field 'max_sensor_distance'."""
        return self._max_sensor_distance

    @max_sensor_distance.setter
    def max_sensor_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_sensor_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_sensor_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_sensor_distance = value

    @builtins.property
    def sensor_std_range(self):
        """Message field 'sensor_std_range'."""
        return self._sensor_std_range

    @sensor_std_range.setter
    def sensor_std_range(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sensor_std_range' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sensor_std_range' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sensor_std_range = value

    @builtins.property
    def sensor_std_yaw(self):
        """Message field 'sensor_std_yaw'."""
        return self._sensor_std_yaw

    @sensor_std_yaw.setter
    def sensor_std_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sensor_std_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sensor_std_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sensor_std_yaw = value

    @builtins.property
    def sensor_std_pitch(self):
        """Message field 'sensor_std_pitch'."""
        return self._sensor_std_pitch

    @sensor_std_pitch.setter
    def sensor_std_pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sensor_std_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sensor_std_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sensor_std_pitch = value

    @builtins.property
    def sensed_data(self):
        """Message field 'sensed_data'."""
        return self._sensed_data

    @sensed_data.setter
    def sensed_data(self, value):
        if self._check_fields:
            from mrpt_msgs.msg import SingleRangeBearingObservation
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, SingleRangeBearingObservation) for v in value) and
                 True), \
                "The 'sensed_data' field must be a set or sequence and each value of type 'SingleRangeBearingObservation'"
        self._sensed_data = value
