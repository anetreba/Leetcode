//
// Created by anetreba on 30.06.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Max Area func with invalid args.
TEST(MaxArea, HandlesInvalidInput) {
    Solution solution;
    int h = -1;
    int w = -2;
    std::vector<int> horizontalCuts;
    std::vector<int> verticalCuts;

    ASSERT_EQ(0, solution.maxArea(h, w, horizontalCuts, verticalCuts));
}

// Tests Max Area func with right args.
TEST(MaxArea, HandlesRightIput) {
Solution solution;
    int h = 5;
    int w = 4;
    std::vector<int> horizontalCuts = {1, 2, 4};
    std::vector<int> verticalCuts = {1, 3};

    ASSERT_EQ(4, solution.maxArea(h, w, horizontalCuts, verticalCuts));

    h = 5;
    w = 4;
    horizontalCuts.empty();
    verticalCuts.empty();
    horizontalCuts = {3, 1};
    verticalCuts = {1};

    ASSERT_EQ(6, solution.maxArea(h, w, horizontalCuts, verticalCuts));

    h = 5;
    w = 4;
    horizontalCuts.empty();
    verticalCuts.empty();
    horizontalCuts = {3};
    verticalCuts = {3};

    ASSERT_EQ(9, solution.maxArea(h, w, horizontalCuts, verticalCuts));

}
