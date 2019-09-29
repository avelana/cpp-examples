#include <iostream>
#include "Arithmetic.h"

int main() {
  int a = 2, b = 3, c = 12, d = 25;
  int res = sum(a, b); // вызов функции
  std::cout << a << " + " << b << " = " << res << '\n'; // вызов функции
  std::cout << c << " + " << d << " = " << sum(c, d); // вызов функции
  return 0;
}





