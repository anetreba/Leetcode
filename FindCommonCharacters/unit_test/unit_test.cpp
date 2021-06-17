//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests FindCommonChar func with invalid args.
TEST(FindCommonChar, HandlesInvalidInput) {
    Solution solution;
    std::vector<std::string> vec;
    std::vector<std::string> res_expect;
    std::vector<std::string> res = solution.commonChars(vec);

    ASSERT_EQ(res_expect, res);
}

// Tests FindCommonChar func with right numbers.
TEST(FindCommonChar, HandlesRightIput) {
    Solution solution;
    std::vector<std::string> vec = {"hello", "hell", "hole"};
    std::vector<std::string> res_expect = {"h", "e", "l"};
    std::vector<std::string> res = solution.commonChars(vec);

    for (int i = 0; i < res.size(); i++) {
        EXPECT_EQ(res_expect[i], res[i]);
    }
}
