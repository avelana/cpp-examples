cmake_minimum_required(VERSION 3.15)
project(DemoMultipleInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoMultipleInheritance main.cpp src/Human.h src/Employee.h src/Teacher.h src/Copier.h src/X.h)