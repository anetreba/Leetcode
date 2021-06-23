//
// Created by anetreba on 30.06.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests MaxAreaOfIsland func with invalid args.
TEST(MaxAreaOfIsland, HandlesInvalidInput) {
    Solution solution;

    std::vector<std::vector<int>> grid;
    EXPECT_EQ(0, solution.maxAreaOfIsland(grid));
}

// Tests MaxAreaOfIsland func with right input.
TEST(MaxAreaOfIsland, HandlesRightInput) {
    Solution solution;

    std::vector<std::vector<int>> grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};

    EXPECT_EQ(6, solution.maxAreaOfIsland(grid));

    std::vector<std::vector<int>> grid1 = {{0,0,0,0,0,0,0,0}};
    EXPECT_EQ(0, solution.maxAreaOfIsland(grid1));
}
