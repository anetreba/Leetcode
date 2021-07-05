//
// Created by anetreba on 05.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests GrayCode func with right numbers.
TEST(GrayCode, HandlesRightIput) {
    Solution solution;
    std::vector<int> res = solution.grayCode(2);
    std::vector<int> expected = {0, 1, 3, 2};

    ASSERT_EQ(expected, res);
    res.empty();
    expected.empty();
    res = solution.grayCode(3);
    expected = {0, 1, 3, 2, 6, 7, 5, 4};

    ASSERT_EQ(expected, res);
}