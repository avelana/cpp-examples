#include <iostream>

template<class T>
void Swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
};

template<typename T>
const T &max(const T &a, const T &b) {
  return (a > b) ? a : b;
}

template<typename T>
void f(T s) {
  std::cout << s << '\n';
}

int main() {
  int x = 3;
  int y = 5;
  Swap<int>(x, y);
  std::cout << "x = " << x << ", y = " << y << '\n';

  double xx = 3.3;
  double yy = 5.5;
  Swap<double>(xx, yy);
  std::cout << "xx = " << xx << ", yy = " << yy << '\n';

  char xc = 'a';
  char yc = 'b';
  Swap(xc, yc);
  std::cout << "xc = " << xc << ", yc = " << yc << '\n';
//Неявная реализация
/*
 * en.cppreference.com/w/cpp/language/function_template
 */
  f<double>(1); // создает и вызывает f <double> (double)
  f<>('a'); // создает и вызывает f <char> (char)
  f(7); // создает и вызывает f <int> (int)


  void (*ptr)(std::string) = f; // создает экземпляр f <string> (string)

  return 0;
}
