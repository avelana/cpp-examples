#include <iostream>
//#include <vector>
//
//#ifndef имя
//#define имя
///*Этот текст обрабатывается не более одного раза*/
//#endif


/* имя функции: "isodd"
 * аргументы: один аргумент с именем "n" и типом int
 * тип возвращаемого значения: bool
 */
auto isodd(int n) { // тело функции начинается
//bool isodd(int n) { // тело функции начинается
  return n % 2;
}                   // тело функции заканчивается
//
//void changeNumberTo7(int a) {
//  a = 7;
//}
//
int Swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {

//  int x = 3;
//  int y = 5;
//  Swap (x,y);
//  std::cout<< "x = " << x << ", y = " << y << '\n';
//
//  int number = 5;
//  changeNumberTo7(number);
//  std::cout << "number = " << number << '\n';

  // проверим одно число на четность
  std::cout << "Input a number" << std::endl;
  int a;
  std::cin >> a;
  bool is_correct = isodd(a);
  // std::cout << "It is " << (isodd(a) ? "odd." : "even.") << '\n';
//
//    // // проверим набор чисел на четность
//    for (int arg : {-3, -2, -1, 0, 1, 2, 3}) {
//      std::cout << isodd(arg) << ' '; // isodd called 7 times, each
//      // time n is copy-initialized from arg
//    }
//    std::vector<int> vec = {-3, -2, -1, 0, 1, 2, 3};
//    for (int arg : vec) {
//      std::cout << isodd(arg) << ' ';
//    }

  return 0;
}