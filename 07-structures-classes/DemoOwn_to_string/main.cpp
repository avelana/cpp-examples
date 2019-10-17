#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
string to_string(T param) {
  string str = "";
  stringstream ss;
  ss << param;
  getline(ss, str);
  return str;
}

int main() {
  string str = to_string(123);//("Hello");//(123.45);
  cout << str << endl;
  return 0;
}