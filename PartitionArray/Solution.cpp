//
// Created by anetreba on 23.07.21.
//

#include "Solution.h"

int Solution::partitionDisjoint(std::vector<int> &nums) {
    int size = nums.size();
    if (size == 0)
        return 0;
    std::vector<int> max_left(size);
    std::vector<int> min_right(size);

    int m = nums[0];
    for (int i = 0; i < size; i++) {
        m = std::max(m, nums[i]);
        max_left[i] = m;
    }
    m = nums[size - 1];
    for (int i = size - 1; i > -1; i--) {
        m = std::min(m, nums[i]);
        min_right[i] = m;
    }
    for (int i = 1; i < size; i++) {
        if (max_left[i - 1] <= min_right[i])
            return i;
    }
    return 0;
}

