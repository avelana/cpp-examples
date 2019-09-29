#include <iostream>

int DemoConstReference() {
  std::cout << (3 + 4) * 5;
  const int &ref = (3 + 4)
      * 5; // обычно результат 3 + 4 имеет область видимости выражения и уничтожился бы в конце этого стейтмента,
  // но, поскольку результат выражения сейчас привязан к ссылке на константное значение,
  std::cout << ref; // мы можем использовать его здесь
}

void PrintIntValue(const int &a) {
  std::cout << a;
}

int main() {

  int value = 7;
  int &ref = value; // ref - это ссылка на константную переменную value

  //int a = 7;
  //int &aa = a;

  int a = 1;
  const int &ref1 = a; // ок: a - это неконстантное l-value
  const int b = 2;
  const int &ref2 = b; // ок: b - это константное l-value
  const int &ref3 = 3; // ок: 3 - это r-value

  a = 10;              // ок: value - это не константа
  b = 7;
  ref1 = 20;           // нельзя: ref1 - это константа

  int x = 3;
  PrintIntValue(x); // неконстантное l-value

  const int y = 4;
  PrintIntValue(y); // константное l-value

  PrintIntValue(7); // литерал в качестве r-value

  PrintIntValue(1 + y); // выражение в качестве r-value

  return 0;
}