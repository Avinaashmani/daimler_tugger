;; Auto-generated. Do not edit!


(when (boundp 'daimler_tugger::DaimlerServiceCall)
  (if (not (find-package "DAIMLER_TUGGER"))
    (make-package "DAIMLER_TUGGER"))
  (shadow 'DaimlerServiceCall (find-package "DAIMLER_TUGGER")))
(unless (find-package "DAIMLER_TUGGER::DAIMLERSERVICECALL")
  (make-package "DAIMLER_TUGGER::DAIMLERSERVICECALL"))
(unless (find-package "DAIMLER_TUGGER::DAIMLERSERVICECALLREQUEST")
  (make-package "DAIMLER_TUGGER::DAIMLERSERVICECALLREQUEST"))
(unless (find-package "DAIMLER_TUGGER::DAIMLERSERVICECALLRESPONSE")
  (make-package "DAIMLER_TUGGER::DAIMLERSERVICECALLRESPONSE"))

(in-package "ROS")





(defclass daimler_tugger::DaimlerServiceCallRequest
  :super ros::object
  :slots (_Set_Dock_State ))

(defmethod daimler_tugger::DaimlerServiceCallRequest
  (:init
   (&key
    ((:Set_Dock_State __Set_Dock_State) nil)
    )
   (send-super :init)
   (setq _Set_Dock_State __Set_Dock_State)
   self)
  (:Set_Dock_State
   (&optional (__Set_Dock_State :null))
   (if (not (eq __Set_Dock_State :null)) (setq _Set_Dock_State __Set_Dock_State)) _Set_Dock_State)
  (:serialization-length
   ()
   (+
    ;; bool _Set_Dock_State
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _Set_Dock_State
       (if _Set_Dock_State (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _Set_Dock_State
     (setq _Set_Dock_State (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass daimler_tugger::DaimlerServiceCallResponse
  :super ros::object
  :slots (_Result ))

(defmethod daimler_tugger::DaimlerServiceCallResponse
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

(defclass daimler_tugger::DaimlerServiceCall
  :super ros::object
  :slots ())

(setf (get daimler_tugger::DaimlerServiceCall :md5sum-) "9ac08f7e71c0b3bbe9b763939b61b7bb")
(setf (get daimler_tugger::DaimlerServiceCall :datatype-) "daimler_tugger/DaimlerServiceCall")
(setf (get daimler_tugger::DaimlerServiceCall :request) daimler_tugger::DaimlerServiceCallRequest)
(setf (get daimler_tugger::DaimlerServiceCall :response) daimler_tugger::DaimlerServiceCallResponse)

(defmethod daimler_tugger::DaimlerServiceCallRequest
  (:response () (instance daimler_tugger::DaimlerServiceCallResponse :init)))

(setf (get daimler_tugger::DaimlerServiceCallRequest :md5sum-) "9ac08f7e71c0b3bbe9b763939b61b7bb")
(setf (get daimler_tugger::DaimlerServiceCallRequest :datatype-) "daimler_tugger/DaimlerServiceCallRequest")
(setf (get daimler_tugger::DaimlerServiceCallRequest :definition-)
      "bool Set_Dock_State
---
bool Result
")

(setf (get daimler_tugger::DaimlerServiceCallResponse :md5sum-) "9ac08f7e71c0b3bbe9b763939b61b7bb")
(setf (get daimler_tugger::DaimlerServiceCallResponse :datatype-) "daimler_tugger/DaimlerServiceCallResponse")
(setf (get daimler_tugger::DaimlerServiceCallResponse :definition-)
      "bool Set_Dock_State
---
bool Result
")



(provide :daimler_tugger/DaimlerServiceCall "9ac08f7e71c0b3bbe9b763939b61b7bb")


