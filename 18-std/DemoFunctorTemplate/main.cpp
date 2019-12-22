#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

template<typename T>
struct Prd {
  T a, b;
  Prd(const T &t1, const T &t2) : a(t1), b(t2) {}
  bool operator()(T &n) {
    return !(n % a) && !(n < b);
  }
};

int main() {
  array<int, 10> num{1, 2, 3, 9, 11, 6, 7, 8, 9, 10};
  cout << count_if(num.begin(), num.end(), Prd<int>(3, 5)) << endl;

  array<short, 10> numShort{1, 2, 3, 9, 11, 6, 7, 8, 9, 10};
  cout << count_if(numShort.begin(), numShort.end(), Prd<short>(3, 5)) << endl;

  array<short, 10> num1{1, 2, 3, 9, 11, 6, 7, 8, 9, 10};
  //cout << count_if(num1.begin(), num1.end(), std::greater<short>(3)) << endl;

  return 0;
}
