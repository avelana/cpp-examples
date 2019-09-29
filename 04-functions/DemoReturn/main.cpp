#include <iostream>
#include <string>
#include <vector>
#include <utility>

void fa(int i) {
  if (i == 2)
    return;
  std::cout << "i = " << i << '\n';
} // подразумевается return;

int fb(int i) {
  if (i > 4)
    return 4;
  std::cout << "i = " << i << '\n';
  return 2;
}

std::pair<std::string, int> fc(std::string p, int x) {
  return {p, x};
}
std::vector<int> fe(int p, int x) {
  return {p, x};
}

void fd() {
  return fa(10); // fa(10) is a void expression
}

int main() {
  fa(2); // returns, does nothing when i==2
  fa(1); // prints its argument, then returns
  int i = fb(5); // returns 4
  i = fb(i); // prints its argument, returns 2
  std::cout << i << '\n'
            << fc((std::string) "Hello", 7).second << '\n';
  fd();

  std::cout << i << '\n'
            << fe(5, 7)[0] << fe(5, 7)[1] << '\n';

}