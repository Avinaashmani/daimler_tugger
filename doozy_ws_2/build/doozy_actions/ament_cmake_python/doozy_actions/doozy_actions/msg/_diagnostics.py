# generated from rosidl_generator_py/resource/_idl.py.em
# with input from doozy_actions:msg/Diagnostics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Diagnostics(type):
    """Metaclass of message 'Diagnostics'."""

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
            module = import_type_support('doozy_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'doozy_actions.msg.Diagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Diagnostics(metaclass=Metaclass_Diagnostics):
    """Message class 'Diagnostics'."""

    __slots__ = [
        '_has_reached_position',
        '_safe_to_latch',
        '_is_latched',
        '_docking_status',
        '_sick_detection',
        '_camera_health',
        '_error',
    ]

    _fields_and_field_types = {
        'has_reached_position': 'boolean',
        'safe_to_latch': 'string',
        'is_latched': 'boolean',
        'docking_status': 'string',
        'sick_detection': 'boolean',
        'camera_health': 'string',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_reached_position = kwargs.get('has_reached_position', bool())
        self.safe_to_latch = kwargs.get('safe_to_latch', str())
        self.is_latched = kwargs.get('is_latched', bool())
        self.docking_status = kwargs.get('docking_status', str())
        self.sick_detection = kwargs.get('sick_detection', bool())
        self.camera_health = kwargs.get('camera_health', str())
        self.error = kwargs.get('error', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.has_reached_position != other.has_reached_position:
            return False
        if self.safe_to_latch != other.safe_to_latch:
            return False
        if self.is_latched != other.is_latched:
            return False
        if self.docking_status != other.docking_status:
            return False
        if self.sick_detection != other.sick_detection:
            return False
        if self.camera_health != other.camera_health:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_reached_position(self):
        """Message field 'has_reached_position'."""
        return self._has_reached_position

    @has_reached_position.setter
    def has_reached_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_reached_position' field must be of type 'bool'"
        self._has_reached_position = value

    @builtins.property
    def safe_to_latch(self):
        """Message field 'safe_to_latch'."""
        return self._safe_to_latch

    @safe_to_latch.setter
    def safe_to_latch(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'safe_to_latch' field must be of type 'str'"
        self._safe_to_latch = value

    @builtins.property
    def is_latched(self):
        """Message field 'is_latched'."""
        return self._is_latched

    @is_latched.setter
    def is_latched(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_latched' field must be of type 'bool'"
        self._is_latched = value

    @builtins.property
    def docking_status(self):
        """Message field 'docking_status'."""
        return self._docking_status

    @docking_status.setter
    def docking_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'docking_status' field must be of type 'str'"
        self._docking_status = value

    @builtins.property
    def sick_detection(self):
        """Message field 'sick_detection'."""
        return self._sick_detection

    @sick_detection.setter
    def sick_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sick_detection' field must be of type 'bool'"
        self._sick_detection = value

    @builtins.property
    def camera_health(self):
        """Message field 'camera_health'."""
        return self._camera_health

    @camera_health.setter
    def camera_health(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_health' field must be of type 'str'"
        self._camera_health = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value
