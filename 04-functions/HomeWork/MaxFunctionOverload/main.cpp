#include <iostream>
#include <vector>

// функция Max с двумя параметрами типа int
auto Max(int a, int b) {
    return (a < b) ? b : a;
}

// функция Max с тремя параметрами типа int
auto Max(int a, int b, int c) {
    int tmp = (a < b) ? b : a;
    return (tmp < c) ? c : tmp;
}

// функция Max с двумя параметрами типа double
auto Max(double a, double b) {
    return (a < b) ? b : a;
}

auto Max(std::string a, std::string b) {
    return (a < b) ? b : a;
}

auto Max(std::vector<int> vec) {
    int max = vec[0];
    for (auto& tmp : vec) {
        if (tmp > max) {
            max = tmp;
        }
    }
    return max;
}

int main() {
    int a = 4;
    int b = 6;
    int e = 8;

    double c = 0.6;
    double d = -2.1;

    std::string str1 = "Hello";
    std::string str2 = "aHello";

    std::cout << Max(a, b) << '\n';
    std::cout << Max(a, b, e) << '\n';
    std::cout << Max(c, d) << '\n';
    std::cout << Max(str1, str2) << '\n';

    std::cout << Max({1, 3, 5, 7, 9, 3, 4, 5, 2, 6}) << '\n';
    return 0;
}