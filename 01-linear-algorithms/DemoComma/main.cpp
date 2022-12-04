#include <iostream>

int main() {
    int x = -100;
    int y = 2; // = 87
    int z = 1 + ++x + 5 + 99;
    std::cout << "z + 5 = " << z << '\n';

    int a1 = x + y;
    int b = 2 + a1 - -7;
    std::cout << "b = " << b << '\n';

    char c = 0x41;
    std::cout << "c = " << c << ", c + 10 = " << (char)(c + 10) << '\n';
}

// #include <iostream>
//
// int main() {
////  int x = 0;
////  int y = 2;
////  int z = (++x, ++y); // инкремент x и y
////  std::cout << "z = " << z << '\n';
//
//  int x = 0;
//  int y = 2;
//  ++x;
//  ++y;
//  // int z = y;
//
//  int a = 3;
//  int b = 5;
//  int z;
//  //z = (a, b); // сначала вычисляется выражение (a, b), которое равно значению b, а затем
//  результат присваивается переменной z
//  // std::cout << "z = " << z << '\n';
//  z = a, b; // вычисляется как "(z = a), b", поэтому переменной z присваивается значение a, а
//  переменная b игнорируется std::cout << "z = " << z << '\n';
//
//  return 0;
//}