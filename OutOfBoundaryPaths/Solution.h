//
// Created by anetreba on 24.06.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;

class Solution {
private:
    int directions[4][2] = {
            {1,  0},
            {-1, 0},
            {0,  1},
            {0,  -1}
    };

    int MOD = 1e9 + 7;

    int finder(int m, int n, int maxMove, int startRow, int startColumn, map<pair<int, int>, int> &cache);

    int getPosition(int n, int startRow, int startColumn);

public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn);
};

#endif //LEETCODE_SOLUTION_H
