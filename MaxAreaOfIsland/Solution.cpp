//
// Created by anetreba on 22.06.21.
//

#include "Solution.h"

int Solution::area(int r, int c, std::vector<std::vector<bool>>& seen) {
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() ||
        seen[r][c] || grid[r][c] == 0)
        return 0;
    seen[r][c] = true;
    return (1 + area(r + 1, c, seen) + area(r - 1, c, seen)
            + area(r, c - 1, seen) + area(r, c + 1, seen));
}


int Solution::maxAreaOfIsland(std::vector <std::vector<int>> &grid) {
    if (grid.empty())
        return 0;
    this->grid = grid;
    std::vector<std::vector<bool>> seen(grid.size(), std::vector<bool>(grid[0].size()));
    int ans = 0;

    for (int r = 0; r < grid.size(); r++) {
        for (int c = 0; c < grid[0].size(); c++) {
            ans = std::max(ans, area(r, c, seen));
        }
    }
    return ans;
}
