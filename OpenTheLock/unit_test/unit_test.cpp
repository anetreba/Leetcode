//
// Created by anetreba on 30.06.21.
//
#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Open Lock program with invalid args.
TEST(OpenLock, HandlesInvalidInput) {
    Solution solution;
    std::vector<std::string> deadends;
    std::string target;

    ASSERT_EQ(-1, solution.openLock(deadends, target));
}

// Tests Open Lock program with right args.
TEST(OpenLock, HandlesRightIput) {
    Solution solution;
    std::vector<std::string> deadends = {"0201","0101","0102","1212","2002"};
    std::string target = "0202";
    std::vector<std::string> deadends1 = {"8888"};
    std::string target1 = "0009";
    std::vector<std::string> deadends2 = {"8887","8889","8878","8898","8788","8988","7888","9888"};
    std::string target2 = "8888";
    std::vector<std::string> deadends3 = {"0000"};
    std::string target3 = "8888";

    ASSERT_EQ(6, solution.openLock(deadends, target));
    ASSERT_EQ(1, solution.openLock(deadends1, target1));
    ASSERT_EQ(-1, solution.openLock(deadends2, target2));
    ASSERT_EQ(-1, solution.openLock(deadends3, target3));
}

