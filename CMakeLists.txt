cmake_minimum_required(VERSION 3.14)
project(prCPP_1sem)

set(CMAKE_CXX_STANDARD 17)

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

add_subdirectory(04-functions/Demo01Functions)
add_subdirectory(04-functions/Demo02Return)
add_subdirectory(04-functions/Demo03Sum)
add_subdirectory(04-functions/Demo05Recursion)

add_subdirectory(04-functions/Demo04Inline)


add_subdirectory(04-functions/DemoSwapOverload)


add_subdirectory(04-functions/DemoDefaultValue)
add_subdirectory(04-functions/DemoConstReference)

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
add_subdirectory(07-structures-classes/DemoStructure&Functions)
add_subdirectory(07-structures-classes/DemoStructureInternalDeclaration)
add_subdirectory(07-structures-classes/DemoClass)
add_subdirectory(07-structures-classes/DemoArray)
add_subdirectory(07-structures-classes/DemoUnion)
add_subdirectory(07-structures-classes/DemoClassGeometry)
add_subdirectory(07-structures-classes/DemoOperatorOverloading)
add_subdirectory(07-structures-classes/DemoFriendFunctions)
add_subdirectory(07-structures-classes/DemoConstructors&ObjectInitialization)
add_subdirectory(07-structures-classes/DemoConstructors)
add_subdirectory(07-structures-classes/DemoOwn_to_string)

add_subdirectory(08-exceptions/DemoTryCatchThrow)
add_subdirectory(08-exceptions/DemoDivide)
add_subdirectory(08-exceptions/DemoException)
add_subdirectory(08-exceptions/DemoGlog)
add_subdirectory(08-exceptions/DemoSpdLog)


add_subdirectory(09-unittesting/DemoGoogleTest)
add_subdirectory(10-Memory/DemoPointers)
add_subdirectory(10-Memory/DemoStack)
add_subdirectory(10-Memory/VectorImpl)
add_subdirectory(10-Memory/DemoMatrix)
add_subdirectory(10-Memory/DemoAddressSanitizer)
add_subdirectory(10-Memory/DemoVoid)
add_subdirectory(10-Memory/DemoFunctionPointer)

add_subdirectory(11-oop/DemoEnum)
add_subdirectory(11-oop/DemoStucture)
add_subdirectory(11-oop/DemoPolymorphism)
add_subdirectory(11-oop/DemoParentChild)
add_subdirectory(11-oop/DemoMultipleInheritance)
add_subdirectory(11-oop/DemoTemperatureMeasure)
add_subdirectory(11-oop/DemoInnerClass)
add_subdirectory(11-oop/DemoVirtualDestructor)
add_subdirectory(11-oop/DemoParentChildVirtual)

add_subdirectory(18-std/DemoIterators)
add_subdirectory(18-std/DemoFunctor)
add_subdirectory(18-std/DemoFunctorTemplate)
add_subdirectory(18-std/DemoLambda_additional)
add_subdirectory(18-std/DemoBind)

add_subdirectory(20-strings/DemoCharTraits)
add_subdirectory(20-strings/DemoCstring)
add_subdirectory(70-project-code-blanks-with-spdlog-gtest)

#add_executable(prCPP_1sem main.cpp 11-oop/DemoStucture/src/NodeStack.h)