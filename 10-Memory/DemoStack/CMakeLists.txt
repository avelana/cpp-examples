cmake_minimum_required(VERSION 3.15)
project(DemoStack)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoStack main.cpp src/Stack.h src/StackOnList.h)