//
// Created by anetreba on 30.06.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests numMatchingSubseq func with invalid args.
TEST(NumMatchingSubseq, HandlesInvalidInput) {
    Solution solution;
    std::string s;
    std::vector<std::string> words;
    EXPECT_EQ(0, solution.numMatchingSubseq(s, words));
}

// Tests numMatchingSubseq func with right input.
TEST(NumMatchingSubseq, HandlesRightIput) {
    Solution solution;

    std::string s = "abcde";
    std::vector<std::string> words = {"a","bb","acd","ace"};
    EXPECT_EQ(3, solution.numMatchingSubseq(s, words));

    std::string s1 = "dsahjpjauf";
    std::vector<std::string> words1 = {"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
    EXPECT_EQ(2, solution.numMatchingSubseq(s1, words1));
}
