cmake_minimum_required(VERSION 3.25)

project(markdown_generator)

add_definitions(-std=c++11)

set(src main.cpp)
add_executable(markdown_generator ${src})

target_link_libraries(markdown_generator ${CMAKE_HOME_DIRECTORY}/yaml-cpp/build/libyaml-cpp.a)
