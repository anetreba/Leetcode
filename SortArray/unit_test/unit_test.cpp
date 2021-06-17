//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests SortArray func with invalid args.
TEST(TestSortArray, HandlesInvalidInput) {
    Solution solution;
    std::vector<int> vec;
    std::vector<int> res_expect;
    std::vector<int> res = solution.sortArray(vec);

    ASSERT_EQ(res_expect, res);
}

// Tests SortArray func with one item in vector.
TEST(TestSortArray, HandlesOneItem) {
    Solution solution;
    std::vector<int> vec = {1};
    std::vector<int> res = solution.sortArray(vec);
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < res.size(); i++) {
        EXPECT_EQ(vec[i], res[i]);
    }
}

// Tests SortArray func with sorted array.
TEST(TestSortArray, HandlesSortRightOrder) {
    Solution solution;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> res = solution.sortArray(vec);
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < res.size(); i++) {
        EXPECT_EQ(vec[i], res[i]);
    }
}

// Tests SortArray func with sorted array in another order.
TEST(TestSortArray, HandlesSortAnotherOrder) {
    Solution solution;
    std::vector<int> vec = {5, 4, 3, 2, 1};
    std::vector<int> res = solution.sortArray(vec);
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < res.size(); i++) {
        EXPECT_EQ(vec[i], res[i]);
    }
}
// Tests SortArray func with duplicate value in array.
TEST(TestSortArray, HandlesSortDup) {
    Solution solution;
    std::vector<int> vec = {5, 3, 3, 8, 10};
    std::vector<int> res = solution.sortArray(vec);
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < res.size(); i++) {
        EXPECT_EQ(vec[i], res[i]);
    }
}




