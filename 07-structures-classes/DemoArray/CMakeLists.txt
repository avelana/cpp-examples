cmake_minimum_required(VERSION 3.23)
project(DemoArray)

set(CMAKE_CXX_STANDARD 17)

include_directories(../lib/spdlog/include)

file(GLOB MY_DATA
        "data/*.txt"
        )
file(COPY ${MY_DATA} DESTINATION data)

add_subdirectory(src)