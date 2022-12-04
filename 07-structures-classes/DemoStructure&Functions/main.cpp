#include <iostream>
using namespace std;

struct NaturalNumber {
  unsigned int value = 1;
  string to_string() {
    return std::to_string(value);
  };
};

// NaturalNumber TheNextNumber(NaturalNumber& n) {
////  NaturalNumber tmp{++n.value_};
////  return tmp;
////};
void TheNextNumber(NaturalNumber& n) {
    n.value++;
};

int main() {
  NaturalNumber a{100};
  NaturalNumber b{};
  // b = TheNextNumber(a);

  cout << a.to_string() << ' ' << b.value << '\n';
  NaturalNumber num{};

  for (int i = 1; i <= 10; ++i) {
      cout << num.to_string() << ' ';
      //    num = TheNextNumber(num);
      TheNextNumber(num);
  }
  cout << '\n';

  return 0;
}
