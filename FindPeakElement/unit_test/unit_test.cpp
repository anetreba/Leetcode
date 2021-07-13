//
// Created by anetreba on 13.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests FindPeakElement func with invalid args.
TEST(FindKClosestElements, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    ASSERT_EQ(-1, solution.findPeakElement(nums));
}

// Tests FindPeakElement func with right numbers.
TEST(FindCommonChar, HandlesRightIput) {
    Solution solution;
    std::vector<int> vec = {1,2,3,1};
    std::vector<int> nums = {1,2,1,3,5,6,4};

    ASSERT_EQ(2, solution.findPeakElement(vec));
    ASSERT_EQ(5, solution.findPeakElement(nums));
}
