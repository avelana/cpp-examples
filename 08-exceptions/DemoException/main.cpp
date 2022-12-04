// #define NDEBUG
//  Все assert будут проигнорированы
#include <array>
#include <cassert> // для assert()
#include <exception>
#include <iostream>
#include <stdexcept>

int getArrayValue(const std::array<int, 10>& array, int index) {
    // Предполагается, что значение index-а находится между 0 и 8
    // assert(index >= 0 && index <= 8);
    if (index >= 0 && index < 10) {
        return array[index]; // array.at(i)
    } else {
        throw 1;
    }
}

int f() {
    throw "bad error";
}

double divide(int, int);

int main() {
    //  double tmp = divide(7, 0);
    //    std::cout <<tmp;
    std::array<int, 10> array{1, 3, 4, 5, 7, 9, 1, 8, 8, 9};

    int x = 500;
    int y = 0;
    try {
        f();
        int tmp = getArrayValue(array, -1);
        std::cout << tmp;

        double z = divide(x, y);
        std::cout << z << std::endl; // не попадаем сюда
    } catch (const std::exception& err) {
        std::cout << "Error!!! " << err.what() << std::endl;
    } catch (const int&) {
        std::cout << "Error (int) !!! " << 1 << std::endl;
    } catch (...) {
        std::cout << "Error!!!  All";
    }
    //  std::cout << "The End..." << std::endl;
    return 0;
}

// double divide(int a, int b) {
//   assert(b!=0 && "divide by zero");
//   return a / b;
// }


double divide(int a, int b) {
    if (b == 0) {
        // throw std::exception();
        throw std::invalid_argument("Division by zero!");
        // throw std::exception("Division by zero!"); // Работает в VS,но не
        // работает  для g++
    }
    return a / b;
}

// bool a = 1;
// bool b = 1;
// bool c = 1;
// bool d = 0;
//
// bool res = a || b && c || d;
// #include <iostream>
// #include <exception>
// #include <stdexcept>
//
// double divide(int, int);
//
// int main() {
//   int x = 500;
//   int y = 0;
//   try {
//     double z = divide(x, y);
//     std::cout << z << std::endl;
//   } catch (std::overflow_error err) {
//     std::cout << "Overflow_error: " << err.what() << std::endl;
//   }
//   catch (std::runtime_error err) {
//     std::cout << "Runtime_error: " << err.what() << std::endl;
//   }
//   catch (std::exception err) {
//     std::cout << "Exception!!!" << std::endl;
//   }
//   std::cout << "The End..." << std::endl;
//   return 0;
// }
//
// double divide(int a, int b) {
//   if (b == 0)
//     throw std::runtime_error("Division by zero!");
//   return a / b;
// }
