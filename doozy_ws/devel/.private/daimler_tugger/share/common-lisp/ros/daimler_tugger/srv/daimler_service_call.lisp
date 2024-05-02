; Auto-generated. Do not edit!


(cl:in-package daimler_tugger-srv)


;//! \htmlinclude daimler_service_call-request.msg.html

(cl:defclass <daimler_service_call-request> (roslisp-msg-protocol:ros-message)
  ((Set_Undock_State
    :reader Set_Undock_State
    :initarg :Set_Undock_State
    :type cl:boolean
    :initform cl:nil)
   (Set_Dock_State
    :reader Set_Dock_State
    :initarg :Set_Dock_State
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass daimler_service_call-request (<daimler_service_call-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <daimler_service_call-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'daimler_service_call-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name daimler_tugger-srv:<daimler_service_call-request> is deprecated: use daimler_tugger-srv:daimler_service_call-request instead.")))

(cl:ensure-generic-function 'Set_Undock_State-val :lambda-list '(m))
(cl:defmethod Set_Undock_State-val ((m <daimler_service_call-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader daimler_tugger-srv:Set_Undock_State-val is deprecated.  Use daimler_tugger-srv:Set_Undock_State instead.")
  (Set_Undock_State m))

(cl:ensure-generic-function 'Set_Dock_State-val :lambda-list '(m))
(cl:defmethod Set_Dock_State-val ((m <daimler_service_call-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader daimler_tugger-srv:Set_Dock_State-val is deprecated.  Use daimler_tugger-srv:Set_Dock_State instead.")
  (Set_Dock_State m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <daimler_service_call-request>) ostream)
  "Serializes a message object of type '<daimler_service_call-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Set_Undock_State) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Set_Dock_State) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <daimler_service_call-request>) istream)
  "Deserializes a message object of type '<daimler_service_call-request>"
    (cl:setf (cl:slot-value msg 'Set_Undock_State) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'Set_Dock_State) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<daimler_service_call-request>)))
  "Returns string type for a service object of type '<daimler_service_call-request>"
  "daimler_tugger/daimler_service_callRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'daimler_service_call-request)))
  "Returns string type for a service object of type 'daimler_service_call-request"
  "daimler_tugger/daimler_service_callRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<daimler_service_call-request>)))
  "Returns md5sum for a message object of type '<daimler_service_call-request>"
  "dd04567e9742c14ebff061ebed5af4a1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'daimler_service_call-request)))
  "Returns md5sum for a message object of type 'daimler_service_call-request"
  "dd04567e9742c14ebff061ebed5af4a1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<daimler_service_call-request>)))
  "Returns full string definition for message of type '<daimler_service_call-request>"
  (cl:format cl:nil "bool Set_Undock_State~%bool Set_Dock_State~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'daimler_service_call-request)))
  "Returns full string definition for message of type 'daimler_service_call-request"
  (cl:format cl:nil "bool Set_Undock_State~%bool Set_Dock_State~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <daimler_service_call-request>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <daimler_service_call-request>))
  "Converts a ROS message object to a list"
  (cl:list 'daimler_service_call-request
    (cl:cons ':Set_Undock_State (Set_Undock_State msg))
    (cl:cons ':Set_Dock_State (Set_Dock_State msg))
))
;//! \htmlinclude daimler_service_call-response.msg.html

(cl:defclass <daimler_service_call-response> (roslisp-msg-protocol:ros-message)
  ((Result
    :reader Result
    :initarg :Result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass daimler_service_call-response (<daimler_service_call-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <daimler_service_call-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'daimler_service_call-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name daimler_tugger-srv:<daimler_service_call-response> is deprecated: use daimler_tugger-srv:daimler_service_call-response instead.")))

(cl:ensure-generic-function 'Result-val :lambda-list '(m))
(cl:defmethod Result-val ((m <daimler_service_call-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader daimler_tugger-srv:Result-val is deprecated.  Use daimler_tugger-srv:Result instead.")
  (Result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <daimler_service_call-response>) ostream)
  "Serializes a message object of type '<daimler_service_call-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <daimler_service_call-response>) istream)
  "Deserializes a message object of type '<daimler_service_call-response>"
    (cl:setf (cl:slot-value msg 'Result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<daimler_service_call-response>)))
  "Returns string type for a service object of type '<daimler_service_call-response>"
  "daimler_tugger/daimler_service_callResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'daimler_service_call-response)))
  "Returns string type for a service object of type 'daimler_service_call-response"
  "daimler_tugger/daimler_service_callResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<daimler_service_call-response>)))
  "Returns md5sum for a message object of type '<daimler_service_call-response>"
  "dd04567e9742c14ebff061ebed5af4a1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'daimler_service_call-response)))
  "Returns md5sum for a message object of type 'daimler_service_call-response"
  "dd04567e9742c14ebff061ebed5af4a1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<daimler_service_call-response>)))
  "Returns full string definition for message of type '<daimler_service_call-response>"
  (cl:format cl:nil "bool Result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'daimler_service_call-response)))
  "Returns full string definition for message of type 'daimler_service_call-response"
  (cl:format cl:nil "bool Result~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <daimler_service_call-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <daimler_service_call-response>))
  "Converts a ROS message object to a list"
  (cl:list 'daimler_service_call-response
    (cl:cons ':Result (Result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'daimler_service_call)))
  'daimler_service_call-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'daimler_service_call)))
  'daimler_service_call-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'daimler_service_call)))
  "Returns string type for a service object of type '<daimler_service_call>"
  "daimler_tugger/daimler_service_call")