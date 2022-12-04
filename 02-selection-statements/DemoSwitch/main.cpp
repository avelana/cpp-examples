#include <iostream>
using namespace std;

//constexpr int mах = 100 ;
//void use ( int n)
//{
//  constexpr int c1 = mах+7 ; // ОК: c1 равно 107
//  constexpr int с2 = n+7 ; // Ошибка : значение с2 неизвестно

int main() {

  int x = 1;
  if (x == 1) {
    goto label1;
  }
  goto label2;

  label1:
  cout << "in label1" << '\n';

  label2:
  cout << "in label2" << '\n';

  x = 1;
  loop:
  x++;
  if (x < 1)
      goto loop;
  cout << "x = " << x << '\n';

  //Перепишите следующий фрагмент с применением switch:
  char ch = 'A';
  int a_grade, b_grade, c_grade, d_grade, f_grade;
  if (ch == 'A')
    a_grade++;
  else if (ch == 'B')
    b_grade++;
  else if (ch == 'C')
    c_grade++;
  else if (ch == 'D')
    d_grade++;
  else
    f_grade++;
  cout << a_grade << "  " << b_grade << "  " << c_grade << "  " << d_grade << "  " << f_grade;


  //Пример. Фрагмент калькулятора
  char action = '+';
  int a = 1, b = 4, c;
  switch (action) {
      case '+':
      case '-':
          c = a + b;
          break;
      case '&':
          c = a - b;
          break;
      case '*':
          c = a * b;
          break;
      case '/':
          c = a / b;
          break;
  }
  switch (1) {

      case 1:
          cout << '1' << '\n';
          break; // prints "1",
      case 2:
          cout << '2' << '\n'; // then prints "2"
          break;
      default:
          break;
  }
  int d = 5;
  switch (d) {
      case 1:
          cout << "Monday\n"; // if (d == 1) ...
      case 2:
          cout << "Tuesday\n";
      case 3:
          cout << "Wednesday\n";
      case 4:
          cout << "Thursday\n";
      case 5:
          cout << "Friday\n";
          break;
      case 6:
          cout << "Saturday\n";
      case 7:
          cout << "Sundey\n";
          break;
      default:
          cout << "error data";
          break;
  }

  return 0;
}