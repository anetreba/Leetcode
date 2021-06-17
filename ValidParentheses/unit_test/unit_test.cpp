//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests ValidParent func with empty string.
TEST(ValidParent, HandlesEmptyString) {
    Solution solution;
    std::string str;
    bool res = solution.isValid(str);

    ASSERT_EQ(false, res);
}

// Tests ValidParent func with false result.
TEST(ValidParent, HandlesFalseOutput) {
    Solution solution;
    std::string str = "((}}()";
    bool res = solution.isValid(str);

    ASSERT_EQ(false, res);
}
// Tests ValidParent func with true result.
TEST(ValidParent, HandlesTrueOutput) {
    Solution solution;
    std::string str = "(({[]}))";
    bool res = solution.isValid(str);

    ASSERT_EQ(true, res);
}
