//
// Created by anetreba on 05.07.21.
//

#include "Solution.h"

std::vector<std::vector<int>> Solution::matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
    if (mat.empty() || r < 0 || c < 0)
        return {};
    std::vector<std::vector<int>> res(r, std::vector<int>(c));
    int m = mat.size();
    int n = mat[0].size();
    int total = m * n;

    if (r * c != total || r == m)
        return mat;
    for (int i = 0; i < total; i++)
        res[i / c][i % c] = mat[i / n][i % n];
    return res;
}

