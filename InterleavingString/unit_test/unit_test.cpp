//
// Created by anetreba on 30.06.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests isInterleave func with invalid args.
TEST(InterleavingString, HandlesInvalidInput) {
    Solution solution;

    std::string s1, s2, s3;
    EXPECT_EQ(true, solution.isInterleave(s1, s2, s3));
}

// Tests isInterleave func with right input.
TEST(InterleavingString, HandlesRightIput) {
    Solution solution;
    std::string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
    std::string s4 = "aabcc", s5 = "dbbca", s6 = "aadbbbaccc";

    EXPECT_EQ(true, solution.isInterleave(s1, s2, s3));
    EXPECT_EQ(false, solution.isInterleave(s4, s5, s6));
}
