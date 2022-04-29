//
// Created by anetreba on 27.04.22.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Palindrome func with invalid args.
TEST(Palindrome, HandlesInvalidInput) {
    Solution solution;
    int num = 0;
    EXPECT_EQ(true, solution.isPalindrome(num));
}

// Tests Palindrome func with right input.
TEST(Palindrome, HandlesRightIput) {
    Solution solution;
    int num = 12888;
    bool res = solution.isPalindrome(num);

    EXPECT_EQ(false, res);

    num = 121;
    res = solution.isPalindrome(num);
    EXPECT_EQ(true, res);

    num = -121;
    res = solution.isPalindrome(num);
    EXPECT_EQ(false, res);
}
