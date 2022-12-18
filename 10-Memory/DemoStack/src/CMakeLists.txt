
set(SOURCES main.cpp)
set(HEADERS Stack.h StackOnList.h) # если добавить заголовочники в список исполняемых
# файлов, то это вынудит cmake добавить .h файл в дерево исходников\проектов

add_executable(DemoStack ${SOURCES} ${HEADERS})