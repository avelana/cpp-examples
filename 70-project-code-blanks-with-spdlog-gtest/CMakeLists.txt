cmake_minimum_required(VERSION 3.23)
project(70_project_code_blanks_with_spdlog_gtest)

set(CMAKE_CXX_STANDARD 17)

# 1.CREATE the directore "lib" in the project at the same level as directory "src".
# 2. clone https://github.com/gabime/spdlog.git into the directory "lib"
# 3. depending on where the directory "lib" is located, connect the spdlog library dependency by including
# the spdlog/include directory

include_directories(../lib/spdlog/include)

add_subdirectory(src)
add_subdirectory(test)

