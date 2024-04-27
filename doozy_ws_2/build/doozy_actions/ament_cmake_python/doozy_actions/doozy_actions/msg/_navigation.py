# generated from rosidl_generator_py/resource/_idl.py.em
# with input from doozy_actions:msg/Navigation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Navigation(type):
    """Metaclass of message 'Navigation'."""

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
                'doozy_actions.msg.Navigation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigation(metaclass=Metaclass_Navigation):
    """Message class 'Navigation'."""

    __slots__ = [
        '_moved_to_spot',
        '_idx_of_dolly',
        '_error',
    ]

    _fields_and_field_types = {
        'moved_to_spot': 'boolean',
        'idx_of_dolly': 'string',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.moved_to_spot = kwargs.get('moved_to_spot', bool())
        self.idx_of_dolly = kwargs.get('idx_of_dolly', str())
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
        if self.moved_to_spot != other.moved_to_spot:
            return False
        if self.idx_of_dolly != other.idx_of_dolly:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def moved_to_spot(self):
        """Message field 'moved_to_spot'."""
        return self._moved_to_spot

    @moved_to_spot.setter
    def moved_to_spot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'moved_to_spot' field must be of type 'bool'"
        self._moved_to_spot = value

    @builtins.property
    def idx_of_dolly(self):
        """Message field 'idx_of_dolly'."""
        return self._idx_of_dolly

    @idx_of_dolly.setter
    def idx_of_dolly(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'idx_of_dolly' field must be of type 'str'"
        self._idx_of_dolly = value

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
