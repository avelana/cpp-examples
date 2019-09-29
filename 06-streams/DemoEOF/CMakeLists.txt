cmake_minimum_required(VERSION 3.14)
project(DemoEOF)

set(CMAKE_CXX_STANDARD 14)


file(GLOB MY_DATA
        "data/*.txt"
        )
file(COPY ${MY_DATA} DESTINATION data)

add_executable(DemoEOF main.cpp)

