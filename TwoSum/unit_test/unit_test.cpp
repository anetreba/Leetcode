//
// Created by anetreba on 27.04.22.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests twoSum func with invalid args.
TEST(twoSum, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> nums;
    int target;
    std::vector<int> res;

    EXPECT_EQ(res, solution.twoSum(nums, target));
}

// Tests twoSum func with right input.
TEST(twoSum, HandlesRightIput) {
    Solution solution;
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::vector<int> expected_res = {0,1};
    std::vector<int> res = solution.twoSum(nums, target);

    EXPECT_EQ(expected_res, res);

    nums.clear();
    nums = {3,2,4};
    target = 6;
    expected_res.clear();
    res.clear();
    expected_res = {1,2};
    res = solution.twoSum(nums, target);

    EXPECT_EQ(expected_res, res);

    nums.clear();
    nums = {3,3};
    target = 6;
    expected_res.clear();
    res.clear();
    expected_res = {0,1};
    res = solution.twoSum(nums, target);

    EXPECT_EQ(expected_res, res);

}
