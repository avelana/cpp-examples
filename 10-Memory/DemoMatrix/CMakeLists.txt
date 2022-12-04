cmake_minimum_required(VERSION 3.15)
project(DemoMatrix)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoMatrix main.cpp src/Matrix.cpp src/Matrix.h)