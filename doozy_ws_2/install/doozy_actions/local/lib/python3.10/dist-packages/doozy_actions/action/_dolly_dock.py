# generated from rosidl_generator_py/resource/_idl.py.em
# with input from doozy_actions:action/DollyDock.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DollyDock_Goal(type):
    """Metaclass of message 'DollyDock_Goal'."""

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
                'doozy_actions.action.DollyDock_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_Goal(metaclass=Metaclass_DollyDock_Goal):
    """Message class 'DollyDock_Goal'."""

    __slots__ = [
        '_reached_point',
        '_idx_no',
    ]

    _fields_and_field_types = {
        'reached_point': 'boolean',
        'idx_no': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reached_point = kwargs.get('reached_point', bool())
        self.idx_no = kwargs.get('idx_no', str())

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
        if self.reached_point != other.reached_point:
            return False
        if self.idx_no != other.idx_no:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reached_point(self):
        """Message field 'reached_point'."""
        return self._reached_point

    @reached_point.setter
    def reached_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reached_point' field must be of type 'bool'"
        self._reached_point = value

    @builtins.property
    def idx_no(self):
        """Message field 'idx_no'."""
        return self._idx_no

    @idx_no.setter
    def idx_no(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'idx_no' field must be of type 'str'"
        self._idx_no = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_Result(type):
    """Metaclass of message 'DollyDock_Result'."""

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
                'doozy_actions.action.DollyDock_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_Result(metaclass=Metaclass_DollyDock_Result):
    """Message class 'DollyDock_Result'."""

    __slots__ = [
        '_docked_to_dolly',
    ]

    _fields_and_field_types = {
        'docked_to_dolly': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.docked_to_dolly = kwargs.get('docked_to_dolly', bool())

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
        if self.docked_to_dolly != other.docked_to_dolly:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def docked_to_dolly(self):
        """Message field 'docked_to_dolly'."""
        return self._docked_to_dolly

    @docked_to_dolly.setter
    def docked_to_dolly(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'docked_to_dolly' field must be of type 'bool'"
        self._docked_to_dolly = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_Feedback(type):
    """Metaclass of message 'DollyDock_Feedback'."""

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
                'doozy_actions.action.DollyDock_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_Feedback(metaclass=Metaclass_DollyDock_Feedback):
    """Message class 'DollyDock_Feedback'."""

    __slots__ = [
        '_distance_to_dolly',
        '_angle_to_dolly',
    ]

    _fields_and_field_types = {
        'distance_to_dolly': 'string',
        'angle_to_dolly': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_to_dolly = kwargs.get('distance_to_dolly', str())
        self.angle_to_dolly = kwargs.get('angle_to_dolly', str())

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
        if self.distance_to_dolly != other.distance_to_dolly:
            return False
        if self.angle_to_dolly != other.angle_to_dolly:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance_to_dolly(self):
        """Message field 'distance_to_dolly'."""
        return self._distance_to_dolly

    @distance_to_dolly.setter
    def distance_to_dolly(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'distance_to_dolly' field must be of type 'str'"
        self._distance_to_dolly = value

    @builtins.property
    def angle_to_dolly(self):
        """Message field 'angle_to_dolly'."""
        return self._angle_to_dolly

    @angle_to_dolly.setter
    def angle_to_dolly(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'angle_to_dolly' field must be of type 'str'"
        self._angle_to_dolly = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_SendGoal_Request(type):
    """Metaclass of message 'DollyDock_SendGoal_Request'."""

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
                'doozy_actions.action.DollyDock_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__send_goal__request

            from doozy_actions.action import DollyDock
            if DollyDock.Goal.__class__._TYPE_SUPPORT is None:
                DollyDock.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_SendGoal_Request(metaclass=Metaclass_DollyDock_SendGoal_Request):
    """Message class 'DollyDock_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'doozy_actions/DollyDock_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['doozy_actions', 'action'], 'DollyDock_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from doozy_actions.action._dolly_dock import DollyDock_Goal
        self.goal = kwargs.get('goal', DollyDock_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from doozy_actions.action._dolly_dock import DollyDock_Goal
            assert \
                isinstance(value, DollyDock_Goal), \
                "The 'goal' field must be a sub message of type 'DollyDock_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_SendGoal_Response(type):
    """Metaclass of message 'DollyDock_SendGoal_Response'."""

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
                'doozy_actions.action.DollyDock_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_SendGoal_Response(metaclass=Metaclass_DollyDock_SendGoal_Response):
    """Message class 'DollyDock_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_DollyDock_SendGoal(type):
    """Metaclass of service 'DollyDock_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('doozy_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'doozy_actions.action.DollyDock_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__dolly_dock__send_goal

            from doozy_actions.action import _dolly_dock
            if _dolly_dock.Metaclass_DollyDock_SendGoal_Request._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_SendGoal_Request.__import_type_support__()
            if _dolly_dock.Metaclass_DollyDock_SendGoal_Response._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_SendGoal_Response.__import_type_support__()


class DollyDock_SendGoal(metaclass=Metaclass_DollyDock_SendGoal):
    from doozy_actions.action._dolly_dock import DollyDock_SendGoal_Request as Request
    from doozy_actions.action._dolly_dock import DollyDock_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_GetResult_Request(type):
    """Metaclass of message 'DollyDock_GetResult_Request'."""

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
                'doozy_actions.action.DollyDock_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_GetResult_Request(metaclass=Metaclass_DollyDock_GetResult_Request):
    """Message class 'DollyDock_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_GetResult_Response(type):
    """Metaclass of message 'DollyDock_GetResult_Response'."""

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
                'doozy_actions.action.DollyDock_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__get_result__response

            from doozy_actions.action import DollyDock
            if DollyDock.Result.__class__._TYPE_SUPPORT is None:
                DollyDock.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_GetResult_Response(metaclass=Metaclass_DollyDock_GetResult_Response):
    """Message class 'DollyDock_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'doozy_actions/DollyDock_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['doozy_actions', 'action'], 'DollyDock_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from doozy_actions.action._dolly_dock import DollyDock_Result
        self.result = kwargs.get('result', DollyDock_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from doozy_actions.action._dolly_dock import DollyDock_Result
            assert \
                isinstance(value, DollyDock_Result), \
                "The 'result' field must be a sub message of type 'DollyDock_Result'"
        self._result = value


class Metaclass_DollyDock_GetResult(type):
    """Metaclass of service 'DollyDock_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('doozy_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'doozy_actions.action.DollyDock_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__dolly_dock__get_result

            from doozy_actions.action import _dolly_dock
            if _dolly_dock.Metaclass_DollyDock_GetResult_Request._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_GetResult_Request.__import_type_support__()
            if _dolly_dock.Metaclass_DollyDock_GetResult_Response._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_GetResult_Response.__import_type_support__()


class DollyDock_GetResult(metaclass=Metaclass_DollyDock_GetResult):
    from doozy_actions.action._dolly_dock import DollyDock_GetResult_Request as Request
    from doozy_actions.action._dolly_dock import DollyDock_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DollyDock_FeedbackMessage(type):
    """Metaclass of message 'DollyDock_FeedbackMessage'."""

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
                'doozy_actions.action.DollyDock_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__dolly_dock__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__dolly_dock__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__dolly_dock__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__dolly_dock__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__dolly_dock__feedback_message

            from doozy_actions.action import DollyDock
            if DollyDock.Feedback.__class__._TYPE_SUPPORT is None:
                DollyDock.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DollyDock_FeedbackMessage(metaclass=Metaclass_DollyDock_FeedbackMessage):
    """Message class 'DollyDock_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'doozy_actions/DollyDock_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['doozy_actions', 'action'], 'DollyDock_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from doozy_actions.action._dolly_dock import DollyDock_Feedback
        self.feedback = kwargs.get('feedback', DollyDock_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from doozy_actions.action._dolly_dock import DollyDock_Feedback
            assert \
                isinstance(value, DollyDock_Feedback), \
                "The 'feedback' field must be a sub message of type 'DollyDock_Feedback'"
        self._feedback = value


class Metaclass_DollyDock(type):
    """Metaclass of action 'DollyDock'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('doozy_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'doozy_actions.action.DollyDock')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__dolly_dock

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from doozy_actions.action import _dolly_dock
            if _dolly_dock.Metaclass_DollyDock_SendGoal._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_SendGoal.__import_type_support__()
            if _dolly_dock.Metaclass_DollyDock_GetResult._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_GetResult.__import_type_support__()
            if _dolly_dock.Metaclass_DollyDock_FeedbackMessage._TYPE_SUPPORT is None:
                _dolly_dock.Metaclass_DollyDock_FeedbackMessage.__import_type_support__()


class DollyDock(metaclass=Metaclass_DollyDock):

    # The goal message defined in the action definition.
    from doozy_actions.action._dolly_dock import DollyDock_Goal as Goal
    # The result message defined in the action definition.
    from doozy_actions.action._dolly_dock import DollyDock_Result as Result
    # The feedback message defined in the action definition.
    from doozy_actions.action._dolly_dock import DollyDock_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from doozy_actions.action._dolly_dock import DollyDock_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from doozy_actions.action._dolly_dock import DollyDock_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from doozy_actions.action._dolly_dock import DollyDock_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
