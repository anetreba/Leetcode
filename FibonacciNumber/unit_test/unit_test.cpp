//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Fibonacci func with invalid args.
TEST(FibTest, HandlesInvalidInput) {
    Solution solution;
    EXPECT_EQ(-1, solution.fib(0));
    EXPECT_EQ(-1, solution.fib(-1));
}

// Tests Fibonacci func with positive integer.
TEST(FibTest, HandlesPositiveIntIput) {
    Solution solution;
    EXPECT_EQ(1, solution.fib(1));
    EXPECT_EQ(1, solution.fib(2));
    EXPECT_EQ(987, solution.fib(16));
    EXPECT_EQ(4181, solution.fib(19));
}
