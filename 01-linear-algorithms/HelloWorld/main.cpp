#include <iostream>
/*
 * App writes the phrase Hello World!
 * @author KOG
 * @date 2019-09-04
 */
int main() {
  std::string text;
  std::cout << "Computer: \"Hello world!\"\n";//  << std::endl; // '\n'
  std::cout << "User, please, tell me something.\n";
  std::cin >> text;

  std::cout << "You told \"" << text << "\"\n";
  return 0;
}