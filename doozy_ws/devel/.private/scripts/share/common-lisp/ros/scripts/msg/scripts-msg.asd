
(cl:in-package :asdf)

(defsystem "scripts-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "SickTMini" :depends-on ("_package_SickTMini"))
    (:file "_package_SickTMini" :depends-on ("_package"))
  ))