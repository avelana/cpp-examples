#include <iostream>
// Ex 1
//double divide(int, int);
//
//int main() {
//  int x = 500;
//  int y = 0;
//  double z = divide(x, y);
//  std::cout << z << std::endl;
//  std::cout << "The End..." << std::endl;
//  return 0;
//}

// EX1-1
//double divide(int a, int b) {
//  return a / b;
//}

// EX1-2
//double divide(int a, int b)
//{
//  if (b != 0)
//    return a / b;
//  else
//    std::cout << "Error! b must not be equal to 0" << std::endl;
//}

// EX1-1
double divide(int a, int b) {
  if (b == 0)
    throw "Division by zero!";
  return a / b;
}


////// Ex 2
//#include <iostream>
////double divide(int, int);
//int main() {
//  int x = 500;
//  int y = 0;
//  try {
//    throw 42;
//
//    std::cout << "test msg" << std::endl;
//
//    double z = divide(x, y);
//    std::cout << "z = " << z << std::endl;
//  }
//  catch (const char*) {
//    std::cout << "Error!" << std::endl;
//  }
//  catch (int) {
//    std::cout << "Error! int exception " << std::endl;
//  }
//  catch (...) {
//    std::cout << "Error! Something " << std::endl;
//  }
//  std::cout << "The End..." << std::endl;
//  return 0;
//}

// Ex3
int main() {
  int x = 500;
  int y = 0;
  try {
    double z = divide(x, y);
    std::cout << z << std::endl;
  }
  catch (const char *msg) {
    std::cout << msg << std::endl;
  }
  std::cout << "The End..." << std::endl;
  return 0;
}