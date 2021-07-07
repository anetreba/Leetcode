//
// Created by anetreba on 07.07.21.
//
#include "gtest/gtest.h"
#include "../Solution.h"

// Tests KthSmallestElem func with invalid args.
TEST(KthSmallestElem, HandlesInvalidInput) {
    Solution solution;
    std::vector<std::vector<int>> vec;

    EXPECT_EQ(0, solution.kthSmallest(vec, -1));
}

// Tests KthSmallestElem func with right input.
TEST(KthSmallestElem, HandlesRightIput) {
    Solution solution;
    std::vector<std::vector<int>> mat = {{1,5,9},{10,11,13},{12,13,15}};

    EXPECT_EQ(13, solution.kthSmallest(mat, 8));
    std::vector<std::vector<int>> mat1 = {{-5}};

    EXPECT_EQ(-5, solution.kthSmallest(mat1, 1));
}

