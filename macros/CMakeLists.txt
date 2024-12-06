cmake_minimum_required(VERSION 3.10)
project(macros)

set(CMAKE_CXX_STANDARD 11)

file(GLOB MATH_LIB_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.c)

add_library(math STATIC ${MATH_LIB_SRC})
add_executable(extern_c extern_c.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(extern_c math)

add_executable(define_function define_function.cpp)
