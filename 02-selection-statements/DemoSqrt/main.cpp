//#include <iostream>
//#include <cmath>
//#include <cassert>
//
//using namespace std;
//
//int main() {
//
//
////  if (a >= 0){
////    res = sqrt(a);
////    cout << "result of sqrt(" << a  << ") = " << res << '\n';
////  }else{
////    //cerr << "the number " << a << " is negative\n";
////    std::string msg_part_1 = "Exit: the number ";
////    //runtime_error(msg_part_1 + to_string(a) + (string)" is negative\n");
////    cerr << msg_part_1 + to_string(a) + (string)" is negative\n";
////  }
//
//  cout << "Calculation of the sqrt(a)\n";
//  cout << "Input nonnegative number: ";
//  double a;
//  double res;
//  cin >> a;
//  // Вычисление корня квадратного
//  // Предполагается, что значение а неотрицательное
//  assert( a>=0 );
////  if (a < 0) {
////   // abort();
////  }
//  res = sqrt(a);
//  cout << "The result of sqrt(" << a << ") is equal " << res << '\n';
//  return 0;
//}

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main() {
  cout << "Calculation of the sqrt(a)\n";
  cout << "Input nonnegative number: ";
  double a;
  double res;
  cin >> a;
  assert(a >= 0 && " a must be nonnegative."); // Предполагается, что значение а неотрицательное

//  double a = 7.5;
//  b = a * 3;
  res = 100 / 0;
  char n = 32768;
  //res = sqrt(a);
  cout << "The result of sqrt(" << a << ") is equal " << res << '\n';
  return 0;
}

//assert( a>=0 && " a must be nonnegative."); // Предполагается, что значение а неотрицательное

//  if (a < 0) {
//    abort();
//  }