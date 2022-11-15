#include "IOConsole.h"
#include <iostream>

void IOConsole::show(const ArrayOnVector& arr) {
    std::cout << "Object: arr" << &arr << ", size = " << arr.valueList.size() << ": ";
    for (const auto& tmp : arr.valueList) {
        std::cout << tmp << ", ";
    }
    std::cout << "\n\n";
}

void IOConsole::show(const Array& arr) {
    std::cout << "Object: arr" << &arr << ", size = " << arr.size << ": ";
    for (int i = 0; i < arr.size; ++i) {
        std::cout << arr.getItem(i) << ", ";
    }
    std::cout << "\n\n";
}

void IOConsole::show(const double& value, const std::string& delimeter) {
    std::cout << value << delimeter;
}

void IOConsole::show(const std::string& str) {
    std::cout << str;
}

void IOConsole::show(const std::vector<double>& list) {
    for (const auto& tmp : list) {
        std::cout << tmp << ", ";
    }
    std::cout << '\n';
}
