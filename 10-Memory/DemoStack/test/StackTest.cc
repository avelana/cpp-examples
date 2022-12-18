#include "../src/Stack.h"
#include <gtest/gtest.h>

class StackTest : public ::testing::Test {
protected:
    void SetUp() override {
        stack1_.push(1);
        stack2_.push(2);
        stack2_.push(3);
    }

    void TearDown() override { }

    Stack<int> stack0_;
    Stack<int> stack1_;
    Stack<int> stack2_;
};

TEST_F(StackTest, IsEmptyInitially) {
    EXPECT_EQ(stack0_.Count(), 0);
    // EXPECT_EQ(1, 1);
}

//
// TEST_F(StackTest, DequeueWorks) {
//    EXPECT_ANY_THROW(stack0_.pop());
//
//
//  int n = stack1_.pop();
//  //ASSERT_NE(n, nullptr);
// try{
//  EXPECT_EQ(n, 1);
//  EXPECT_EQ(stack1_.Count(), 0);
//
//  n = stack2_.pop();
//  // ASSERT_NE(n, nullptr);
//  EXPECT_EQ(n, 2);
//  EXPECT_EQ(stack2_.Count(), 1);
// }
// catch(std::exception ex){
//     EXPECT_EQ(0, 1);
// }
// }

GTEST_API_ int main(int argc, char** argv) {
    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}