//
// Created by anetreba on 30.06.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests addBinary func with invalid args.
TEST(addBinary, HandlesInvalidInput) {
    std::string a;
    std::string b;
    Solution solution;

    ASSERT_EQ("", solution.addBinary(a, b));
}

// Tests addBinary func with right input.
TEST(addBinary, HandlesRightInput) {
    std::string a = "0111";
    std::string b = "1110";
    std::string c = "10101";
    Solution solution;

    EXPECT_EQ(c, solution.addBinary(a, b));

    a.clear();
    b.clear();
    c.clear();
    a = "11";
    b = "1";
    c = "100";

    EXPECT_EQ(c, solution.addBinary(a, b));

    a.clear();
    b.clear();
    c.clear();
    a = "1010";
    b = "1011";
    c = "10101";

    EXPECT_EQ(c, solution.addBinary(a, b));
}
