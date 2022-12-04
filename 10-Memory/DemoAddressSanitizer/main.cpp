#include <iostream>

// To compile: g++ -O -g -fsanitize=address heap-use-after-free.cc
int main() {

    int kN = 100;
    int* array = new int[100];
    array[0] = 6;
    std::cout << array[0] << "\n";
    delete[] array;
    std::cout << array[0] << "\n";
    std::cout << array[kN];
    return array[kN]; // BOOM
}