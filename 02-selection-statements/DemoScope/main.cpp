#include <iostream>
int x = 5; // Глобальные переменные
int y = 10;

int main() {

    {
        int x = y; // Локальная переменная x, скрывающая глобальную переменную х
        std::cout << "x = " << x << " " << ::x << '\n';
    }

    std::cout << "x = " << x << '\n'; // Глобальная переменная
    int a;

    // C++ 17!!!
    if (int k = 1) {
        a = k;

    } else {
        a = k - 100;
    }
    // k = 9;
    return 0;
}