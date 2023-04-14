cmake_minimum_required(VERSION 3.25)

project(markdown_generator)

add_definitions(-std=c++11)

set(src src/main.cpp)
add_executable(markdown_generator ${src})

include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/yaml-cpp/include/)

target_link_libraries(markdown_generator ${CMAKE_HOME_DIRECTORY}/yaml-cpp/build/libyaml-cpp.a)
