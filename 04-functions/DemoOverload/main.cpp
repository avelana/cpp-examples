#include <iostream>
#include <vector>
using namespace std;

bool Equal(char c1, char c2) {
    return (c1 == c2);
}

auto Equal(double d1, double d2) {
    return (d1 == d2);
}

// bool Equal(int& i1, int i2){
//   return (bool)7;
// }
//
// int Equal(int i1, int i2) {
//   return 8;
// }

// Error
////bool Equal(const int i1, int i2){
////  return (bool)(i1==i2);
////}
/*
bool Equal(int i1, int i2){
  return (bool)(i1!=i2);
}*/


// Error
// int Equal(int i1, int i2){
//  return (int)(i1==i2);
//}

double Division(int a, int b) {
    return (double)a / b;
}

double Division(int& a, int b) {
    return (double)a / b;
}

double Division(double a, double b) {
    return a / b;
}

// int max_value( int, int );
// int max_value( const vector<int> & );
// int max_value( const vector<vector<int>> & );

int main() {
    bool b;
    b = Equal(5.2, 6); // вызывается Equal(int, int), b = 0
    cout << Equal(5.2, 6) << '\n'; // вызывается Equal(int, int), b = 0
    cout << b << '\n';
    b = Equal(3.755, 3.755); // вызывается Equal(double, double), b = 1
    cout << b << '\n';
    b = Equal('A', 'C'); // вызывается Equal(char, char), b = 1
    cout << b << '\n';

    cout << Division(7, 3) << endl; // работает первая функция
    cout << Division(7.5, 2.5) << endl; // работает вторая функция

    int m = 6;
    int &k = m;
  cout << Equal(m, m) << '\n'; // вызывается Equal(int&, int), //7
  return 0;
}
