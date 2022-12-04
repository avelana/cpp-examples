cmake_minimum_required(VERSION 3.20)
project(DemoConstructors)

set(CMAKE_CXX_STANDARD 17)

add_executable(DemoConstructors src/main.cpp src/Time.h src/Time.cpp
        src/IntArray.h src/IntArray.cpp src/Vector.h src/Vector.cpp)
