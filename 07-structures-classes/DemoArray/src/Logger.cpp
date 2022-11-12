//
// Created by volha on 11/12/2022.
//

#include "Logger.h"

void Logger::out(const std::string& str) {
    std::cout << str << std::endl;
}

void Logger::out(const std::string& str, void* ptr) {
    std::cout << str << ". Object = " << ptr << std::endl;
}