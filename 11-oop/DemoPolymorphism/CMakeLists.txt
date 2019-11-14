cmake_minimum_required(VERSION 3.15)
project(DemoPolymorphism)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoPolymorphism main.cpp src/Shape.cpp src/Shape.h src/Rectangle.cpp src/Rectangle.h src/Triangle.cpp src/Triangle.h src/Point2D.cpp src/Point2D.h src/Point3D.cpp src/Point3D.h)