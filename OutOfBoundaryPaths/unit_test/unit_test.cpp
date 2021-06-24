//
// Created by anetreba on 30.06.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Out of Boundary Paths program with invalid args.
TEST(OutOfBoundPath, HandlesInvalidInput) {
    Solution solution;
    int m = 0, n = -1, maxMove = 2, startRow = -1, startColumn = 0;
    EXPECT_EQ(0, solution.findPaths(m, n, maxMove, startRow, startColumn));
}

// Tests Out of Boundary Paths program with right args.
TEST(OutOfBoundPath, HandlesPositiveIntIput) {
    Solution solution;
    int m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0;

    EXPECT_EQ(6, solution.findPaths(m, n, maxMove, startRow, startColumn));

    m = 1, n = 3, maxMove = 3, startRow = 0, startColumn = 1;
    EXPECT_EQ(12, solution.findPaths(m, n, maxMove, startRow, startColumn));
}
