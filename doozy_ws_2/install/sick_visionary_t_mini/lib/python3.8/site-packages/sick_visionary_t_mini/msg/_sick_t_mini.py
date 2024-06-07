# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sick_visionary_t_mini:msg/SickTMini.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SickTMini(type):
    """Metaclass of message 'SickTMini'."""

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
            module = import_type_support('sick_visionary_t_mini')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sick_visionary_t_mini.msg.SickTMini')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sick_t_mini
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sick_t_mini
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sick_t_mini
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sick_t_mini
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sick_t_mini

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class SickTMini(metaclass=Metaclass_SickTMini):
    """Message class 'SickTMini'."""

    __slots__ = [
        '_header',
        '_status_of_camera',
        '_left_corners',
        '_right_corners',
        '_point',
        '_dolly_found',
        '_corners_distance',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'status_of_camera': 'string',
        'left_corners': 'geometry_msgs/Vector3',
        'right_corners': 'geometry_msgs/Vector3',
        'point': 'geometry_msgs/Vector3',
        'dolly_found': 'boolean',
        'corners_distance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.status_of_camera = kwargs.get('status_of_camera', str())
        from geometry_msgs.msg import Vector3
        self.left_corners = kwargs.get('left_corners', Vector3())
        from geometry_msgs.msg import Vector3
        self.right_corners = kwargs.get('right_corners', Vector3())
        from geometry_msgs.msg import Vector3
        self.point = kwargs.get('point', Vector3())
        self.dolly_found = kwargs.get('dolly_found', bool())
        self.corners_distance = kwargs.get('corners_distance', float())

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
        if self.header != other.header:
            return False
        if self.status_of_camera != other.status_of_camera:
            return False
        if self.left_corners != other.left_corners:
            return False
        if self.right_corners != other.right_corners:
            return False
        if self.point != other.point:
            return False
        if self.dolly_found != other.dolly_found:
            return False
        if self.corners_distance != other.corners_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def status_of_camera(self):
        """Message field 'status_of_camera'."""
        return self._status_of_camera

    @status_of_camera.setter
    def status_of_camera(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_of_camera' field must be of type 'str'"
        self._status_of_camera = value

    @property
    def left_corners(self):
        """Message field 'left_corners'."""
        return self._left_corners

    @left_corners.setter
    def left_corners(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'left_corners' field must be a sub message of type 'Vector3'"
        self._left_corners = value

    @property
    def right_corners(self):
        """Message field 'right_corners'."""
        return self._right_corners

    @right_corners.setter
    def right_corners(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'right_corners' field must be a sub message of type 'Vector3'"
        self._right_corners = value

    @property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'point' field must be a sub message of type 'Vector3'"
        self._point = value

    @property
    def dolly_found(self):
        """Message field 'dolly_found'."""
        return self._dolly_found

    @dolly_found.setter
    def dolly_found(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dolly_found' field must be of type 'bool'"
        self._dolly_found = value

    @property
    def corners_distance(self):
        """Message field 'corners_distance'."""
        return self._corners_distance

    @corners_distance.setter
    def corners_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'corners_distance' field must be of type 'float'"
        self._corners_distance = value
