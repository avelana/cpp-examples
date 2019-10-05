#include <vector>
#include <iostream>
template<typename T>
void PrintValues(std::vector<T> nums, std::string title) {
  std::cout << title << ":\n";
  for (auto &x : nums) { // доступ по ссылке
    std::cout << x << ' ';
  }
  std::cout << '\n';
}

int main() {
  // ---- FOR

//  int sum = 0;
//  for (int i = 1 ; i <= 100; ++i) {
//    sum += i;
//  }
//  int sum = 0;
//  int i = 1 ;
//  for (; ; ) {
//    if (i <= 100) {
//      sum += i;
//    }else{
//      break;
//    }
//    ++i;
//  }

// ---- WHILE

// int sum = 0;
// int i = 1 ;
// while (i <= 100) {
//      sum += i;
//      ++i;
// }
//  int sum = 0;
//  int i = 1 ;
//  do {
//    sum += i;
//    ++i;
//  }while (i <= 100);

  // std::cout << "multiplication = " << sum << '\n';

  // ---- DO WHILE
// int k;
//  do {
//    std::cout << "Input number from the range [1,10]\n";
//    std::cin >> k;
//  } while (k < 1 || k > 10);

//  int k = 0; // наверняка неверное значение
//  while (k < 1 || k > 10){
//    std::cout << "Input number from the range [1,10]\n";
//    std::cin >> k;
//  }
//  int k;
//  std::cout << "Input number from the range [1,10]\n";
//  std::cin >> k;
//
//  while (k < 1 || k > 10){
//    std::cout << "Input number from the range [1,10]\n";
//    std::cin >> k;
//  }

//
//  std::vector<int> array{};// { 12, 10, 8, 6, 4, 2, 1 };
//  //std::cout << "The length is: " << array.size() << '\n';
//  int number;
//  std::cin >> number;
//  int tmp;
//  for (int i = 0; i < number; ++i) {
//    std::cin >> tmp;
//    array.push_back(tmp);
//  }

//  for (int i = 0; i < array.size(); ++i) {
//    tmp = array[i];
//    sum += tmp;
//  }

  // RANGE_BASED_FOR_LOOP
//  int sum = 0;
//  for (auto &tmp:array) {
//    sum += tmp;
//  }
//

//
//  std::cout << "sum = " << sum << '\n';


  std::vector<int> nums = {0, 1, 2, 3, 4, 5};
  PrintValues(nums, "Initial vector");
  for (auto x : nums) { // доступ по значению
    x++;
  }
  PrintValues(nums, "Vector after for (auto x : nums)");

  for (auto &x : nums) { // доступ по ссылке
    x++;
  }
  PrintValues(nums, "Vector after for (auto& x : nums)");

  for (const auto &x : nums) { // доступ по константной ссылке
    // x++; // Ошибка компиляции
    std::cout << x << ' ';
  }

  for (auto &&x : nums) {// access by forwarding reference, the type of x is int&
    std::cout << x << ' ';
  }
  std::cout << '\n';

  const auto &cv = nums;

  for (auto &&x : cv) // access by f-d reference, the type of x is const int&
    std::cout << x << ' ';
  std::cout << '\n';

  for (int x : {0, 1, 2, 3, 4, 5}) // the initializer may be a braced-init-list
    std::cout << x << ' ';
  std::cout << '\n';

  int a[] = {0, 1, 2, 3, 4, 5};
  for (int x : a) // the initializer may be an array
    std::cout << x << ' ';
  std::cout << '\n';

  for (int x : a)
    std::cout << 1 << ' '; // the loop variable need not be used
  std::cout << '\n';

  return 0;
}