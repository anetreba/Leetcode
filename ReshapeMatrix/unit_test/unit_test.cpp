//
// Created by anetreba on 05.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests reshape matrix func with invalid args.
TEST(ReshapeTest, HandlesInvalidInput) {
    Solution solution;
    std::vector<std::vector<int>> vec = {};
    EXPECT_EQ(vec, solution.matrixReshape(vec, 3, 2));
    EXPECT_EQ(vec, solution.matrixReshape(vec, 0, -2));
}

// Tests reshape matrix func right input
TEST(ReshapeTest, HandlesPositiveIntIput) {
    Solution solution;
    std::vector<std::vector<int>> vec = {{1,2}, {3,4}};
    std::vector<std::vector<int>> res = {{1,2}, {3,4}};
    EXPECT_EQ(res, solution.matrixReshape(vec, 2, 4));
}
