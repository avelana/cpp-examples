cmake_minimum_required(VERSION 3.14)
project(Demo03Sum)

set(CMAKE_CXX_STANDARD 14)

add_executable(Demo03Sum main.cpp Arithmetic.h Arithmetic.cpp)
#
#set(SOURCE_EXE main.cpp)            # Установка переменной со списком исходников
#
#set(SOURCE_LIB Arithmetic.cpp)
#
#add_library(Arithmetic STATIC ${SOURCE_LIB})# Создание статической библиотеки
#
#add_executable(DemoSum ${SOURCE_EXE})  # Создает исполняемый файл с именем main
## из исходника main.cpp
#
#target_link_libraries(DemoSum Arithmetic)     # Линковка программы с библиотекой