set(SOURCES main.cpp arithmeticlib.cpp)
set(HEADERS arithmeticlib.h) # если добавить заголовочники в список исполняемых
# файлов, то это вынудит cmake добавить .h файл в дерево исходников\проектов

add_executable(DemoGoogleTest ${SOURCES} ${HEADERS})