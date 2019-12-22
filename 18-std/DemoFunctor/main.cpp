//
//
//#include <iostream>
//#include <algorithm>
//#include <array>
//using namespace std;
//
//int main() {
//// ПРИМЕР 1:Дан массив. Увеличить каждый элемент в два раза.
//// функциональный объект (mult()) применяется к каждому элементу массива с помощью алгоритма for_each().
//  struct mult {
//    void operator()(int &n) {
//      n *= 2;
//    }
//  };
//  mult k;
//  array<int, 5> num{3, 4, 5, 6, 7};
//  for_each(num.begin(), num.end(), mult());
//  for (auto &r : num) {
//    cout << r << " ";
//  }
//
//// ПРИМЕР 2: Создать функтор для определения суммы и количества элементов массива.
//// Будем получать сведения о состоянии объекта. Объекту ar присваивается возвращаемый алгоритмом for_each функтор Sum,
//// в результате мы получаем доступ к значению полей объекта.
//  struct Sum {
//    int s;
//    int i;
//
//    Sum(): s(0), i(0) {}// Инициализацию начальных значений производим в конструкторе
//    void operator() (int &n) {
//      i++;
//      s += n;
//    }
//  };
//
//  /*
//   * Существуют встроенные функции (accumulate и partial_sum, заголовок <numeric>) реализующие суммирование диапазонов.
//   * Таким образом, функтор, для суммирования, имеет смысл создавать только в том случае,
//   * если помимо суммирования выполняются еще какие-либо операции.
//   */
//
//  Sum ar;
//  array<int, 10> num1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//  ar = for_each(num1.begin(), num1.end(), Sum());
//  cout << ar.s << "\n"
//       << ar.i << endl;
//
//  struct Prd {
//    int my_cnt;
//    // Конструктор
//    Prd(const int &t) : my_cnt(t) {}
//    // Перегрузка операции ()
//    bool operator()(const int &v) {
//      return v > my_cnt;
//    }
//  };
//    array<int, 10> num2 {1, 2, 3, 4, 5, 3, 7, 3, 9, 3};
//    cout << count_if(num2.begin(), num2.end(), Prd(3)) << endl;
//
//  return 0;
//}

// ПРИМЕР 3
// Дан массив из 20 элементов. Произвести следующие операции, используя алгоритмы и предопределенные функторы:
//1.	Выполнить сортировку по убыванию
//2.	Подсчитать количество элементов по критерию
//3.	Заменить элементы по критерию

#include <iostream>
#include <algorithm>
#include <functional>
#include <random>
#include <ctime>
#include <array>
using namespace std;
using namespace placeholders;

struct Rnd {
  void operator()(int &ar) {
    static default_random_engine rnd(time(0));
    static uniform_int_distribution<unsigned> d(10, 30);
    ar = d(rnd);
  }
};

int main() {
  array<int, 20> num{};
  auto first = num.begin();
  auto last = num.end();
  for_each(first, last, Rnd());
  cout << "Исходный массив:\n";
  for (auto &ar : num)
    cout << ar << " ";
  //=====================================================
  // Сортировка по убыванию
  //=====================================================
  cout << "\nУпорядоченный массив по убыванию:\n";
  sort(first, last, greater<int>());
  for (auto &ar : num)
    cout << ar << " ";
  //=====================================================
  // Подсчет по критерию
  //=====================================================
  cout << "\nКоличество найденных элементов равных 20:\n"
       << count_if(first, last, bind(equal_to<int>(), _1, 20));
  //=====================================================
  // Замена по критерию
  //=====================================================
  replace_if(first, last, bind(less<int>(), _1, 19), 10);
  cout << "\nЗаменены все < 19 на 10:\n";
  for (auto &ar : num)
    cout << ar << " ";
  cout << endl;
  return 0;
}