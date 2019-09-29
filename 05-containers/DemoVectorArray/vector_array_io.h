//
// Created by volha on 26.09.2019.
//

#ifndef VECTOR_ARRAY_IO_H_
#define VECTOR_ARRAY_IO_H_

#include <vector>
#include <string>
#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

/* Ввод элементов последовательности уже определенного размера*/
template<typename T, size_t SIZE>
void InputArray(array<T, SIZE> &v) {
  for (T &tmp :v) {
    cin >> tmp;
  }
}

/* Ввод элементов последовательности уже определенного размера*/
template<typename T>
void InputVector(vector<T> &v) {
  for (T &tmp :v) {
    cin >> tmp;
  }
}
/* Ввод элементов последовательности размера n */
template<typename T>
void InputVector(vector<T> &v, const int n) {
  T tmp;
  v.resize(n);
  InputVector(v);
}

/* Ввод элементов последовательности размера n */
template<typename T>
void InputVectorAddedToEnd(vector<T> &v, const int n) {
  T tmp;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    v.push_back(tmp);
  }
}

/* Вывод элементов последовательности */
template<typename T>
void PrintVector(const vector<T> &v, const string &delimeter) {
  for (auto s : v) {
    cout << s << delimeter;
  }
  cout << '\n';
}

/* Вывод элементов последовательности */
template<typename T, size_t SIZE>
void PrintArray(const array<T, SIZE> &v, const string &delimeter) {
  for (auto s : v) {
    cout << s << delimeter;
  }
  cout << '\n';
}

#endif //VECTOR_ARRAY_IO_H_
