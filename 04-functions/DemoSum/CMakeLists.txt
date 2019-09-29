cmake_minimum_required(VERSION 3.14)
project(DemoSum)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoSum main.cpp Arithmetic.h Arithmetic.cpp)