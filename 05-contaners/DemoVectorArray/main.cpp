#include <iostream>
#include <vector>
#include <array>

#include "vector_array_io.h"
//#define max(a,b) a>b?a;b
/*
 * Создание вектора требуемой длины. Ввод и вывод с консоли
 *
 */
using namespace std;

int main() {
  // 1) создание последовательности из набора элементов
  std::vector<int> v1 = {7, 5, 16, 8};

  cout << "Vector 1:\n";
  cout << "Vector begin() = " << *(v1.begin()) << '\n';

  // [] - НЕТ ПРОВЕРКИ ВЫХОДА ЗА ГРАНИЦЫ!!!
  cout << "v1[-5] = " << v1[-5] << '\n';

  // at() - ЕСТЬ ПРОВЕРКА ВЫХОДА ЗА ГРАНИЦЫ!!!
  //cout << "v1.at(-5)= "<< v1.at(-5) << '\n';
  v1.push_back(25);
  cout << "size = " << v1.size() << '\n';
  cout << "max_size = " << v1.max_size() << '\n';
  cout << "capacity = " << v1.capacity() << '\n';
  PrintVector(v1, ", ");

  // 2) создание пустого вектора
  vector<double> v2;
  cout << "Input the size of the double vector\n";
  int n; // количество элементов последовательности
  cin >> n;
  cout << "\nInput vector items:\n";
  InputVectorAddedToEnd(v2, n);

  cout << "\nVector 2:\n";
  PrintVector(v2, ", ");

  // 3) создание последовательности заданного размера
  //    консольный ввод элементов

  cout << "Input the size of the string vector\n";
  cin >> n;
  vector<string> v3(n); // создаем вектор заданной длины

  // перебираем все элементы вектора по ссылке и заполняем значениями
  cout << "\nInput vector items:\n";
  InputVector(v3);

  cout << "\nVector 3:\n";
  PrintVector(v3, " * ");

  // 4) создание вектора c default значениями
  vector<bool> v4(7, false);
  v4[5] = true;
  v4[6] = true;
  v4.at(1) = true;
  cout << "\nVector 4:\n";
  cout << "max_size = " << v4.max_size() << '\n';
  cout << "capacity = " << v4.capacity() << '\n';
  PrintVector(v4, "==");

  // Array

  std::array<double, 4> array_double{8.0, 6.4, 4.3, 1.9};
  std::cout << "length: " << array_double.size();

  std::array<int, 4> array_int;
  InputArray(array_int);
  PrintArray(array_int, "->");

  array<string, 5> names = {"Tom", "Alice", "Kate", "Bob", "Sam"};
  string third = names.at(2);  // Kate
  string first = names.front();  // Tom
  string last = names.back();    // Sam

  cout << third << '\n';
  cout << first << '\n';
  cout << last << '\n';

  names.fill("Tim");  // names = { "Tim", "Tim", "Tim", "Tim", "Tim" }
  for (auto &tmp:names) {
    std::cout << tmp << '\n';
  }

  // объекту array можно передавать данные другого объекта array:
  array<int, 5> numbers1 = {1, 2, 3, 4, 5};
  array<int, 5> numbers2 = numbers1;
  PrintArray(numbers1, "->");
  PrintArray(numbers2, "->");

  std::cout << "The End.\n";
  return 0;
}