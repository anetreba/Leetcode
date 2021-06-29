//
// Created by anetreba on 29.06.21.
//
#include "gtest/gtest.h"
#include "../Solution.h"

// Tests longestOnes func with invalid args.
TEST(FibTest, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> vec = {};
    EXPECT_EQ(0, solution.longestOnes(vec, 0));
    EXPECT_EQ(0, solution.longestOnes(vec, -1));
}

// Tests longestOnes func right input
TEST(FibTest, HandlesPositiveIntIput) {
    Solution solution;
    std::vector<int> vec = {1,1,1,0,0,0,1,1,1,1,0};
    EXPECT_EQ(6, solution.longestOnes(vec, 2));
    vec.empty();
    vec = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    EXPECT_EQ(10, solution.longestOnes(vec, 3));
}
