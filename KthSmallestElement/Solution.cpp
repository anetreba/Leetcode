//
// Created by anetreba on 07.07.21.
//

#include "Solution.h"

int Solution::kthSmallest(std::vector <std::vector<int>> &matrix, int k) {
    int size = matrix.size();
    if (matrix.empty() || k > size * size || k < 1)
        return 0;
    int low = matrix[0][0];
    int high = matrix[size - 1][size - 1];
    int mid;
    int c = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;
        c = 0;
        for (int i = 0; i < size; i++)
            c += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        if (k > c)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

