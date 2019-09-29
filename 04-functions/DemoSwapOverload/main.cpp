#include <iostream>

void Swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void Swap(double &a, double &b) {
  double tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int x = 3;
  int y = 5;
  Swap(x, y);
  std::cout << "x = " << x << ", y = " << y << '\n';

  double xx = 3.3;
  double yy = 5.5;
  Swap(xx, yy);
  std::cout << "xx = " << xx << ", yy = " << yy << '\n';

  return 0;
}

