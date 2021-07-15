//
// Created by anetreba on 15.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests ValidTriangleNumber func with invalid args.
TEST(ValidTriangleNumber, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    EXPECT_EQ(0, solution.triangleNumber(nums));
}

// Tests ValidTriangleNumber func with right input.
TEST(ValidTriangleNumber, HandlesRightIput) {
    Solution solution;
    std::vector<int> nums = {2,2,3,4};
    std::vector<int> nums1 = {4,2,3,4};
    std::vector<int> nums2 = {7,7,7,7,7,7,7};
    std::vector<int> nums3 = {0, 1, 0, 3, 2, 3, 7, 8};
    std::vector<int> nums4 = {3,2,1};

    ASSERT_EQ(3, solution.triangleNumber(nums));
    ASSERT_EQ(4, solution.triangleNumber(nums1));
    ASSERT_EQ(35, solution.triangleNumber(nums2));
    ASSERT_EQ(5, solution.triangleNumber(nums3));
    ASSERT_EQ(0, solution.triangleNumber(nums4));
}


