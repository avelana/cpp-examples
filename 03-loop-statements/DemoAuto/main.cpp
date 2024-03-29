#include <iostream>
/*
 * https://en.cppreference.com/w/cpp/language/auto
 */
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

// perfect forwarding of a function call must use decltype(auto)
// in case the function it calls returns by reference
template<class F, class... Args>
decltype(auto) PerfectForward(F fun, Args &&... args) {
  return fun(std::forward<Args>(args)...);
}

//template<auto n> // C++17 auto parameter declaration
//auto f() -> std::pair<decltype(n), decltype(n)> // auto can't deduce from brace-init-list
//{
//  return {n, n};
//}

template<typename T, typename U>
auto add(T t, U u) { // возвращаемое значение - тип оператора + для (T, U)
  return t + u;
}

int main() {
  auto a = 1 + 2;            // type of a is int
  auto b = add(1, 1.2);      // type of b is double
//  static_assert(std::is_same_v<decltype(a), int>);
//  static_assert(std::is_same_v<decltype(b), double>);

  auto c0 = a;             // type of c0 is int, holding a copy of a
  decltype(auto) c1 = a;   // type of c1 is int, holding a copy of a
  decltype(auto) c2 = (a); // type of c2 is int&, an alias of a
  std::cout << "a, before modification through c2 = " << a << '\n';
  ++c2;
  std::cout << "a, after modification through c2 = " << a << '\n';

  //  auto [v, value_] = f<0>(); //structured binding declaration

  auto d = {1, 2}; // OK: type of d is std::initializer_list<int>
  auto n = {5};    // OK: type of n is std::initializer_list<int>
//  auto e{1, 2};    // Error as of C++17, std::initializer_list<int> before
  auto m{5};       // OK: type of m is int as of C++17, initializer_list<int> before
//  decltype(auto) z = { 1, 2 } // Error: {1, 2} is not an expression

  // auto обычно используется для неназванных типов, таких как типы лямбда-выражений
  auto lambda_print = [](const int &tmp) { std::cout << " " << tmp; };

  std::vector<int> nums = {0, 1, 2, 3, 4, 5};
  // говорим что делать, а не как делать
  std::for_each(begin(nums), end(nums), lambda_print);

  // здась показываем как делать :-(
  for (auto &tmp: nums) {
    std::cout << ' ' << tmp;
  }

  //  auto int x; // valid C++98, error as of C++11
//  auto x;     // valid C, error in C++
}