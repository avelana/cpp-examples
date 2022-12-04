#include <iostream>
// #include "std_lib_facilities.h"
//- это специальный заголовочный файл, написанный Срауструпом для книги "Принципы и практика
//программирования на С++". Соответственно в стандартной сборке компилятора его нету.
using namespace std;

int main() {
    // виды инициализации
    int a1 = 5; // копирующая
    int a2(5); // прямая
    int a3{5}; // uniform
    int a4 = {5};


    int f;
    char cha = 5;
    bool boolean = 1;

    cha++;
    char ch = 'x';
    int code = 0b111; // 0h234;//ch; // 0x345AB; 0234; 023487(er)
    cout << code << '\n';
    int code1 = 'x';

    int x = x + 1;
    code1 += boolean;
    double check = 7.98; // true;

    int _ = 9;
    int ___ = 9;

    cout << "code  = " << oct << code << '\n';
    cout << "check  = " << check << '\n';
    string tmp = "abc";
    double dl = 2.3;
    double d2 = dl + 2; // Перед сложением 2 преобразуется в 2.0
    if (dl < 0) { // Перед сравнением О преобразуется в О.О
        cout << "dl - отрицательно ";
    }

    int a = 65;//20000;
  char c = a; // сужающее преобразование
// в маленькую переменную типа cha r
  int b = c;
  if (a != b) {
      cout << "It's a pity! : " << a << " ! = " << b << '\n';
  } else {
      cout << "Nice! We have a char " << c << '\n';
  }

  cout << 1 / 3. << '\n';

  double e = 2.7;
  int ff = e; // Значение переменной f становится равным 2
  cout << "ff = " << ff << '\n';

  int a_a = 1000;
  char p = a_a; // Значение p становится равным -24
  cout << "p = " << (int)p << '\n';

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

  int aa = 2;
  if (!(0 < aa && aa < b && b < c))
    // еrrоr(" Неверные аргументы функции mcf");
    return 0;
}