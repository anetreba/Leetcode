//
// Created by anetreba on 12.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests IsomorphicStrings func with invalid args.
TEST(IsomorphicStrings, HandlesInvalidInput) {
    Solution solution;

    std::string s1, s2;

    EXPECT_EQ(true, solution.isIsomorphic(s1, s2));
}

// Tests IsomorphicStrings func with right input.
TEST(IsomorphicStrings, HandlesRightIput) {
    Solution solution;
    std::string s1 = "paper", s2 = "title";
    std::string s4 = "foo", s5 = "bar";
    std::string s7 = "badc", s6 = "baba";

    EXPECT_EQ(true, solution.isIsomorphic(s1, s2));
    EXPECT_EQ(false, solution.isIsomorphic(s4, s5));
    EXPECT_EQ(false, solution.isIsomorphic(s7, s6));
}
