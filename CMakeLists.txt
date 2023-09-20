cmake_minimum_required(VERSION 3.16)
add_definitions(-std=c++11)

project(
  parse_yaml_cpp
  VERSION 2.3.6
  DESCRIPTION "how to parse yaml file in cpp"
)

find_package(Eigen3 REQUIRED)
add_subdirectory(libraries/yaml-cpp) # This is one way of referencing another CMake project

include_directories(
    include
    INCLUDE_DIRS include
    LIBRARIES ${PROJECT_NAME}
    ${EIGEN3_INCLUDE_DIR}
    ${YAML_CPP_INCLUDE_DIR}
    DEPENDS system_lib
)
add_executable(parse_yaml src/main.cpp)
target_link_libraries(parse_yaml yaml-cpp)