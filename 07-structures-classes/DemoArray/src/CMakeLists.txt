#file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.cpp)
#file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true *.h)
#
#set(SOURCES ${SOURCES})
#
#set(HEADERS ${HEADERS})

#add_executable(DemoArray
#        src/controller/Program.h src/controller/Program.cpp
#        src/service/ArrayOnVectorService.h src/service/ArrayOnVectorService.cpp
#        src/service/ArrayService.h src/service/ArrayService.cpp
#        src/entity/ArrayOnVector.h src/entity/ArrayOnVector.cpp
#        src/entity/Array.h src/entity/Array.cpp
#        src/service/ArrayCreator.h src/service/ArrayCreator.cpp
#        src/controller/IOConsole.h src/controller/IOConsole.cpp
#        src/Logger.cpp src/Logger.h
#        main.cpp src/dataaccesslayer/FileReader.cpp src/dataaccesslayer/FileReader.h)

add_executable(DemoArray
        controller/Program.h controller/Program.cpp
        service/ArrayOnVectorService.h service/ArrayOnVectorService.cpp
        service/ArrayService.h service/ArrayService.cpp
        entity/ArrayOnVector.h entity/ArrayOnVector.cpp
        entity/Array.h entity/Array.cpp
        service/ArrayCreator.h service/ArrayCreator.cpp
        controller/IOConsole.h controller/IOConsole.cpp
        Logger.cpp Logger.h
        dataaccesslayer/FileReader.cpp dataaccesslayer/FileReader.h main.cpp)

#add_executable(DemoArray ${SOURCES} ${HEADERS})