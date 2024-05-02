# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "daimler_tugger: 0 messages, 1 services")

set(MSG_I_FLAGS "-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(daimler_tugger_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" NAME_WE)
add_custom_target(_daimler_tugger_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "daimler_tugger" "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(daimler_tugger
  "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/daimler_tugger
)

### Generating Module File
_generate_module_cpp(daimler_tugger
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/daimler_tugger
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(daimler_tugger_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(daimler_tugger_generate_messages daimler_tugger_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" NAME_WE)
add_dependencies(daimler_tugger_generate_messages_cpp _daimler_tugger_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(daimler_tugger_gencpp)
add_dependencies(daimler_tugger_gencpp daimler_tugger_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS daimler_tugger_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(daimler_tugger
  "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/daimler_tugger
)

### Generating Module File
_generate_module_eus(daimler_tugger
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/daimler_tugger
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(daimler_tugger_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(daimler_tugger_generate_messages daimler_tugger_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" NAME_WE)
add_dependencies(daimler_tugger_generate_messages_eus _daimler_tugger_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(daimler_tugger_geneus)
add_dependencies(daimler_tugger_geneus daimler_tugger_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS daimler_tugger_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(daimler_tugger
  "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/daimler_tugger
)

### Generating Module File
_generate_module_lisp(daimler_tugger
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/daimler_tugger
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(daimler_tugger_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(daimler_tugger_generate_messages daimler_tugger_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" NAME_WE)
add_dependencies(daimler_tugger_generate_messages_lisp _daimler_tugger_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(daimler_tugger_genlisp)
add_dependencies(daimler_tugger_genlisp daimler_tugger_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS daimler_tugger_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(daimler_tugger
  "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/daimler_tugger
)

### Generating Module File
_generate_module_nodejs(daimler_tugger
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/daimler_tugger
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(daimler_tugger_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(daimler_tugger_generate_messages daimler_tugger_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" NAME_WE)
add_dependencies(daimler_tugger_generate_messages_nodejs _daimler_tugger_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(daimler_tugger_gennodejs)
add_dependencies(daimler_tugger_gennodejs daimler_tugger_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS daimler_tugger_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(daimler_tugger
  "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/daimler_tugger
)

### Generating Module File
_generate_module_py(daimler_tugger
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/daimler_tugger
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(daimler_tugger_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(daimler_tugger_generate_messages daimler_tugger_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/src/daimler_tugger/srv/DaimlerServiceCall.srv" NAME_WE)
add_dependencies(daimler_tugger_generate_messages_py _daimler_tugger_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(daimler_tugger_genpy)
add_dependencies(daimler_tugger_genpy daimler_tugger_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS daimler_tugger_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/daimler_tugger)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/daimler_tugger
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(daimler_tugger_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(daimler_tugger_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/daimler_tugger)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/daimler_tugger
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(daimler_tugger_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(daimler_tugger_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/daimler_tugger)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/daimler_tugger
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(daimler_tugger_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(daimler_tugger_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/daimler_tugger)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/daimler_tugger
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(daimler_tugger_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(daimler_tugger_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/daimler_tugger)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/daimler_tugger\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/daimler_tugger
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(daimler_tugger_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(daimler_tugger_generate_messages_py std_msgs_generate_messages_py)
endif()
