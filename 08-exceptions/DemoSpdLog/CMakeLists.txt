cmake_minimum_required(VERSION 3.20)
project(DemoSpdLog)

set(CMAKE_CXX_STANDARD 14)

include_directories(../lib/spdlog/include)

add_executable(DemoSpdLog src/main.cpp)


