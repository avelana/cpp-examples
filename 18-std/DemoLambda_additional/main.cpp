#include <algorithm>
#include <array>
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

default_random_engine rnd(time(0));
uniform_int_distribution<unsigned> d(10, 99);

int main() {
    array<int, 20> num{};
    // Указание static необходимо, иначе лямбда выдаст ошибку
    //  static default_random_engine rnd(time(0));
    //  static uniform_int_distribution<unsigned> d(10, 99);
    auto first = num.begin();
    auto last = num.end();
    for_each(first, last, [](int& el) { el = d(rnd); });
    cout << "Initional array:\n";
    for (auto& ar : num)
        cout << ar << " ";
    int k = 0;
    //=============================================
    // Cумма элементов
    //=============================================
    for_each(first, last, [&k](int el) { k += el; });
    cout << "\nSum of items: " << k << endl;
    //=============================================
  // Уменьшить в 10 раз каждый элемент
  //=============================================
  for_each(first, last, [](int &el) { el /= 10; });
  for (auto &ar : num)
    cout << ar << " ";
  //=============================================
  // Считать только те, которые > 5
  //=============================================
  int q = 5;
  k = count_if(first, last, [q](int& el) { return el > q; });
  cout << "\nNumber of items > 5: " << k << endl;
  //=============================================
  // Заменить те, которые < 5 на 9
  //=============================================
  replace_if(
      first, last, [](int& el) { return el < 5; }, 9
  );
  cout << "Changed array: " << endl;
  for (auto &ar : num)
    cout << ar << " ";
  return 0;
}
