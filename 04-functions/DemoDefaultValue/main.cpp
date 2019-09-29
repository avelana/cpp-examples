#include <iostream>
#include <cmath>
double sqtrOfPower(double x, double power = 2) {
  return pow(x, double(1) / power);
}

int max(int y, int z);  //1
int max(double y, double z);  //2
int max(int *y, char z);  //3


int main() {
  double x = 20;
  double y = sqtrOfPower(x); //корень 2 степени
  double z = sqtrOfPower(x, 3); //корень 3 степени
  std::cout << "x = " << x << ", y =  " << y << std::endl;
  return 0;
}