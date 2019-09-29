#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main() {

  char cha = 5;
  cha++;
  char ch = 'x';
  int code = ch;
  int code1 = 'x';
  double check = true;

  cout << "code  = " << oct << code << '\n';
  cout << "check  = " << check << '\n';

  double dl = 2.3;
  double d2 = dl + 2; // Перед сложением 2 преобразуется в 2.0
  if (dl < 0) {// Перед сравнением О преобразуется в О.О
    cout << "dl - отрицательно ";
  }

  int aa = 65;//20000;
  char c = aa; // сужающее преобразование
// в маленькую переменную типа cha r
  int b = c;
  if (a != b) {
    cout << "It's a pity! : " << a << " ! = " << b << '\n';
  } else {
    cout << "Nice! We have a char " << c << '\n';
  }

  cout << 1 / 3. << '\n';

  double e = 2.7;
  int f = e; // Значение переменной f становится равным 2
  cout << "f = " << f << '\n';

  int a_a = 1000;
  char p = a_a; // Значение p становится равным -24
  cout << "p = " << (int) p << '\n';

//  int age; // это объявление переменной
//  a = 18; // а это присваивание переменной a значения 18

//  int age = 18; // инициализация
  int age(18); // инициализация

  int k;
  double df;
//  char sd= 00001000b;
//  cout << "k = " << k << "  " << sd << "  " << df << '\n';

//  double x { 2.7} ; // OK
//  int у {x} ; // Ошибка : douЫe -> iтt может быть сужающим
//  int а (1000} ; // OK
//  char b (а} ; // Ошибка : int -> char может быть сужающим

  int a = 2;
  if (!(0 < a && a < b && b < c))
    // еrrоr(" Неверные аргументы функции mcf");
    return 0;
}