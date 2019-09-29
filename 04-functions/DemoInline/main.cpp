#include <iostream>
#include "example.h"
#include "f_a.h"
#include "f_b.h"

inline int max(int a, int b) {
  return a < b ? b : a;
}

int main() {
  std::cout << sum(8, 0) << a() << b() << std::endl;

  std::cout << max(7, 8) << '\n'; // std::cout << (7 < 8 ? 8 : 7) << '\n';
  std::cout << max(5, 4) << '\n'; // std::cout << (5 < 4 ? 4 : 5) << '\n';

  return 0;
}