#include <cmath>
#include <iostream>
int p = 5;

double sqtrOfPower(double x = 1, double power = 2, int k = 8) {
    std::cout << "k = " << k << std::endl;
    return pow(x, double(1) / power);
}

int main() {
    double x = 20;
    double z = sqtrOfPower();
    double y = sqtrOfPower(x); // корень 2 степени
    double zz = sqtrOfPower(x, 3); // корень 3 степени
    double p = sqtrOfPower(x, 3, 7); // корень 3 степени
    // double value_ = sqtrOfPower(x,,7); //корень 3 степени

    std::cout << "x = " << x << ", y =  " << y << std::endl;

    return 0;
}