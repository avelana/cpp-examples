#include "IntArray.h"
#include "Time.h"
#include <iostream>

// Объект этого типа - линейная функция одного аргумента k*x+b
struct Linear {
    double k;
    double b;

    double operator()(double x) const { return k * x + b; }
};

IntArray* foo();

int main() {

    Linear f{2, 1}; // Является функцией вида 2x + 1.
    Linear g{-1, 0}; // Является функцией вида -x.

    // f и g объекты - математические функции.
    double f_0 = f(0);
    double f_1 = f(1);
    double g_0 = g(0);


    int a = 3; // копирующая инициализация
    double b(4.5); // прямая инициализация
    char c{'d'}; // uniform инициализация

    IntArray const* ptr = foo();
    ptr->resize(); // error
    ptr->size(); // ok

    IntArray a1(10);
    IntArray a2(20);
    IntArray a3 = a1; // копирование - Используется копирующий конструктор
    a2 = a1; // присваивание - 11 Используется копирующее присваивание


    Time time = 123;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
