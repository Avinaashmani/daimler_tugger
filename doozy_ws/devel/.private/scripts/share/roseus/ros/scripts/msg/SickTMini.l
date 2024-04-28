;; Auto-generated. Do not edit!


(when (boundp 'scripts::SickTMini)
  (if (not (find-package "SCRIPTS"))
    (make-package "SCRIPTS"))
  (shadow 'SickTMini (find-package "SCRIPTS")))
(unless (find-package "SCRIPTS::SICKTMINI")
  (make-package "SCRIPTS::SICKTMINI"))

(in-package "ROS")
;;//! \htmlinclude SickTMini.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass scripts::SickTMini
  :super ros::object
  :slots (_header _status_of_camera _left_corners _right_corners _point _dolly_found _corners_distance ))

(defmethod scripts::SickTMini
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:status_of_camera __status_of_camera) "")
    ((:left_corners __left_corners) (instance geometry_msgs::Vector3 :init))
    ((:right_corners __right_corners) (instance geometry_msgs::Vector3 :init))
    ((:point __point) (instance geometry_msgs::Vector3 :init))
    ((:dolly_found __dolly_found) nil)
    ((:corners_distance __corners_distance) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _status_of_camera (string __status_of_camera))
   (setq _left_corners __left_corners)
   (setq _right_corners __right_corners)
   (setq _point __point)
   (setq _dolly_found __dolly_found)
   (setq _corners_distance (float __corners_distance))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:status_of_camera
   (&optional __status_of_camera)
   (if __status_of_camera (setq _status_of_camera __status_of_camera)) _status_of_camera)
  (:left_corners
   (&rest __left_corners)
   (if (keywordp (car __left_corners))
       (send* _left_corners __left_corners)
     (progn
       (if __left_corners (setq _left_corners (car __left_corners)))
       _left_corners)))
  (:right_corners
   (&rest __right_corners)
   (if (keywordp (car __right_corners))
       (send* _right_corners __right_corners)
     (progn
       (if __right_corners (setq _right_corners (car __right_corners)))
       _right_corners)))
  (:point
   (&rest __point)
   (if (keywordp (car __point))
       (send* _point __point)
     (progn
       (if __point (setq _point (car __point)))
       _point)))
  (:dolly_found
   (&optional (__dolly_found :null))
   (if (not (eq __dolly_found :null)) (setq _dolly_found __dolly_found)) _dolly_found)
  (:corners_distance
   (&optional __corners_distance)
   (if __corners_distance (setq _corners_distance __corners_distance)) _corners_distance)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _status_of_camera
    4 (length _status_of_camera)
    ;; geometry_msgs/Vector3 _left_corners
    (send _left_corners :serialization-length)
    ;; geometry_msgs/Vector3 _right_corners
    (send _right_corners :serialization-length)
    ;; geometry_msgs/Vector3 _point
    (send _point :serialization-length)
    ;; bool _dolly_found
    1
    ;; float64 _corners_distance
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _status_of_camera
       (write-long (length _status_of_camera) s) (princ _status_of_camera s)
     ;; geometry_msgs/Vector3 _left_corners
       (send _left_corners :serialize s)
     ;; geometry_msgs/Vector3 _right_corners
       (send _right_corners :serialize s)
     ;; geometry_msgs/Vector3 _point
       (send _point :serialize s)
     ;; bool _dolly_found
       (if _dolly_found (write-byte -1 s) (write-byte 0 s))
     ;; float64 _corners_distance
       (sys::poke _corners_distance (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _status_of_camera
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _status_of_camera (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; geometry_msgs/Vector3 _left_corners
     (send _left_corners :deserialize buf ptr-) (incf ptr- (send _left_corners :serialization-length))
   ;; geometry_msgs/Vector3 _right_corners
     (send _right_corners :deserialize buf ptr-) (incf ptr- (send _right_corners :serialization-length))
   ;; geometry_msgs/Vector3 _point
     (send _point :deserialize buf ptr-) (incf ptr- (send _point :serialization-length))
   ;; bool _dolly_found
     (setq _dolly_found (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _corners_distance
     (setq _corners_distance (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get scripts::SickTMini :md5sum-) "76823ce0964163b2612651f126853a31")
(setf (get scripts::SickTMini :datatype-) "scripts/SickTMini")
(setf (get scripts::SickTMini :definition-)
      "std_msgs/Header header 

string status_of_camera

geometry_msgs/Vector3 left_corners
geometry_msgs/Vector3 right_corners
geometry_msgs/Vector3 point

bool dolly_found 
float64 corners_distance 
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :scripts/SickTMini "76823ce0964163b2612651f126853a31")


