# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/GraphSlamStats.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'slam_evaluation_metric'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphSlamStats(type):
    """Metaclass of message 'GraphSlamStats'."""

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
                'mrpt_msgs.msg.GraphSlamStats')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_slam_stats
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_slam_stats
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_slam_stats
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_slam_stats
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_slam_stats

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


class GraphSlamStats(metaclass=Metaclass_GraphSlamStats):
    """Message class 'GraphSlamStats'."""

    __slots__ = [
        '_header',
        '_nodes_total',
        '_edges_total',
        '_edges_icp_2d',
        '_edges_icp_3d',
        '_edges_odom',
        '_loop_closures',
        '_slam_evaluation_metric',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nodes_total': 'int32',
        'edges_total': 'int32',
        'edges_icp_2d': 'int32',
        'edges_icp_3d': 'int32',
        'edges_odom': 'int32',
        'loop_closures': 'int32',
        'slam_evaluation_metric': 'sequence<double>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
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
        self.nodes_total = kwargs.get('nodes_total', int())
        self.edges_total = kwargs.get('edges_total', int())
        self.edges_icp_2d = kwargs.get('edges_icp_2d', int())
        self.edges_icp_3d = kwargs.get('edges_icp_3d', int())
        self.edges_odom = kwargs.get('edges_odom', int())
        self.loop_closures = kwargs.get('loop_closures', int())
        self.slam_evaluation_metric = array.array('d', kwargs.get('slam_evaluation_metric', []))

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
        if self.nodes_total != other.nodes_total:
            return False
        if self.edges_total != other.edges_total:
            return False
        if self.edges_icp_2d != other.edges_icp_2d:
            return False
        if self.edges_icp_3d != other.edges_icp_3d:
            return False
        if self.edges_odom != other.edges_odom:
            return False
        if self.loop_closures != other.loop_closures:
            return False
        if self.slam_evaluation_metric != other.slam_evaluation_metric:
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
    def nodes_total(self):
        """Message field 'nodes_total'."""
        return self._nodes_total

    @nodes_total.setter
    def nodes_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'nodes_total' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'nodes_total' field must be an integer in [-2147483648, 2147483647]"
        self._nodes_total = value

    @builtins.property
    def edges_total(self):
        """Message field 'edges_total'."""
        return self._edges_total

    @edges_total.setter
    def edges_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'edges_total' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'edges_total' field must be an integer in [-2147483648, 2147483647]"
        self._edges_total = value

    @builtins.property
    def edges_icp_2d(self):
        """Message field 'edges_icp_2d'."""
        return self._edges_icp_2d

    @edges_icp_2d.setter
    def edges_icp_2d(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'edges_icp_2d' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'edges_icp_2d' field must be an integer in [-2147483648, 2147483647]"
        self._edges_icp_2d = value

    @builtins.property
    def edges_icp_3d(self):
        """Message field 'edges_icp_3d'."""
        return self._edges_icp_3d

    @edges_icp_3d.setter
    def edges_icp_3d(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'edges_icp_3d' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'edges_icp_3d' field must be an integer in [-2147483648, 2147483647]"
        self._edges_icp_3d = value

    @builtins.property
    def edges_odom(self):
        """Message field 'edges_odom'."""
        return self._edges_odom

    @edges_odom.setter
    def edges_odom(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'edges_odom' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'edges_odom' field must be an integer in [-2147483648, 2147483647]"
        self._edges_odom = value

    @builtins.property
    def loop_closures(self):
        """Message field 'loop_closures'."""
        return self._loop_closures

    @loop_closures.setter
    def loop_closures(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'loop_closures' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'loop_closures' field must be an integer in [-2147483648, 2147483647]"
        self._loop_closures = value

    @builtins.property
    def slam_evaluation_metric(self):
        """Message field 'slam_evaluation_metric'."""
        return self._slam_evaluation_metric

    @slam_evaluation_metric.setter
    def slam_evaluation_metric(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'slam_evaluation_metric' array.array() must have the type code of 'd'"
                self._slam_evaluation_metric = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'slam_evaluation_metric' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._slam_evaluation_metric = array.array('d', value)
