#include <vector>
#include <iostream>

int main() {
  // int sum = 1;

//  for (int i = 1 ; i <= 100; ++i) {
//    sum += i;
//  }
//  int i = 1 ;
//  for (; ; ) {
//    if (i <= 100) {
//      sum += i;
//    }else{
//      break;
//    }
//    ++i;
//  }

// int i = 1 ;
// while (i <= 100) {
//      sum += i;
//      ++i;
// }

//  int i = 1 ;
//  do {
//    sum += i;
//    ++i;
//  }while (i <= 100);

  // std::cout << "multiplication = " << sum << '\n';

// int k;
//  do {
//    std::cout << "Input number from the range [1,10]\n";
//    std::cin >> k;
//  } while (k < 1 || k > 10);

//  int k = 0;
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




  std::vector<int> array{};// { 12, 10, 8, 6, 4, 2, 1 };
  //std::cout << "The length is: " << array.size() << '\n';
  int number;
  std::cin >> number;
  int tmp;
  for (int i = 0; i < number; ++i) {
    std::cin >> tmp;
    array.push_back(tmp);
  }

  int sum = 0;
  for (auto &tmp:array) {
    sum += tmp;
  }

  for (int i = 0; i < array.size(); ++i) {
    tmp = array[i];
    sum += tmp;
  }

  std::cout << "sum = " << sum << '\n';

  return 0;
}