//
// Created by anetreba on 19.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests ThreeEqualParts func with invalid args.
TEST(ThreeEqualParts, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    std::vector<int> res = {-1, -1};
    EXPECT_EQ(res, solution.threeEqualParts(nums));
}

// Tests ThreeEqualParts func with right input.
TEST(ThreeEqualParts, HandlesRightIput) {
    Solution solution;
    std::vector<int> nums = {1, 0, 1, 0, 1};
    std::vector<int> nums1 = {1, 1, 0, 1, 1};
    std::vector<int> nums2 = {1, 1, 0, 0, 1};
    std::vector<int> res = {0, 3};
    std::vector<int> res1 = {-1, -1};
    std::vector<int> res2 = {0, 2};



    EXPECT_EQ(res, solution.threeEqualParts(nums));
    EXPECT_EQ(res1, solution.threeEqualParts(nums1));
    EXPECT_EQ(res2, solution.threeEqualParts(nums2));

}


