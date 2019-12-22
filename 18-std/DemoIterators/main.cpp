#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>

int main() {
//  // ПРИМЕР: https://en.cppreference.com/w/cpp/iterator/back_insert_iterator
//  std::vector<int> v;
//  //std::back_insert_iterator<std::vector<int>> it = std::back_inserter(v);
//
//  auto it = std::back_inserter(v);
//  /*std::generate_n(std::back_insert_iterator<std::vector<int>>(v),   // can be simplified
//                  10, [n=0]() mutable { return ++n; });        // with std::back_inserter
//*/
//  std::generate_n(it, 10, [n = 0]() mutable { return ++n; });
//  for (int n : v) {
//    std::cout << n << ' ';
//  }
//  std::cout << '\n';
//
//
  using namespace std;
  // ПРИМЕР: Инициализируйте вектор потоковыми итераторами непосредственно и по критерию
  // На основе строки
  string S("1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16");
  // Создаем строковый поток
  istringstream strStream(S);

  // Этим потоком инициализируем итераторы

  istream_iterator<int> first(strStream);// Итератор начала потока
  istream_iterator<int> last;// Итератор конца; обратите внимание на отсутствие скобок

  // Потоковыми итераторами инициализируем вектор
  vector<int> vec(first, last);
  for (auto &r : vec) {
    cout << r << " ";
  }
  cout << endl;

  strStream.clear(); // Сброс флагов состояния, иначе невозможно возобновить поток

  strStream.str(S); // Вновь отправляем эту же строку в поток
  // Более компактное описание итераторов
  // eof, в данном случае, имя итератора, а не функция
  istream_iterator<int> first1(strStream), eof;
  vector<int> vector(15);
  int counter = 0;
  // Заполним вектор из потока по критерию
  copy_if(first1, eof, vector.begin(), [&counter](const int &r) {
    if (!(r % 3)) { counter++; }
    return !(r % 3);
  });
  /*for (auto &r : vector)
    cout << r << " ";
  */
  cout << "counter =" << counter << "\n";
  for (int i = 0; i < counter; ++i) {
    cout << vector[i] << " ";

  }

  cout << endl;


//  // ПРИМЕР: Скопировать из потока в строку только уникальные символы
//  istringstream is("qqqAAAAqqqwwBBBBwwweeerrrrrtyu");
//  istreambuf_iterator<char> in_it(is), it_eof;
//  string str;
//
//  str.resize(20); // Обязательно устанавливаем размер строки,иначе некуда будет копировать
//
//  unique_copy(in_it, it_eof, str.begin()); // Копируем в строку только уникальные символы
//  cout << str << endl;

//
//   ПРИМЕР: С помощью потокового итератора вывода обеспечить вывод числовой последовательности в файл и на дисплей.
//   С помощью алгоритма copy вывести содержимое вектора на дисплей.


  int i = 20;
  ostream_iterator<int> os_it(cout, " ");
  // Помещаем числа в стандартный поток используя интерфейс итераторов
  while (--i) {
    *os_it = i;
    os_it++; // Использовать можно, но не имеет эффекта
  }
  // Создаем файловый поток вывода
  ofstream fout("output");
  // А теперь запишем в файл несколько таких строк
  ostream_iterator<int> of_it(fout, ", ");
  i = 10;
  while (--i) {
    int j = 20;
    while (--j) {
      *of_it = j;
      //of_it++;
    }
    fout << '\n';
  }
  cout << endl;
  // Выведем на экран содержимое вектора
  std::vector<int> mas{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  copy(mas.cbegin(), mas.cend(), ostream_iterator<int>(cout, " "));

  return 0;
}