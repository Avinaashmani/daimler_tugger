; Auto-generated. Do not edit!


(cl:in-package daimler_tugger-srv)


;//! \htmlinclude DaimlerServiceCall-request.msg.html

(cl:defclass <DaimlerServiceCall-request> (roslisp-msg-protocol:ros-message)
  ((Set_Dock_State
    :reader Set_Dock_State
    :initarg :Set_Dock_State
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass DaimlerServiceCall-request (<DaimlerServiceCall-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DaimlerServiceCall-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DaimlerServiceCall-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name daimler_tugger-srv:<DaimlerServiceCall-request> is deprecated: use daimler_tugger-srv:DaimlerServiceCall-request instead.")))

(cl:ensure-generic-function 'Set_Dock_State-val :lambda-list '(m))
(cl:defmethod Set_Dock_State-val ((m <DaimlerServiceCall-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader daimler_tugger-srv:Set_Dock_State-val is deprecated.  Use daimler_tugger-srv:Set_Dock_State instead.")
  (Set_Dock_State m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DaimlerServiceCall-request>) ostream)
  "Serializes a message object of type '<DaimlerServiceCall-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Set_Dock_State) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DaimlerServiceCall-request>) istream)
  "Deserializes a message object of type '<DaimlerServiceCall-request>"
    (cl:setf (cl:slot-value msg 'Set_Dock_State) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DaimlerServiceCall-request>)))
  "Returns string type for a service object of type '<DaimlerServiceCall-request>"
  "daimler_tugger/DaimlerServiceCallRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DaimlerServiceCall-request)))
  "Returns string type for a service object of type 'DaimlerServiceCall-request"
  "daimler_tugger/DaimlerServiceCallRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DaimlerServiceCall-request>)))
  "Returns md5sum for a message object of type '<DaimlerServiceCall-request>"
  "9ac08f7e71c0b3bbe9b763939b61b7bb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DaimlerServiceCall-request)))
  "Returns md5sum for a message object of type 'DaimlerServiceCall-request"
  "9ac08f7e71c0b3bbe9b763939b61b7bb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DaimlerServiceCall-request>)))
  "Returns full string definition for message of type '<DaimlerServiceCall-request>"
  (cl:format cl:nil "bool Set_Dock_State~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DaimlerServiceCall-request)))
  "Returns full string definition for message of type 'DaimlerServiceCall-request"
  (cl:format cl:nil "bool Set_Dock_State~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DaimlerServiceCall-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DaimlerServiceCall-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DaimlerServiceCall-request
    (cl:cons ':Set_Dock_State (Set_Dock_State msg))
))
;//! \htmlinclude DaimlerServiceCall-response.msg.html

(cl:defclass <DaimlerServiceCall-response> (roslisp-msg-protocol:ros-message)
  ((Result
    :reader Result
    :initarg :Result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass DaimlerServiceCall-response (<DaimlerServiceCall-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DaimlerServiceCall-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DaimlerServiceCall-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name daimler_tugger-srv:<DaimlerServiceCall-response> is deprecated: use daimler_tugger-srv:DaimlerServiceCall-response instead.")))

(cl:ensure-generic-function 'Result-val :lambda-list '(m))
(cl:defmethod Result-val ((m <DaimlerServiceCall-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader daimler_tugger-srv:Result-val is deprecated.  Use daimler_tugger-srv:Result instead.")
  (Result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DaimlerServiceCall-response>) ostream)
  "Serializes a message object of type '<DaimlerServiceCall-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DaimlerServiceCall-response>) istream)
  "Deserializes a message object of type '<DaimlerServiceCall-response>"
    (cl:setf (cl:slot-value msg 'Result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DaimlerServiceCall-response>)))
  "Returns string type for a service object of type '<DaimlerServiceCall-response>"
  "daimler_tugger/DaimlerServiceCallResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DaimlerServiceCall-response)))
  "Returns string type for a service object of type 'DaimlerServiceCall-response"
  "daimler_tugger/DaimlerServiceCallResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DaimlerServiceCall-response>)))
  "Returns md5sum for a message object of type '<DaimlerServiceCall-response>"
  "9ac08f7e71c0b3bbe9b763939b61b7bb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DaimlerServiceCall-response)))
  "Returns md5sum for a message object of type 'DaimlerServiceCall-response"
  "9ac08f7e71c0b3bbe9b763939b61b7bb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DaimlerServiceCall-response>)))
  "Returns full string definition for message of type '<DaimlerServiceCall-response>"
  (cl:format cl:nil "bool Result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DaimlerServiceCall-response)))
  "Returns full string definition for message of type 'DaimlerServiceCall-response"
  (cl:format cl:nil "bool Result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DaimlerServiceCall-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DaimlerServiceCall-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DaimlerServiceCall-response
    (cl:cons ':Result (Result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DaimlerServiceCall)))
  'DaimlerServiceCall-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DaimlerServiceCall)))
  'DaimlerServiceCall-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DaimlerServiceCall)))
  "Returns string type for a service object of type '<DaimlerServiceCall>"
  "daimler_tugger/DaimlerServiceCall")