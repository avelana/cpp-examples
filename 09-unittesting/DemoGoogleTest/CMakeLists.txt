cmake_minimum_required(VERSION 3.15)
project(DemoGoogleTest)

set(CMAKE_CXX_STANDARD 14)

# чтобы собрать библиотеку
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
set(SOURCE_FILES main.cpp)
add_executable(DemoGoogleTest ${SOURCE_FILES})

target_link_libraries(DemoGoogleTest gtest)

#add_subdirectory(lib/gtest)
#target_link_libraries(DemoGoogleTest gtest gtest_main)