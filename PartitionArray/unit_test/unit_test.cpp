//
// Created by anetreba on 23.07.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests PartitionArray program with invalid args.
TEST(PartitionArray, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    EXPECT_EQ(0, solution.partitionDisjoint(nums));
}

// Tests PartitionArray program with right args.
TEST(PartitionArray, HandlesRightInput) {
    Solution solution;
    std::vector<int> nums = {5,0,3,8,6};
    EXPECT_EQ(3, solution.partitionDisjoint(nums));
    std::vector<int> nums1 = {1,1,1,0,6,12};
    EXPECT_EQ(4, solution.partitionDisjoint(nums1));
}
