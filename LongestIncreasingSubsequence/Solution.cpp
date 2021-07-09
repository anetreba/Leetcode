//
// Created by anetreba on 09.07.21.
//

#include "Solution.h"

int Solution::lengthOfLIS(std::vector<int> &nums) {
    if (nums.size() == 0)
        return 0;
    std::vector<int> tmp(nums.size(), 1);
    int max = 1;

    for (int i = 1; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                tmp[i] = std::max(tmp[i], tmp[j] + 1);
            }
        }
        max = std::max(max,tmp[i]);
    }
    return max;
}
