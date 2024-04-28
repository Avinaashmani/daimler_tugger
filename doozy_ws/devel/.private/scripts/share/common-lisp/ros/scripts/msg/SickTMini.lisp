; Auto-generated. Do not edit!


(cl:in-package scripts-msg)


;//! \htmlinclude SickTMini.msg.html

(cl:defclass <SickTMini> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (status_of_camera
    :reader status_of_camera
    :initarg :status_of_camera
    :type cl:string
    :initform "")
   (left_corners
    :reader left_corners
    :initarg :left_corners
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (right_corners
    :reader right_corners
    :initarg :right_corners
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (point
    :reader point
    :initarg :point
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (dolly_found
    :reader dolly_found
    :initarg :dolly_found
    :type cl:boolean
    :initform cl:nil)
   (corners_distance
    :reader corners_distance
    :initarg :corners_distance
    :type cl:float
    :initform 0.0))
)

(cl:defclass SickTMini (<SickTMini>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SickTMini>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SickTMini)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name scripts-msg:<SickTMini> is deprecated: use scripts-msg:SickTMini instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:header-val is deprecated.  Use scripts-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'status_of_camera-val :lambda-list '(m))
(cl:defmethod status_of_camera-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:status_of_camera-val is deprecated.  Use scripts-msg:status_of_camera instead.")
  (status_of_camera m))

(cl:ensure-generic-function 'left_corners-val :lambda-list '(m))
(cl:defmethod left_corners-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:left_corners-val is deprecated.  Use scripts-msg:left_corners instead.")
  (left_corners m))

(cl:ensure-generic-function 'right_corners-val :lambda-list '(m))
(cl:defmethod right_corners-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:right_corners-val is deprecated.  Use scripts-msg:right_corners instead.")
  (right_corners m))

(cl:ensure-generic-function 'point-val :lambda-list '(m))
(cl:defmethod point-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:point-val is deprecated.  Use scripts-msg:point instead.")
  (point m))

(cl:ensure-generic-function 'dolly_found-val :lambda-list '(m))
(cl:defmethod dolly_found-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:dolly_found-val is deprecated.  Use scripts-msg:dolly_found instead.")
  (dolly_found m))

(cl:ensure-generic-function 'corners_distance-val :lambda-list '(m))
(cl:defmethod corners_distance-val ((m <SickTMini>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader scripts-msg:corners_distance-val is deprecated.  Use scripts-msg:corners_distance instead.")
  (corners_distance m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SickTMini>) ostream)
  "Serializes a message object of type '<SickTMini>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'status_of_camera))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'status_of_camera))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left_corners) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right_corners) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'point) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'dolly_found) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'corners_distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SickTMini>) istream)
  "Deserializes a message object of type '<SickTMini>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'status_of_camera) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'status_of_camera) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left_corners) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right_corners) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'point) istream)
    (cl:setf (cl:slot-value msg 'dolly_found) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'corners_distance) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SickTMini>)))
  "Returns string type for a message object of type '<SickTMini>"
  "scripts/SickTMini")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SickTMini)))
  "Returns string type for a message object of type 'SickTMini"
  "scripts/SickTMini")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SickTMini>)))
  "Returns md5sum for a message object of type '<SickTMini>"
  "76823ce0964163b2612651f126853a31")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SickTMini)))
  "Returns md5sum for a message object of type 'SickTMini"
  "76823ce0964163b2612651f126853a31")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SickTMini>)))
  "Returns full string definition for message of type '<SickTMini>"
  (cl:format cl:nil "std_msgs/Header header ~%~%string status_of_camera~%~%geometry_msgs/Vector3 left_corners~%geometry_msgs/Vector3 right_corners~%geometry_msgs/Vector3 point~%~%bool dolly_found ~%float64 corners_distance ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SickTMini)))
  "Returns full string definition for message of type 'SickTMini"
  (cl:format cl:nil "std_msgs/Header header ~%~%string status_of_camera~%~%geometry_msgs/Vector3 left_corners~%geometry_msgs/Vector3 right_corners~%geometry_msgs/Vector3 point~%~%bool dolly_found ~%float64 corners_distance ~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SickTMini>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'status_of_camera))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left_corners))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right_corners))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'point))
     1
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SickTMini>))
  "Converts a ROS message object to a list"
  (cl:list 'SickTMini
    (cl:cons ':header (header msg))
    (cl:cons ':status_of_camera (status_of_camera msg))
    (cl:cons ':left_corners (left_corners msg))
    (cl:cons ':right_corners (right_corners msg))
    (cl:cons ':point (point msg))
    (cl:cons ':dolly_found (dolly_found msg))
    (cl:cons ':corners_distance (corners_distance msg))
))
