# generated from rosidl_generator_py/resource/_idl.py.em
# with input from doozy_actions:msg/Docking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Docking(type):
    """Metaclass of message 'Docking'."""

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
                'doozy_actions.msg.Docking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__docking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__docking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__docking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__docking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__docking

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Docking(metaclass=Metaclass_Docking):
    """Message class 'Docking'."""

    __slots__ = [
        '_docked_to_target',
        '_safe_to_latch',
        '_distance_to_target',
        '_angle_to_target',
        '_target_tf_status',
        '_error',
    ]

    _fields_and_field_types = {
        'docked_to_target': 'boolean',
        'safe_to_latch': 'boolean',
        'distance_to_target': 'double',
        'angle_to_target': 'double',
        'target_tf_status': 'string',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.docked_to_target = kwargs.get('docked_to_target', bool())
        self.safe_to_latch = kwargs.get('safe_to_latch', bool())
        self.distance_to_target = kwargs.get('distance_to_target', float())
        self.angle_to_target = kwargs.get('angle_to_target', float())
        self.target_tf_status = kwargs.get('target_tf_status', str())
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
        if self.docked_to_target != other.docked_to_target:
            return False
        if self.safe_to_latch != other.safe_to_latch:
            return False
        if self.distance_to_target != other.distance_to_target:
            return False
        if self.angle_to_target != other.angle_to_target:
            return False
        if self.target_tf_status != other.target_tf_status:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def docked_to_target(self):
        """Message field 'docked_to_target'."""
        return self._docked_to_target

    @docked_to_target.setter
    def docked_to_target(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'docked_to_target' field must be of type 'bool'"
        self._docked_to_target = value

    @property
    def safe_to_latch(self):
        """Message field 'safe_to_latch'."""
        return self._safe_to_latch

    @safe_to_latch.setter
    def safe_to_latch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safe_to_latch' field must be of type 'bool'"
        self._safe_to_latch = value

    @property
    def distance_to_target(self):
        """Message field 'distance_to_target'."""
        return self._distance_to_target

    @distance_to_target.setter
    def distance_to_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_target' field must be of type 'float'"
        self._distance_to_target = value

    @property
    def angle_to_target(self):
        """Message field 'angle_to_target'."""
        return self._angle_to_target

    @angle_to_target.setter
    def angle_to_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_to_target' field must be of type 'float'"
        self._angle_to_target = value

    @property
    def target_tf_status(self):
        """Message field 'target_tf_status'."""
        return self._target_tf_status

    @target_tf_status.setter
    def target_tf_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_tf_status' field must be of type 'str'"
        self._target_tf_status = value

    @property
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
