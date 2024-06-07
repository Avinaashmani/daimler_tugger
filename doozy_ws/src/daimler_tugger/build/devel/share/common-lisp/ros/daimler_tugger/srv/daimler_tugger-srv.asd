
(cl:in-package :asdf)

(defsystem "daimler_tugger-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "DaimlerServiceCall" :depends-on ("_package_DaimlerServiceCall"))
    (:file "_package_DaimlerServiceCall" :depends-on ("_package"))
  ))