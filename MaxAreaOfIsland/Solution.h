//
// Created by anetreba on 22.06.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <array>

class Solution {
private:
    std::vector<std::vector<int>> grid;
    int area(int r, int c, std::vector<std::vector<bool>>& seen);
public:
    int maxAreaOfIsland(std::vector<std::vector<int>>& grid);
};


#endif //LEETCODE_SOLUTION_H
