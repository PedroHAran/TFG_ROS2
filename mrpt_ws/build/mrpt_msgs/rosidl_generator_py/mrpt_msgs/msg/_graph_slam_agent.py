# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/GraphSlamAgent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphSlamAgent(type):
    """Metaclass of message 'GraphSlamAgent'."""

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
                'mrpt_msgs.msg.GraphSlamAgent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_slam_agent
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_slam_agent
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_slam_agent
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_slam_agent
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_slam_agent

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraphSlamAgent(metaclass=Metaclass_GraphSlamAgent):
    """Message class 'GraphSlamAgent'."""

    __slots__ = [
        '_name',
        '_hostname',
        '_ip_addr',
        '_port',
        '_is_online',
        '_last_seen_time',
        '_topic_namespace',
        '_agent_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'name': 'std_msgs/String',
        'hostname': 'std_msgs/String',
        'ip_addr': 'std_msgs/String',
        'port': 'uint16',
        'is_online': 'std_msgs/Bool',
        'last_seen_time': 'builtin_interfaces/Time',
        'topic_namespace': 'std_msgs/String',
        'agent_id': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        from std_msgs.msg import String
        self.name = kwargs.get('name', String())
        from std_msgs.msg import String
        self.hostname = kwargs.get('hostname', String())
        from std_msgs.msg import String
        self.ip_addr = kwargs.get('ip_addr', String())
        self.port = kwargs.get('port', int())
        from std_msgs.msg import Bool
        self.is_online = kwargs.get('is_online', Bool())
        from builtin_interfaces.msg import Time
        self.last_seen_time = kwargs.get('last_seen_time', Time())
        from std_msgs.msg import String
        self.topic_namespace = kwargs.get('topic_namespace', String())
        self.agent_id = kwargs.get('agent_id', int())

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
        if self.name != other.name:
            return False
        if self.hostname != other.hostname:
            return False
        if self.ip_addr != other.ip_addr:
            return False
        if self.port != other.port:
            return False
        if self.is_online != other.is_online:
            return False
        if self.last_seen_time != other.last_seen_time:
            return False
        if self.topic_namespace != other.topic_namespace:
            return False
        if self.agent_id != other.agent_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if self._check_fields:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'name' field must be a sub message of type 'String'"
        self._name = value

    @builtins.property
    def hostname(self):
        """Message field 'hostname'."""
        return self._hostname

    @hostname.setter
    def hostname(self, value):
        if self._check_fields:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'hostname' field must be a sub message of type 'String'"
        self._hostname = value

    @builtins.property
    def ip_addr(self):
        """Message field 'ip_addr'."""
        return self._ip_addr

    @ip_addr.setter
    def ip_addr(self, value):
        if self._check_fields:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'ip_addr' field must be a sub message of type 'String'"
        self._ip_addr = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'port' field must be an unsigned integer in [0, 65535]"
        self._port = value

    @builtins.property
    def is_online(self):
        """Message field 'is_online'."""
        return self._is_online

    @is_online.setter
    def is_online(self, value):
        if self._check_fields:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'is_online' field must be a sub message of type 'Bool'"
        self._is_online = value

    @builtins.property
    def last_seen_time(self):
        """Message field 'last_seen_time'."""
        return self._last_seen_time

    @last_seen_time.setter
    def last_seen_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'last_seen_time' field must be a sub message of type 'Time'"
        self._last_seen_time = value

    @builtins.property
    def topic_namespace(self):
        """Message field 'topic_namespace'."""
        return self._topic_namespace

    @topic_namespace.setter
    def topic_namespace(self, value):
        if self._check_fields:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'topic_namespace' field must be a sub message of type 'String'"
        self._topic_namespace = value

    @builtins.property
    def agent_id(self):
        """Message field 'agent_id'."""
        return self._agent_id

    @agent_id.setter
    def agent_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'agent_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'agent_id' field must be an integer in [-2147483648, 2147483647]"
        self._agent_id = value
