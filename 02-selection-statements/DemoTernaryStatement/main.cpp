#include <locale>
#include <codecvt>
//#include <std_lib_facilities.h>
#include <iostream>
#include <vector>

int main() {
  int a = 1;
  int b = 4;

  // Поиск наименьшего числа
  int min;
  if (a < b) {
    min = a;
  } else {
    min = b;
  }

  int min1 = b;
  if (a < b) {
    min1 = a;
  }

  int min2 = a < b ? a : b;
  std::cout << "min = " << min2 << '\n';

  int max;
  a > b ? max = a : max = b;
  std::cout << "max = " << max << '\n';

  // пример условного выражения - rvalue
  int n = 1 > 2 ? 10 : 11; // 1 > 2 – это ложь, поэтому n = 11

  bool tmp = a > b ? max = a : max = b;
  std::cout << "tmp = " << tmp << '\n';
  // пример условного выражения - lvalue
  int m = 10;
  (n == m ? n : m) = 7; // n == m это ложь, поэтому m = 7
  std::cout << "n = " << n << '\n' << "m = " << m;

  // ПРИМЕР.
  // ВЛОЖЕННЫЙ ?: затрудняет чтение кода

  std::vector<std::string> list_str = {"First ", "Third\n"};

  std::string str = "Second ";
  for (int i = 0; i < 3; i++) {
    std::cout << ((i < 2) ? !i ? list_str[i] : str : list_str[1]);
  }
  int x = 0;
  // if ( x <= 0) еrrоr( "Неnоложитепьное х " ) ;
  return 0;
}