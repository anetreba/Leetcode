//
// Created by anetreba on 20.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests ShuffleAnArray func with invalid args.
TEST(ValidTriangleNumber, HandlesInvalidInput) {
    std::vector<int> nums;
    Solution solution(nums);
    EXPECT_EQ(nums, solution.shuffle());
    EXPECT_EQ(nums, solution.reset());
}


