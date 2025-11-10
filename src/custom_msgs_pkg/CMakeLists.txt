cmake_minimum_required(VERSION 3.8)
project(custom_msgs_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


##############################################################################################################################################################################

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)  
find_package(rosidl_default_generators REQUIRED)

# === Declare the interface messages ===
rosidl_generate_interfaces(${PROJECT_NAME}
  "msgs/BoundingBox.msg"
  "msgs/DetectionList.msg"
  "msgs/Object3D.msg"
  "msgs/Detection3DList.msg"
  DEPENDENCIES std_msgs sensor_msgs
)

##############################################################################################################################################################################
# Optional: If you want to run tests with a linter, ensure these dependencies are found
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # Skip linter checks if copyright/license isn't set
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

