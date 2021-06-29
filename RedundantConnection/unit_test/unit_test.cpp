//
// Created by anetreba on 30.06.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Redundant Connection program with invalid args.
TEST(RedundantConnection, HandlesInvalidInput) {
    Solution solution;
    std::vector<std::vector<int>> vector;
    std::vector<int> res;


    ASSERT_EQ(res, solution.findRedundantConnection(vector));
}

// Tests FindCommonChar func with right numbers.
TEST(RedundantConnection, HandlesRightIput) {
    Solution solution;

    std::vector<std::vector<int>> vector = {{1,2},{1,3},{2,3}};
    std::vector<int> res = {2,3};

    ASSERT_EQ(res, solution.findRedundantConnection(vector));
    std::vector<std::vector<int>> vector1 = {{1,2},{2,3},{3,4},{1,4},{1,5}};
    std::vector<int> res1 = {1,4};

    ASSERT_EQ(res1, solution.findRedundantConnection(vector1));
}
