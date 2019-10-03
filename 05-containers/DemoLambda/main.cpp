#include <iostream>
#include <vector>
#include <algorithm>

int &Min(int &a, int &b) {
  if (a < b) {
    return a;
  }
  return b;
}

int &Max(int &a, int &b) {
  if (a > b) {
    return a;
  }
  return b;
}

void PrintContainer(std::vector<int> &vec) {
  for (auto &tmp : vec) {
    std::cout << tmp << ' ';
  }
  std::cout << '\n';
}

void PrintContainer(std::vector<int> &vec, const std::string &title) {
  std::cout << title << ": ";
  // вывод с использованием люмбда-выражения
  std::for_each(vec.begin(), vec.end(), [](int &tmp) { std::cout << tmp << ' '; });
  std::cout << '\n';
}

int main() {
  int a = 2, b = 3;
  std::cout << "our function Min(" << a << ", " << b << ") = " << Min(a, b) << std::endl; // 2
  std::cout << "our function Max(" << a << ", " << b << ") = " << Max(a, b) << std::endl; // 3

  std::cout << "Algorithms:\n";
  std::cout << "STL function min(" << a << ", " << b << ") = " << std::min(a, b) << std::endl; // 2
  std::cout << "STL function max(" << a << ", " << b << ") = " << std::max(a, b) << std::endl; // 3

  /*
   * Можно искать минимум и максимум всех типов, которые можно сравнивать между собой,
   * то есть для которых определен оператор <.
   */

  std::string s1 = "abc";
  std::string s2 = "bca";
  std::cout << "STL function min(" << s1 << ", " << s2 << ") = " << std::min(s1, s2) << std::endl;
  std::cout << "STL function max(" << s1 << ", " << s2 << ") = " << std::max(s1, s2) << std::endl;

  std::vector<int> vec = {4, 2, 3, 6, 3, 4, 5, 2, 1, 9};
  std::cout << "Min element in the vector = " << *(std::min_element(vec.begin(), vec.end())) << '\n';

/*
 * Сортировка элементов в диапазоне [first, last) в порядке возрастания.
 * Сохранность порядка элементов, имеющих одинаковое значение, не гарантируется.
 * Для сравнения элементов по-умолчанию используется оператор operator<,
 * но также может быть использована функция сравнения comp.
 */
  std::cout << "Initial vector: ";
  PrintContainer(vec);

  // std::sort(vec.begin(), vec.end());  // 1 способ
  std::sort(std::begin(vec), std::end(vec)); // 2 способ
  PrintContainer(vec, "Sorted vector");

  //std::cout << vec.begin() << vec.end() << '\n';  // error
  std::cout << "1st item = " << *vec.begin() << ", last item = " << *(vec.end() - 1) << '\n';  // error

  std::vector<int> numbers{1, 2, 4, 8, 16};
  std::vector<std::string> fruits{"orange", "apple", "raspberry"};
  std::vector<char> empty;

  // Суммируем все числа вектора numbers, перебирая элементы с помощью итератора.
  int sum = 0;
  for (auto it = numbers.cbegin(); it != numbers.cend(); it++) {
    sum += *it; // разыменование итератора
  }
  std::cout << "Sum numbers:" << sum << '\n';

  // Печатает первое число в векторе numbers
  // и первый фрукт в векторе fruit, не проверяя, есть ли он.
  std::cout << "The first number: " << *numbers.begin() << '\n';
  std::cout << "The first fruit: " << *fruits.begin() << '\n';

  if (empty.begin() == empty.end())
    std::cout << "Vector 'empty' is really empty.\n";

  return 0;
}