cmake_minimum_required(VERSION 3.15)
project(DemoOperatorOverloading)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoOperatorOverloading main.cpp Time.h Time.cpp BankAccount.h BankAccount.cpp BankAccountList.h BankAccountList.cpp)