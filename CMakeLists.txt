cmake_minimum_required(VERSION 3.8)
project(stepper_driver_terminal)

# Compiler settings
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(stepper_driver REQUIRED)

# Logic shared by all targets
include_directories(
  include
)

set(project_SOURCE_FILES
  src/main.cpp
  src/node.cpp
)

set(project_LIBRARIES
  ${rclcpp_LIBRARIES}
  ${modbus_LIBRARIES}
  ${modbus_rtu_LIBRARIES}
  ${modbus_rtu_native_LIBRARIES}
  ${stepper_driver_LIBRARIES}
  ${stepper_driver_native_LIBRARIES}
)

set(project_DEPENDENCIES
  rclcpp
  stepper_driver
)


# Executable target
add_executable(${PROJECT_NAME} ${project_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${project_LIBRARIES})
ament_target_dependencies(${PROJECT_NAME} ${project_DEPENDENCIES})
install(TARGETS
  ${PROJECT_NAME}
  DESTINATION bin/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
