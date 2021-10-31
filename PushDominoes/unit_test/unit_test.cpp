//
// Created by anetreba on 21.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests PushDominoes program with invalid args.
TEST(PushDominoes, HandlesInvalidInput) {
    Solution solution;
    std::string str;
    EXPECT_EQ(str, solution.pushDominoes(str));
}

// Tests PushDominoes program with right args.
TEST(PushDominoes, HandlesPositiveIntIput) {
    Solution solution;
    std::string dominoes = "RR.L";
    std::string expect = "RR.L";
    std::string dominoes1 = ".L.R...LR..L..";
    std::string expect1 = "LL.RR.LLRRLL..";

    EXPECT_EQ(expect, solution.pushDominoes(dominoes));
    EXPECT_EQ(expect1, solution.pushDominoes(dominoes1));
}

