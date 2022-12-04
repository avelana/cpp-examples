cmake_minimum_required(VERSION 3.20)
project(Demo20Cmake)

set(CMAKE_CXX_STANDARD 14)

set(HEADERS iolib.h)

set(SOURCES iolib.cpp
        main.cpp)

add_executable(Demo20Cmake ${HEADERS} ${SOURCES})
