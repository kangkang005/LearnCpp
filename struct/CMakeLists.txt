cmake_minimum_required(VERSION 3.10)
project(auto)

set(CMAKE_CXX_STANDARD 11)

add_executable(constructor constructor.cpp)
add_executable(declare_pointer declare_pointer.cpp)
add_executable(nest nest.c)
add_executable(nest_cpp nest.cpp)
add_executable(pointer pointer.cpp)
