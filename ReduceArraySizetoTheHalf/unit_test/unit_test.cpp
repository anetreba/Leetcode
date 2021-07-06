//
// Created by anetreba on 06.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests Reduce Array Size to The Half with invalid args.
TEST(ReduceArraySizetoTheHalf, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> vec;

    ASSERT_EQ(0, solution.minSetSize(vec));
}

// Tests Open Lock program with right args.
TEST(OpenLock, HandlesRightIput) {
    Solution solution;
    std::vector<int> vec = {3,3,3,3,5,5,5,2,2,7};
    std::vector<int> vec1 = {7,7,7,7,7,7};
    std::vector<int> vec2 = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vec3 = {1000,1000,3,7};

    ASSERT_EQ(2, solution.minSetSize(vec));
    ASSERT_EQ(1, solution.minSetSize(vec1));
    ASSERT_EQ(5, solution.minSetSize(vec2));
    ASSERT_EQ(1, solution.minSetSize(vec3));
}
