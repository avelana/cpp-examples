#include "spdlog/spdlog.h"
#include <iostream>

int main() {
    spdlog::info("Application has started!");
    std::cout << "Hello, World!" << std::endl;
    spdlog::info("Application has finished!");
    return 0;
}
