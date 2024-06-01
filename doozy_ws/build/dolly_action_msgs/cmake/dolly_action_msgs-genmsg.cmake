# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "dolly_action_msgs: 7 messages, 0 services")

set(MSG_I_FLAGS "-Idolly_action_msgs:/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(dolly_action_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" "actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:dolly_action_msgs/amrDockResult:dolly_action_msgs/amrDockActionResult:dolly_action_msgs/amrDockGoal:std_msgs/Header:dolly_action_msgs/amrDockActionFeedback:dolly_action_msgs/amrDockFeedback:dolly_action_msgs/amrDockActionGoal"
)

get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" "actionlib_msgs/GoalID:dolly_action_msgs/amrDockGoal:std_msgs/Header"
)

get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" "actionlib_msgs/GoalID:dolly_action_msgs/amrDockResult:std_msgs/Header:actionlib_msgs/GoalStatus"
)

get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" "actionlib_msgs/GoalID:dolly_action_msgs/amrDockFeedback:std_msgs/Header:actionlib_msgs/GoalStatus"
)

get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" ""
)

get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" ""
)

get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" NAME_WE)
add_custom_target(_dolly_action_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dolly_action_msgs" "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_cpp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(dolly_action_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(dolly_action_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(dolly_action_msgs_generate_messages dolly_action_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_cpp _dolly_action_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dolly_action_msgs_gencpp)
add_dependencies(dolly_action_msgs_gencpp dolly_action_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dolly_action_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_eus(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(dolly_action_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(dolly_action_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(dolly_action_msgs_generate_messages dolly_action_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_eus _dolly_action_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dolly_action_msgs_geneus)
add_dependencies(dolly_action_msgs_geneus dolly_action_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dolly_action_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_lisp(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(dolly_action_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(dolly_action_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(dolly_action_msgs_generate_messages dolly_action_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_lisp _dolly_action_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dolly_action_msgs_genlisp)
add_dependencies(dolly_action_msgs_genlisp dolly_action_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dolly_action_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_nodejs(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(dolly_action_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(dolly_action_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(dolly_action_msgs_generate_messages dolly_action_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_nodejs _dolly_action_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dolly_action_msgs_gennodejs)
add_dependencies(dolly_action_msgs_gennodejs dolly_action_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dolly_action_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)
_generate_msg_py(dolly_action_msgs
  "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(dolly_action_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(dolly_action_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(dolly_action_msgs_generate_messages dolly_action_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockAction.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockActionFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockGoal.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockResult.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/daimler_tugger/doozy_ws/devel/.private/dolly_action_msgs/share/dolly_action_msgs/msg/amrDockFeedback.msg" NAME_WE)
add_dependencies(dolly_action_msgs_generate_messages_py _dolly_action_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dolly_action_msgs_genpy)
add_dependencies(dolly_action_msgs_genpy dolly_action_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dolly_action_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dolly_action_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_cpp)
  add_dependencies(dolly_action_msgs_generate_messages_cpp actionlib_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(dolly_action_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(dolly_action_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/dolly_action_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_eus)
  add_dependencies(dolly_action_msgs_generate_messages_eus actionlib_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(dolly_action_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(dolly_action_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dolly_action_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_lisp)
  add_dependencies(dolly_action_msgs_generate_messages_lisp actionlib_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(dolly_action_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(dolly_action_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/dolly_action_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_nodejs)
  add_dependencies(dolly_action_msgs_generate_messages_nodejs actionlib_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(dolly_action_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(dolly_action_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dolly_action_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_py)
  add_dependencies(dolly_action_msgs_generate_messages_py actionlib_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(dolly_action_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(dolly_action_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
