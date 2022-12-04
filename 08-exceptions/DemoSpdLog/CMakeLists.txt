cmake_minimum_required(VERSION 3.20)
project(DemoSpdLog)

set(CMAKE_CXX_STANDARD 14)

#add_executable(DemoSpdLog main.cpp)
#
#if(NOT TARGET spdlog)
#    # Stand-alone build
#    find_package(spdlog REQUIRED)
#endif()
#
## ---------------------------------------------------------------------------------------
## Example of using pre-compiled library
## ---------------------------------------------------------------------------------------
#target_link_libraries(DemoSpdLog PRIVATE spdlog::spdlog)
#
## ---------------------------------------------------------------------------------------
## Example of using header-only library
## ---------------------------------------------------------------------------------------
#if(SPDLOG_BUILD_EXAMPLE_HO)
#    add_executable(example_header_only main.cpp)
#    target_link_libraries(example_header_only PRIVATE spdlog::spdlog_header_only)
#endif()

add_subdirectory("lib/spdlog")

find_package(spdlog)

add_executable(DemoSpdLog src/main.cpp)

target_link_libraries(DemoSpdLog spdlog)

