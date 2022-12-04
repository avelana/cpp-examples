cmake_minimum_required(VERSION 3.15)
project(DemoGlog)

set(CMAKE_CXX_STANDARD 14)

#If you have Glog installed in your system, you can use the CMake command find_package() to include it in your CMake Project.
#find_package(glog 0.4.0 REQUIRED)
#add_subdirectory(lib/glog)

set(SOURCE_FILES main.cpp)
#add_executable(DemoGlog ${SOURCE_FILES} lib/glog/logging.h)
#link_directories(lib)
#target_link_libraries(DemoGlog glog::glog)

