cmake_minimum_required(VERSION 3.14)
project(prCPP_1sem)

add_subdirectory(01-linear-algorithms/HelloWorld)
add_subdirectory(01-linear-algorithms/DemoDataTypes)
add_subdirectory(01-linear-algorithms/DemoAssignment)
add_subdirectory(01-linear-algorithms/DemoCMath)

add_subdirectory(01-linear-algorithms/DemoLocal)
add_subdirectory(01-linear-algorithms/DemoLocal-ver2)

add_subdirectory(01-linear-algorithms/DemoComma)

add_subdirectory(02-selection-statements/DemoScope)
add_subdirectory(02-selection-statements/DemoSqrt)
add_subdirectory(02-selection-statements/DemoStaticAssert)
add_subdirectory(02-selection-statements/DemoSwitch)
add_subdirectory(02-selection-statements/DemoTernaryStatement)

add_subdirectory(03-loop-statements/Demo2DementionalArray)
add_subdirectory(03-loop-statements/DemoBubbleSort)
add_subdirectory(03-loop-statements/DemoLoops)
add_subdirectory(03-loop-statements/DemoBreakContinue)
add_subdirectory(03-loop-statements/DemoAuto)
add_subdirectory(03-loop-statements/DemoIsPalindrome)

add_subdirectory(03-loop-statements/DemoInsertSort)
add_subdirectory(03-loop-statements/DemoInsertSortBinarySearch)
add_subdirectory(03-loop-statements/DemoSelectionSort)
add_subdirectory(03-loop-statements/DemoShakerSort)

add_subdirectory(04-functions/DemoFunctions)
add_subdirectory(04-functions/DemoSwapOverload)
add_subdirectory(04-functions/DemoSum)
add_subdirectory(04-functions/DemoReturn)
add_subdirectory(04-functions/DemoDefaultValue)
add_subdirectory(04-functions/DemoConstReference)
add_subdirectory(04-functions/DemoInline)
add_subdirectory(04-functions/DemoOverload)
add_subdirectory(04-functions/DemoSqrtK)
add_subdirectory(04-functions/DemoSwapTemplate)

add_subdirectory(04-functions/DemoChrono)

add_subdirectory(04-functions/HomeWork/MaxFunctionOverload)
add_subdirectory(04-functions/HomeWork/BubbleSortWithTemplate)

add_subdirectory(05-containers/DemoVectorArray)
add_subdirectory(05-containers/DemoSetMiltiset)
add_subdirectory(05-containers/DemoMapMultimap)

add_subdirectory(05-containers/DemoStlBasicAlgorithms)
add_subdirectory(05-containers/DemoLambda)


add_subdirectory(06-streams/DemoFStreamBasics)
add_subdirectory(06-streams/DemoEOF)
add_subdirectory(06-streams/DemoFunctionValues)

add_subdirectory(07-structures-classes/DemoStructure)
add_subdirectory(07-structures-classes/DemoStructureInitValues)


set(CMAKE_CXX_STANDARD 14)

add_executable(prCPP_1sem main.cpp)