//
// Created by volha on 10/12/2021.
//
#include "../src/arithmeticlib.cpp"
#include <gtest/gtest.h>

// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(Factorial(0), 1);
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(Factorial(1), 1);
    EXPECT_EQ(Factorial(2), 2);
    EXPECT_EQ(Factorial(3), 6);
    EXPECT_EQ(Factorial(8), 40320);
}

//// Example 1
#include <gtest/gtest.h>

TEST(BasicTest, TestName) {
    ASSERT_TRUE(0 == 0);
}

int sum1(int a, int b) {
    return a + b;
}

TEST(SuiteName, TestName1) {
    ASSERT_TRUE(sum1(5, 3) == 8);
}

// #include "src/Numbers.h"
// TEST(BasicTests, NumberCompare){
//
//   EXPECT_EQ(1, ONE);
//   EXPECT_EQ(TWO, ONE);
// }
//
// TEST(BasicTests, ToString){
//   EXPECT_STREQ("one", NUmber)
//
// }


GTEST_API_ int main(int argc, char** argv) {
    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
