cmake_minimum_required(VERSION 3.14)
project(DemoFStreamBasics)

set(CMAKE_CXX_STANDARD 11)

file(GLOB MY_DATA
        "data/*.txt"
        )
file(COPY ${MY_DATA} DESTINATION data)

add_executable(DemoFStreamBasics main.cpp io_file.h io_file.cpp)