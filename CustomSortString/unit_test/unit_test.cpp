//
// Created by anetreba on 14.07.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests CustomSortString func with invalid args.
TEST(CustomSortString, HandlesInvalidInput) {
    Solution solution;
    std::string order;
    std::string str;

    ASSERT_EQ(str, solution.customSortString(order, str));
}

// Tests CustomSortString func with right args.
TEST(CustomSortString, HandlesRightIput) {
    Solution solution;
    std::string order = "cba";
    std::string str = "abcd";
    std::string res = "cbad";

    ASSERT_EQ(res, solution.customSortString(order, str));
}
