//
// Created by anetreba on 16.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests 4Sum func with invalid args.
TEST(Sum, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    std::vector<std::vector<int>> res = solution.fourSum(nums, 0);
    std::vector<std::vector<int>> expect;

    ASSERT_EQ(expect, res);
}

// Tests 4Sum func with right args.
TEST(Sum, HandlesRightIput) {
    Solution solution;
    std::vector<int> nums = {1,0,-1,0,-2,2};
    std::vector<std::vector<int>> res = solution.fourSum(nums, 0);
    std::vector<std::vector<int>> expect = {{-2,-1,1,2},{-2,0,0,2},{-1,0,0,1}};
    std::vector<int> nums1 = {2,2,2,2,2};
    std::vector<std::vector<int>> res1 = solution.fourSum(nums1, 8);
    std::vector<std::vector<int>> expect1 = {{2,2,2,2}};

    ASSERT_EQ(expect, res);
    ASSERT_EQ(expect1, res1);
}
