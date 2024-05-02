;; Auto-generated. Do not edit!


(when (boundp 'daimler_tugger::daimler_service_call)
  (if (not (find-package "DAIMLER_TUGGER"))
    (make-package "DAIMLER_TUGGER"))
  (shadow 'daimler_service_call (find-package "DAIMLER_TUGGER")))
(unless (find-package "DAIMLER_TUGGER::DAIMLER_SERVICE_CALL")
  (make-package "DAIMLER_TUGGER::DAIMLER_SERVICE_CALL"))
(unless (find-package "DAIMLER_TUGGER::DAIMLER_SERVICE_CALLREQUEST")
  (make-package "DAIMLER_TUGGER::DAIMLER_SERVICE_CALLREQUEST"))
(unless (find-package "DAIMLER_TUGGER::DAIMLER_SERVICE_CALLRESPONSE")
  (make-package "DAIMLER_TUGGER::DAIMLER_SERVICE_CALLRESPONSE"))

(in-package "ROS")





(defclass daimler_tugger::daimler_service_callRequest
  :super ros::object
  :slots (_Set_Undock_State _Set_Dock_State ))

(defmethod daimler_tugger::daimler_service_callRequest
  (:init
   (&key
    ((:Set_Undock_State __Set_Undock_State) nil)
    ((:Set_Dock_State __Set_Dock_State) nil)
    )
   (send-super :init)
   (setq _Set_Undock_State __Set_Undock_State)
   (setq _Set_Dock_State __Set_Dock_State)
   self)
  (:Set_Undock_State
   (&optional (__Set_Undock_State :null))
   (if (not (eq __Set_Undock_State :null)) (setq _Set_Undock_State __Set_Undock_State)) _Set_Undock_State)
  (:Set_Dock_State
   (&optional (__Set_Dock_State :null))
   (if (not (eq __Set_Dock_State :null)) (setq _Set_Dock_State __Set_Dock_State)) _Set_Dock_State)
  (:serialization-length
   ()
   (+
    ;; bool _Set_Undock_State
    1
    ;; bool _Set_Dock_State
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _Set_Undock_State
       (if _Set_Undock_State (write-byte -1 s) (write-byte 0 s))
     ;; bool _Set_Dock_State
       (if _Set_Dock_State (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _Set_Undock_State
     (setq _Set_Undock_State (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _Set_Dock_State
     (setq _Set_Dock_State (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass daimler_tugger::daimler_service_callResponse
  :super ros::object
  :slots (_Result ))

(defmethod daimler_tugger::daimler_service_callResponse
  (:init
   (&key
    ((:Result __Result) nil)
    )
   (send-super :init)
   (setq _Result __Result)
   self)
  (:Result
   (&optional (__Result :null))
   (if (not (eq __Result :null)) (setq _Result __Result)) _Result)
  (:serialization-length
   ()
   (+
    ;; bool _Result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _Result
       (if _Result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _Result
     (setq _Result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass daimler_tugger::daimler_service_call
  :super ros::object
  :slots ())

(setf (get daimler_tugger::daimler_service_call :md5sum-) "dd04567e9742c14ebff061ebed5af4a1")
(setf (get daimler_tugger::daimler_service_call :datatype-) "daimler_tugger/daimler_service_call")
(setf (get daimler_tugger::daimler_service_call :request) daimler_tugger::daimler_service_callRequest)
(setf (get daimler_tugger::daimler_service_call :response) daimler_tugger::daimler_service_callResponse)

(defmethod daimler_tugger::daimler_service_callRequest
  (:response () (instance daimler_tugger::daimler_service_callResponse :init)))

(setf (get daimler_tugger::daimler_service_callRequest :md5sum-) "dd04567e9742c14ebff061ebed5af4a1")
(setf (get daimler_tugger::daimler_service_callRequest :datatype-) "daimler_tugger/daimler_service_callRequest")
(setf (get daimler_tugger::daimler_service_callRequest :definition-)
      "bool Set_Undock_State
bool Set_Dock_State
---
bool Result
")

(setf (get daimler_tugger::daimler_service_callResponse :md5sum-) "dd04567e9742c14ebff061ebed5af4a1")
(setf (get daimler_tugger::daimler_service_callResponse :datatype-) "daimler_tugger/daimler_service_callResponse")
(setf (get daimler_tugger::daimler_service_callResponse :definition-)
      "bool Set_Undock_State
bool Set_Dock_State
---
bool Result
")



(provide :daimler_tugger/daimler_service_call "dd04567e9742c14ebff061ebed5af4a1")


