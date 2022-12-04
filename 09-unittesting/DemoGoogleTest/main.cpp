//// Example 1
#include <gtest/gtest.h>

TEST(BasicTest, TestName) {
    ASSERT_TRUE(0 == 0);
}

int sum(int a, int b) {
    return a + b;
}

// Example 1
#include <gtest/gtest.h>

TEST(SuiteName, TestName1) {
    ASSERT_TRUE(sum(5, 3) == 8);
}

// #include <iostream>
//// Include the cmath library
// #include <cmath>
// using namespace std;
// int sum(int a, int b) {
//   return a + b;
// }
//
//int main() {
//  const int kN = 5;
//  int a;
//  if (a = 0) {
//    cout << "a = 0" << std::endl;
//  } else {
//    cout << "! a = 0" << std::endl;
//  }
//  cout << "kN " << kN << std::endl;
//
//  cout << sqrt(64);
//  cout << round(2.6);
//  cout << log(2);
//
//  cout << M_PI;
//  return 0;
//}


//#include "src/Numbers.h"
//TEST(BasicTests, NumberCompare){
//
//  EXPECT_EQ(1, ONE);
//  EXPECT_EQ(TWO, ONE);
//}
//
//TEST(BasicTests, ToString){
//  EXPECT_STREQ("one", NUmber)
//
//}


// long double Factorial(int n)
//{
//   if(n < 0) // если пользователь ввел отрицательное число
//     return 0; // возвращаем ноль
//   if (n == 0) // если пользователь ввел ноль,
//     return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
//   else // Во всех остальных случаях
//     return n * fact(n - 1); // делаем рекурсию.
// }


GTEST_API_ int main(int argc, char** argv) {
    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
