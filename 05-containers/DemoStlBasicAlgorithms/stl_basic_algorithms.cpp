/*
 * author: Andrei Ilyin
 */

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>


// Full list of algorithms is available at
// https://en.cppreference.com/w/cpp/algorithm

void Print(const std::vector<int> &values) {
  std::cout << "[";
  for (int value : values) {
    std::cout << value << ", ";
  }
  std::cout << "] -- ";
  std::cout << "Size = " << values.size() << "\n";
}

// --------------------------------------------------------------------------

bool IsIntegerLess(int first, int second) {
  return first < second;
}

bool IsIntegerGreater(int first, int second) {
  return first > second;
}

int LeadingDigit(int value) {
  while (value > 10) {
    value /= 10;
  }
  return value;
}

void SortAndLambdasDemo() {
  // std::vector<int> values = {150, 14, 1300, 52, 11, 0, 21, 220, 23, 240, 25};
  // Print(values);

  // ------- Сортировка по неубыванию

  // std::sort(values.begin(), values.end());
  // Print(values);

  // ------- Сортировка по неубыванию (функция-компаратор)

  // std::sort(values.begin(), values.end(), IsIntegerLess);
  // // std::sort(values.begin(), values.end(), IsIntegerLess());  // -- ERROR
  // Print(values);

  // ------- Сортировка по невозрастанию (функция-компаратор)

  // std::sort(values.begin(), values.end(), IsIntegerGreater);
  // Print(values);

  // ------- Сортировка по невозрастанию (лямбда-компаратор)

  // std::sort(values.begin(), values.end(), [](int first, int second) {
  //   return first > second;
  // });
  // Print(values);

  // ------- Сортировка по младшей цифре (лямбда-компаратор)

  // std::sort(values.begin(), values.end(), [](int first, int second) {
  //   return first % 10 < second % 10;
  // });
  // Print(values);

  // ------- Сортировка по старшей цифре (лямбда-компаратор)

  // std::sort(values.begin(), values.end(), [](int first, int second) {
  //   while (first > 10) {
  //     first /= 10;
  //   }
  //   while (second > 10) {
  //     second /= 10;
  //   }
  //   return first < second;
  // });
  // Print(values);

  // ------- Сортировка по старшей цифре
  //         (лямбда-компаратор с вызовом внешней функции)

  // std::sort(values.begin(), values.end(), [](int first, int second) {
  //   int first_leading_digit = LeadingDigit(first);
  //   int second_leading_digit = LeadingDigit(second);
  //   return first_leading_digit < second_leading_digit;
  // });
  // Print(values);

  // ------- Сортировка со вторичным критерием

  // std::sort(values.begin(), values.end(), [](int first, int second) {
  //   int first_leading_digit = LeadingDigit(first);
  //   int second_leading_digit = LeadingDigit(second);
  //   if (first_leading_digit != second_leading_digit) {
  //     return first_leading_digit < second_leading_digit;
  //   } else {
  //     return first < second;
  //   }
  // });
  // Print(values);

  // ------- Захват внешних переменных (чтение)

  // int module = 10;
  // std::sort(values.begin(), values.end(), [&](int first, int second) {
  //   return first % module < second % module;
  // });
  // Print(values);

  // ------- Захват внешних переменных (запись)

  // int comparisons_count = 0;
  // std::sort(values.begin(), values.end(), [&](int first, int second) {
  //   ++comparisons_count;
  //   return first < second;
  // });
  // std::cout << "Number of comparisons: " << comparisons_count << "\n";
  // Print(values);
}

// --------------------------------------------------------------------------

void MiscDemo() {
  // std::vector<int> values = {1, 2, 3, 3, 3, 4, 4, 5, 6, 1, 1, 1, 10, 11};
  // Print(values);

  // ------- std::count

  // int zeros_count = std::count(values.begin(), values.end(), 1);
  // int ones_count = std::count(values.begin(), values.end(), 0);
  // std::cout << zeros_count << ' ' << ones_count << '\n';

  // int key = 3;
  // int key_count = std::count(values.begin(), values.end(), key);
  // std::cout << key_count << '\n';

  // ------- std::count_if

  // int count_if_predicate =
  //     std::count_if(values.begin(), values.end(), [](int value_) {
  //       return value_ % 2 == 0;
  //       // return value_ > 4;
  //     });
  // std::cout << count_if_predicate << '\n';

  // ------- std::remove_if

  // auto new_end = std::remove_if(values.begin(), values.end(), [](int value_) {
  //   return value_ % 2 == 0;
  // });
  // Print(values);
  //
  // int new_size = new_end - values.begin();
  // std::cout << "New Size = " << new_size << '\n';
  //
  // values.resize(new_size);
  // Print(values);

  // ------- std::find

  // int key = 111;
  // auto position = std::find(values.begin(), values.end(), key);
  // std::cout << "Lower index: " << (position - values.begin()) << '\n';

  // ------- std::is_sorted

  // // std::sort(values.begin(), values.end());
  // if (!std::is_sorted(values.begin(), values.end())) {
  //   std::sort(values.begin(), values.end());
  //   std::cout << "Sorted. New array:\n";
  //   Print(values);
  // } else {
  //   std::cout << "No sorting is needed.\n";
  // }

  // ------- std::lower_bound / std::upper_bound

  // int key = 3;
  // auto lower = std::lower_bound(values.begin(), values.end(), key);
  // auto upper = std::upper_bound(values.begin(), values.end(), key);
  // std::cout << "Lower index: " << (lower - values.begin()) << '\n';
  // std::cout << "Upper index: " << (upper - values.begin()) << '\n';
  // std::cout << "Count:       " << (upper - lower) << '\n';
}

// --------------------------------------------------------------------------

int CountIf(const std::vector<int> &values,
            const std::function<bool(int)> &predicate) {
  int result = 0;
  for (int value : values) {
    if (predicate(value)) {
      ++result;
    }
  }
  return result;
}

bool IsEven(int value) {
  return value % 2 == 0;
}

bool IsOdd(int value) {
  return value % 2 == 1;
}

void StdFunctionDemo() {
  // std::vector<int> values = {1, 2, 3, 3, 3, 4, 4, 5, 6, 1, 1, 1, 10, 11};
  // Print(values);

    // ------- Передача функций

    // int even_count = CountIf(values, IsEven);
    // int odd_count = CountIf(values, IsOdd);
    // std::cout << "Even count: " << even_count << '\n';
    // std::cout << "Odd count:  " << odd_count << '\n';

    // ------- Передача лямбда-выражений

    // int count_if_predicate = CountIf(values, [](int value_) {
    //   return value_ % 2 == 0;
    //   // return value_ > 4;
    // });
    // std::cout << count_if_predicate << '\n';

    // ------- Переменные типа std::function и фукнции

    // std::function<bool(int)> predicate = IsOdd;
    // // std::function<bool(int)> predicate = IsOdd();  // -- ERROR
    // int even_count = CountIf(values, predicate);
    //
    // predicate = IsEven;
    // int odd_count = CountIf(values, predicate);
    //
    // std::cout << "Even count: " << even_count << '\n';
    // std::cout << "Odd count:  " << odd_count << '\n';

    // ------- Переменные типа std::function и лямбда-выражения

    // predicate = [](int value_) {
    //   // return value_ % 2 == 0;
    //   return value_ >= 10;
    // };
    // std::cout << "CountIf() = " << CountIf(values, predicate) << '\n';
}

// --------------------------------------------------------------------------

int main() {
  SortAndLambdasDemo();
  MiscDemo();
  StdFunctionDemo();
  return 0;
}