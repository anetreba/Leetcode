//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests SearchInsertPosition func with invalid args.
TEST(SearchInsertPosition, HandlesInvalidInput) {
    std::vector<int> nums;
    int target = 2;
    Solution s;
    ASSERT_EQ(0, s.searchInsert(nums, target));
}

// Tests SearchInsertPosition func with right input.
TEST(SearchInsertPosition, HandlesRightIput) {
    std::vector<int> nums{1, 3, 5, 6};
    int target = 5;
    Solution s;
    ASSERT_EQ(2, s.searchInsert(nums, target));

    target = 2;
    ASSERT_EQ(1, s.searchInsert(nums, target));

    target = 7;
    ASSERT_EQ(4, s.searchInsert(nums, target));

    target = 0;
    ASSERT_EQ(0, s.searchInsert(nums, target));

}
