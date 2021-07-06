//
// Created by anetreba on 05.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests FindKClosestElements func with invalid args.
TEST(FindKClosestElements, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> vec;
    std::vector<int> res_expect;
    std::vector<int> res = solution.findClosestElements(vec, 1, 0);

    ASSERT_EQ(res_expect, res);
}

// Tests FindKClosestElements func with right numbers.
TEST(FindCommonChar, HandlesRightIput) {
    Solution solution;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> res_expect = {1, 2, 3, 4};
    std::vector<int> res = solution.findClosestElements(vec, 4, 3);

    ASSERT_EQ(res_expect, res);
    res_expect.empty();
    res.empty();
    res = solution.findClosestElements(vec, 4, -1);
    res_expect = {1, 2, 3, 4};

    ASSERT_EQ(res_expect, res);
}
