//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"


// Tests reverse polish notation func with invalid arg.
TEST(TestReversePolishNotation, HandlesInvalidInput) {
    Solution solution;
    std::vector<std::string> tokens_1 = {"a", "b", "*"};
    int res_1 = solution.evalRPN(tokens_1);
    std::vector<std::string> tokens_2 = {"4", "2", "*", "*"};
    int res_2 = solution.evalRPN(tokens_2);
    std::vector<std::string> tokens_3 = {"4", "0", "/"};
    int res_3 = solution.evalRPN(tokens_3);

    EXPECT_EQ(0, res_1);
    EXPECT_EQ(0, res_2);
    EXPECT_EQ(0, res_3);
}

// Tests reverse polish notation func with empty arg.
TEST(TestReversePolishNotation, HandlesEmptyInput) {
    Solution solution;
    std::vector<std::string> tokens;
    int res = solution.evalRPN(tokens);

    ASSERT_EQ(0, res);
}

// Tests reverse polish notation func with right arg.
TEST(TestReversePolishNotation, HandlesRightIput) {
    Solution solution;
    std::vector<std::string> tokens = {"2", "3", "*", "4", "5", "*", "+"};
    int res = solution.evalRPN(tokens);

    ASSERT_EQ(26, res);
}
