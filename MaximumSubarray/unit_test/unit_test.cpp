//
// Created by anetreba on 30.06.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests maxSubArray func with invalid args.
TEST(maxSubArray, HandlesInvalidInput) {
    std::vector<int> nums;
    Solution solution;
    ASSERT_EQ(0, solution.maxSubArray(nums));
}

// Tests maxSubArray func with right input.
TEST(maxSubArray, HandlesRightIput) {
    std::vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    Solution solution;
    EXPECT_EQ(6, solution.maxSubArray(nums));

    nums.clear();
    nums = {1};
    EXPECT_EQ(1, solution.maxSubArray(nums));

    nums.clear();
    nums = {5,4,-1,7,8};
    EXPECT_EQ(23, solution.maxSubArray(nums));
}
