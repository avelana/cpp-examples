//
// Created by volha on 28.10.2019.
//

// EX1

// #include <iostream>
//
// void doAnything(int *ptr)
//{
//   if (ptr)
//     std::cout << "You passed in " << *ptr << '\n';
//   else
//     std::cout << "You passed in a null pointer\n";
// }
//
// int main()
//{
//   doAnything(nullptr); // теперь аргумент является точно нулевым указателем, а не целочисленным
//   значением
//
//   return 0;
// }


#include <cstddef> // для std::nullptr_t
#include <iostream>

void doAnything(std::nullptr_t ptr) {
    std::cout << "in doAnything()\n";
}

int main() {
    doAnything(nullptr); // вызов функции doAnything с аргументом типа std::nullptr_t
    const int kN = 5;
    const int kM = 7;
    int** arr = new int*[kN];
    //  Пример. Создание двумерного динамического массива
    for (int i = 0; i < kN; i++) {
        arr[i] = new int[kM];
    }
    // Удаление двумерного динамического массива из памяти
    for (int i = 0; i < kN; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}
