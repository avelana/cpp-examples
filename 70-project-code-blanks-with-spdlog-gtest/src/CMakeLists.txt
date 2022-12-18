# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

set(SOURCES main.cpp)
#set(HEADERS main.h) # если добавить заголовочники в список исполняемых
# файлов, то это вынудит cmake добавить .h файл в дерево исходников\проектов

add_executable(70_project_code_blanks_mainApp ${SOURCES})
