cmake_minimum_required(VERSION 3.8)
project(movement)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(irobot_create_msgs REQUIRED)

# Create exuctables
add_executable(walking src/walking.cpp)
add_executable(undocking_and_walking src/walkingv2.cpp)
add_executable(square src/square.cpp)

ament_target_dependencies(walking rclcpp geometry_msgs)
ament_target_dependencies(undocking_and_walking rclcpp rclcpp_action geometry_msgs irobot_create_msgs)
ament_target_dependencies(square rclcpp rclcpp_action geometry_msgs irobot_create_msgs)

install(TARGETS
  walking
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS
  undocking_and_walking
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS
  square
  DESTINATION lib/${PROJECT_NAME}
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
