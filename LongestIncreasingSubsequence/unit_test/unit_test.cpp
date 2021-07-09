//
// Created by anetreba on 09.07.21.
//

//
// Created by anetreba on 30.06.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Longest Increasing Subsequence func with invalid args.
TEST(LongestIncreasingSubsequence, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    EXPECT_EQ(0, solution.lengthOfLIS(nums));
}

// Tests Longest Increasing Subsequence func with right input.
TEST(LongestIncreasingSubsequence, HandlesRightIput) {
    Solution solution;
    std::vector<int> nums = {10,9,2,5,3,7,101,18};
    std::vector<int> nums1 = {0,1,0,3,2,3};
    std::vector<int> nums2 = {7,7,7,7,7,7,7};
    std::vector<int> nums3 = {0, 1, 0, 3, 2, 3, 7, 8};
    std::vector<int> nums4 = {3,2,1};

    ASSERT_EQ(4, solution.lengthOfLIS(nums));
    ASSERT_EQ(4, solution.lengthOfLIS(nums1));
    ASSERT_EQ(1, solution.lengthOfLIS(nums2));
    ASSERT_EQ(6, solution.lengthOfLIS(nums3));
    ASSERT_EQ(1, solution.lengthOfLIS(nums4));
}


