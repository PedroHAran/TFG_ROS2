# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/GraphConstraint.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphConstraint(type):
    """Metaclass of message 'GraphConstraint'."""

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
                'mrpt_msgs.msg.GraphConstraint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_constraint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_constraint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_constraint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_constraint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_constraint

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraphConstraint(metaclass=Metaclass_GraphConstraint):
    """Message class 'GraphConstraint'."""

    __slots__ = [
        '_node_id_from',
        '_node_id_to',
        '_constraint',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'node_id_from': 'uint64',
        'node_id_to': 'uint64',
        'constraint': 'geometry_msgs/PoseWithCovariance',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
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
        self.node_id_from = kwargs.get('node_id_from', int())
        self.node_id_to = kwargs.get('node_id_to', int())
        from geometry_msgs.msg import PoseWithCovariance
        self.constraint = kwargs.get('constraint', PoseWithCovariance())

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
        if self.node_id_from != other.node_id_from:
            return False
        if self.node_id_to != other.node_id_to:
            return False
        if self.constraint != other.constraint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id_from(self):
        """Message field 'node_id_from'."""
        return self._node_id_from

    @node_id_from.setter
    def node_id_from(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'node_id_from' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'node_id_from' field must be an unsigned integer in [0, 18446744073709551615]"
        self._node_id_from = value

    @builtins.property
    def node_id_to(self):
        """Message field 'node_id_to'."""
        return self._node_id_to

    @node_id_to.setter
    def node_id_to(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'node_id_to' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'node_id_to' field must be an unsigned integer in [0, 18446744073709551615]"
        self._node_id_to = value

    @builtins.property
    def constraint(self):
        """Message field 'constraint'."""
        return self._constraint

    @constraint.setter
    def constraint(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'constraint' field must be a sub message of type 'PoseWithCovariance'"
        self._constraint = value
