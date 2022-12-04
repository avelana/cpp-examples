/*
 * Пример ввода и вывода 2мерного массива
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; // n-количество строк 2мерного массива
  int m; // m-количество столбцов 2мерного массива

  // Ввод размерности массива
  cout << "Input the number of rows\n";
  cin >> n;
  cout << "Input the number of columns\n";
  cin >> m;

  // Объявление массива a размерности n x m
  //vector<vector<int> > a(n, vector<int>(m));

  /*
   * Пример объъявления 2мерного массива
   * если известно только количество строк в нем и не известно количество элементов в каждой строке
 */
  vector<vector<int> > b(n, vector<int>());

  int tmp;
  for (int i = 0; i < n; i++) {     // Цикл, который идёт по строкам
    do {
      cin >> tmp;
      b[i].push_back(tmp);
    } while (tmp != 0);
    b[i].pop_back();
  }
  //
  //  for (int i = 0; i < n; i++) {   // Цикл, который идёт по строкам
  //    for (int j = 0; j < m; j++) { // Цикл, который идёт по столбцам (элементам в строке)
  //
  //      cin >> a[i][j]; // Заполнение массива с консоли
  //    }
  //  }

  //  // вывод с помощью for
  //  for (int i = 0; i < a.Size(); ++i) { // Цикл, который идёт по строкам
  //    for (int j = 0; j < a[i].Size(); ++j) { // Цикл, который идёт по столбцам (элементам в
  //    строке)
  //      cout << a[i][j] << ' '; // Вывод элементов i строки массива
  //    }
  //    cout << endl;
  //  }
  // вывод с помощью for
  for (int i = 0; i < b.size(); ++i) { // Цикл, который идёт по строкам
      for (int j = 0; j < b[i].size(); ++j) { // Цикл, который идёт по столбцам (элементам в строке)
          cout << b[i][j] << ' '; // Вывод элементов i строки массива
      }
      cout << endl;
  }

//  // вывод с помощью range based for
//  for (auto &row:a) { // Цикл, который идёт по строкам
//    for (auto &element:row) { // Цикл, который идёт по столбцам (элементам в строке)
//      cout << element << ' '; // Вывод элементов i строки массива
//    }
//    cout << endl;
//  }

  return 0;
}