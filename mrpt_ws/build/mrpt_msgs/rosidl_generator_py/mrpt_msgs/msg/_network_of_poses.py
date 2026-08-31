# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/NetworkOfPoses.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NetworkOfPoses(type):
    """Metaclass of message 'NetworkOfPoses'."""

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
                'mrpt_msgs.msg.NetworkOfPoses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__network_of_poses
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__network_of_poses
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__network_of_poses
            cls._TYPE_SUPPORT = module.type_support_msg__msg__network_of_poses
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__network_of_poses

            from mrpt_msgs.msg import GraphConstraint
            if GraphConstraint.__class__._TYPE_SUPPORT is None:
                GraphConstraint.__class__.__import_type_support__()

            from mrpt_msgs.msg import NodeIDWithPoseVec
            if NodeIDWithPoseVec.__class__._TYPE_SUPPORT is None:
                NodeIDWithPoseVec.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NetworkOfPoses(metaclass=Metaclass_NetworkOfPoses):
    """Message class 'NetworkOfPoses'."""

    __slots__ = [
        '_root',
        '_nodes',
        '_constraints',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'root': 'uint64',
        'nodes': 'mrpt_msgs/NodeIDWithPoseVec',
        'constraints': 'sequence<mrpt_msgs/GraphConstraint>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrpt_msgs', 'msg'], 'NodeIDWithPoseVec'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrpt_msgs', 'msg'], 'GraphConstraint')),  # noqa: E501
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
        self.root = kwargs.get('root', int())
        from mrpt_msgs.msg import NodeIDWithPoseVec
        self.nodes = kwargs.get('nodes', NodeIDWithPoseVec())
        self.constraints = kwargs.get('constraints', [])

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
        if self.root != other.root:
            return False
        if self.nodes != other.nodes:
            return False
        if self.constraints != other.constraints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def root(self):
        """Message field 'root'."""
        return self._root

    @root.setter
    def root(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'root' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'root' field must be an unsigned integer in [0, 18446744073709551615]"
        self._root = value

    @builtins.property
    def nodes(self):
        """Message field 'nodes'."""
        return self._nodes

    @nodes.setter
    def nodes(self, value):
        if self._check_fields:
            from mrpt_msgs.msg import NodeIDWithPoseVec
            assert \
                isinstance(value, NodeIDWithPoseVec), \
                "The 'nodes' field must be a sub message of type 'NodeIDWithPoseVec'"
        self._nodes = value

    @builtins.property
    def constraints(self):
        """Message field 'constraints'."""
        return self._constraints

    @constraints.setter
    def constraints(self, value):
        if self._check_fields:
            from mrpt_msgs.msg import GraphConstraint
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
                 all(isinstance(v, GraphConstraint) for v in value) and
                 True), \
                "The 'constraints' field must be a set or sequence and each value of type 'GraphConstraint'"
        self._constraints = value
