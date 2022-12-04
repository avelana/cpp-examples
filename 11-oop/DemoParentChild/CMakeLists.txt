cmake_minimum_required(VERSION 3.15)
project(DemoParentChild)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoParentChild main.cpp src/Parent.h src/Parent1.h src/Child.h src/A.h)