cmake_minimum_required(VERSION 3.23)
project(DemoArray)

set(CMAKE_CXX_STANDARD 17)
#add_subdirectory("lib/spdlog")
#
#if(NOT TARGET spdlog)
#    # Stand-alone build
#    find_package(spdlog REQUIRED)
#endif()
#
## ---------------------------------------------------------------------------------------
## Example of using header-only library
## ---------------------------------------------------------------------------------------
#if(SPDLOG_BUILD_EXAMPLE_HO)
#
#    target_link_libraries(DemoArray PRIVATE spdlog::spdlog_header_only)
#
#endif()

add_subdirectory("lib/spdlog")

find_package(spdlog)

add_executable(DemoArray
        src/controller/Program.h src/controller/Program.cpp
        src/service/ArrayOnVectorService.h src/service/ArrayOnVectorService.cpp
        src/service/ArrayService.h src/service/ArrayService.cpp
        src/entity/ArrayOnVector.h src/entity/ArrayOnVector.cpp
        src/entity/Array.h src/entity/Array.cpp
        src/service/ArrayCreator.h src/service/ArrayCreator.cpp
        src/controller/IOConsole.h src/controller/IOConsole.cpp
        src/Logger.cpp src/Logger.h
        main.cpp src/dataaccesslayer/FileReader.cpp src/dataaccesslayer/FileReader.h)

target_link_libraries(DemoArray spdlog)