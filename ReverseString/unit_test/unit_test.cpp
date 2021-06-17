//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests ReverseString func with invalid args.
TEST(TestReverseString, HandlesInvalidInput) {
    Solution solution;
    std::vector<char> str;
    std::vector<char> res;
    solution.reverseString(res);
    std::reverse(str.begin(), str.end());

    ASSERT_EQ(str, res);
}

// Tests ReverseString func with right input.
TEST(FindCommonChar, HandlesRightIput) {
    Solution solution;
    std::vector<char> str_expected = {'h', 'e', 'l', 'l', 'o'};
    std::vector<char> my_str = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(my_str);
    std::reverse(str_expected.begin(), str_expected.end());

    for (int i = 0; i < my_str.size(); i++) {
        EXPECT_EQ(str_expected[i], my_str[i]);
    }
}
