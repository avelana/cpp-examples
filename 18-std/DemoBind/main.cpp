//// ПРИМЕР https://en.cppreference.com/w/cpp/utility/functional/bind
#include <random>
#include <iostream>
#include <memory>
#include <functional>

void f(int n1 = 1, int n2 = 1, int n3 = 1, const int &n4, int n5) {
  std::cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << '\n';
}

int g(int n1) {
  return n1;
}

struct Foo {
  void print_sum(int n1, int n2) {
    std::cout << n1 + n2 << '\n';
  }
  int data = 10;
};

int main() {
  using namespace std::placeholders;  // for _1, _2, _3...

  // демонстрирует переупорядочение аргументов и передачу по ссылке
  int n = 7;
  // (_1 и _2 взяты из std::placeholder и представляют будущие аргументы, которые будут переданы в f1)
  auto f1 = std::bind(f, _2, 42, _1, std::cref(n), n);
  n = 10;
  f1(1, 2, 1001); // вызов f (2, 42, 1, n, 7), т.к. 1 связан с _1, 2 связан с _2, 1001 не используется
  // f1(); // вызов f (2, 42, 1, n, 7), т.к. 1 связан с _1, 2 связан с _2, 1001 не используется

  // nested bind subexpressions share the placeholders
  // вложенные подвыражения используют совместно заполнители
  auto f2 = std::bind(f, _3, std::bind(g, _3), _3, 4, 5);
  f2(10, 11, 12); // вызов f(12, g(12), 12, 4, 5);

  // общий случай использования: связывание (Random Number Generator» или Генератор Случайных Чисел (ГСЧ)) с распределением
  std::default_random_engine e;
  std::uniform_int_distribution<> d(0, 10);
  auto rnd = std::bind(d, e); // копия e хранится в rnd
  for (int n = 0; n < 10; ++n)
    std::cout << rnd() << ' ';
  std::cout << '\n';

  // привязка к указателю на функцию-член
  Foo foo;
  auto f3 = std::bind(&Foo::print_sum, &foo, 95, _1);
  f3(5); // foo.print_sum(95,5);

  // привязка к указателю на член данных
  auto f4 = std::bind(&Foo::data, _1);
  std::cout << f4(foo) << '\n'; // foo.data

  // умные указатели могут использоваться для вызова членов ссылочных объектов, тоже
  std::cout << f4(std::make_shared<Foo>(foo)) << '\n'
            << f4(std::make_unique<Foo>(foo)) << '\n';
}

//https://en.cppreference.com/w/cpp/utility/functional/bind12
//#include <iostream>
//#include <algorithm>
//#include <functional>
//#include <cmath>
//#include <vector>
//
//int main()
//{
//  std::vector<double> a= {0, 30, 45, 60, 90, 180};
//  std::vector<double> r(a.size());
//  double pi = acos(-1);
//
//  std::transform(a.begin(), a.end(), r.begin(),
//                 std::bind1st(std::multiplies<double>(), pi / 180.));
//// equivalent lambda: [pi](double a){ return a*pi/180.; });
//
//  for(size_t n = 0; n < a.size(); ++n)
//    std::cout << a[n] << " deg = " << r[n] << " rad\n";
//}
