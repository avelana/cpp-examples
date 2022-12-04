#include <iostream>
#include <vector>
#include <algorithm>

// Возврат по ссылке обычно используется для возврата аргументов, переданных в функцию по ссылке.
// Здесь допустим возврат по ссылке
int& Min(int &a, int &b) {
  return (a < b)? a :b;
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

// Возврат по ссылке обычно используется для возврата аргументов, переданных в функцию по ссылке.
// Здесь НЕ допустим возврат по ссылке, только по значению
// ! НЕЛЬЗЯ возвращать ссылку на локальныю переменную, которая уничтожается после выполнения
// функции. Подсчет количества вхождений значения value_
template<typename T>
// int& CountItem(std::vector<T> vec, T value_) {  // ERROR int&
int CountItem(std::vector<T> vec, T value) {
  int count = 0;
  for (auto i : vec) {
    if (i == value) {
      ++count;
    }
  }
  return count;
}
// Greater than 2
bool Gt2(int x) {
  return (x > 2) ? true : false;
}
// Less than 2
bool Lt2(int x) {
  return (x < 2) ? true : false;
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
 // std::cout << "Min element in the vector = " << std::min(vec) << '\n';
  std::cout << "Min element in the vector = " << *(std::min_element(vec.begin(), vec.end())) << '\n';

/*
 * Сортировка элементов в диапазоне [first, last) в порядке возрастания.
 * Сохранность порядка элементов, имеющих одинаковое значение, не гарантируется.
 * Для сравнения элементов по-умолчанию используется оператор operator<,
 * но также может быть использована функция сравнения comp.
 */
  std::cout << "Initial vector: ";
  PrintContainer(vec);

  std::sort(vec.begin(), vec.end());  // 1 способ
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

  // std::accumulate

  std::cout << "Sum numbers:" << sum << '\n';

  // Печатает значение первого элемента в векторе numbers и fruit,
  // не проверяя, есть ли он.
  std::cout << "The first number: " << *numbers.begin() << '\n';
  std::cout << "The first fruit: " << *fruits.begin() << '\n';

  // Печатает значение последнего элемента в векторе numbers и fruit,
  // не проверяя, есть ли он.
  std::cout << "The last number: " << *(numbers.end()-1) << '\n';
  std::cout << "The last fruit: " << *(fruits.end()-1) << '\n';

  if (empty.begin() == empty.end())
    std::cout << "Vector 'empty' is really empty.\n";

  // Печатает значение первого и последнего  элемента в векторе numbers.
  // Обращение с помощью front(), back()
  std::cout << "The first number (front): " << numbers.front() << '\n';
  std::cout << "The last number (back): " << numbers.back() << '\n';

  std::vector<char> letters{'o', 'm', 'g', 'w', 't', 'o', 'f'};

  if (!letters.empty()) {
    std::cout << "The first character is: " << letters.front() << '\n';
    std::cout << "The last character is: " << letters.back() << '\n';
  }

  // Подсчет количества вхождений значения 'o'
  int cnt = CountItem(letters, 'o');
  std::cout << "The number of the letter 'o' is equal " << cnt << '\n';

  // Подсчет количества вхождений значения 'o' c с использованием std::count
  std::cout << "The number of the letter 'o' is equal " << std::count(begin(letters), end(letters), 'o') << '\n';

  // count_if
  std::vector<int> v = {1, 3, 2, 5, 4, 8, 1, 9};
  std::cout << "The number of items are greater than 2 = " << count_if(begin(v), end(v), Gt2) << '\n';
  std::cout << "The number of items are less than 2 = " << count_if(begin(v), end(v), Lt2) << '\n';

  // C Лямбда
  std::cout << count_if(begin(v), end(v), [](auto& x) { return (x > 2) ? true : false; }) << '\n';

  int n = 5;
  std::cout << "Greater than " << n << " = "<<count_if(begin(v), end(v), [n](auto& x) { return (x > n) ? true : false; });

  int data[] = { 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
  std::vector<int> ve(data, data+10);

  int num_items1 = std::count_if(begin(ve), end(ve), [](int &x) { return x % 3 == 0; });
  std::cout << "The number of numbers divisible by three: " << num_items1 << '\n';

  return 0;
}