//
// Created by Anastasia Netreba on 31.10.2021.
//

#include "Solution.h"

int Solution::searchInsert(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();
    int mid = 0;

    while (left < right) {
        mid = (right - left) / 2 + left;
        if (target > nums[mid])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}
