#include <iostream>
#include <vector>
using namespace std;

int main() {

  int a = 7, b = 4;
  int mult;

  mult = a + b;

  cout << "mult = " << mult << '\n';
  system("pause");

  char ch = 5;
  ch++;
  char c = 'x';
  int code = c;
  int code1 = 'x';
  double check = true;

  cout << "code  = " << code << "= (hex) = " << hex << code << " = (dec) = " << dec << code << '\n';

  cout << "check  = " << check << '\n';

  system("pause");

  std::vector<int> numbers = {7, 1, 2, 3, 4};

  numbers[0]++;
  std::cout << "Size =  " << numbers.size() << '\n';

  for (auto tmp : numbers) {
    std::cout << tmp << '\n';
  }
  int x = 7;
  if (x > 5)         // начало оператора if
  {                  // начало блока
    int n = 1;     // оператор объявления
    std::cout << n;// оператор-выражение
    if (n == 1) {

    }
  }                  // конец блока, конец оператора if

  //std::cout << n;

  return 0;
}