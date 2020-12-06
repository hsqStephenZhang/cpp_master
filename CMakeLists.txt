cmake_minimum_required(VERSION 3.15)
project(cpp_master)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_master main.cpp)
add_executable(chapter2 chapter2/basic_c.cpp)
add_executable(chapter3 chapter3/basic_cpp.cpp)
add_executable(chapter3_const chapter3/const_manipulate.cpp)
add_executable(chapter3_reference chapter3/reference.cpp)
add_executable(chapter3_static chapter3/static.cpp)
add_executable(chapter4_class chapter4/basic_class.cpp chapter4/Array.cpp chapter4/Array.h)
add_executable(chapter4_init chapter4/class_init.cpp)

add_executable(chapter9_reload chapter9/reload.cpp)
