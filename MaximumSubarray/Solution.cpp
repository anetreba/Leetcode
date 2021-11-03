//
// Created by Anastasia Netreba on 01.11.2021.
//

#include "Solution.h"

int Solution::maxSubArray(std::vector<int> &nums) {
    if (!nums.empty()) {
        int max_sum = nums[0];
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            sum = std::max(nums[i], nums[i] + sum);
            max_sum = std::max(sum, max_sum);
        }
        return max_sum;
    }
    return 0;
}
