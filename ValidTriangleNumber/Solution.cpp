//
// Created by anetreba on 15.07.21.
//

#include "Solution.h"

int Solution::triangleNumber(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int start = 0;
    int end = 0;
    int count = 0;

    for (int i = nums.size() - 1; i > 1; i--) {
        start = 0;
        end = i - 1;
        while (start < end) {
            if (nums[i] < nums[start] + nums[end]) {
                count += end-start;
                end--;
            }
            else
                start++;
        }
    }
    return count;
}

