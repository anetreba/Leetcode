//
// Created by anetreba on 29.06.21.
//

#include "Solution.h"

int Solution::longestOnes(std::vector<int> &nums, int k) {
    int j = 0;
    int i = 0;
    int res = 0;

    while (i < nums.size()) {
        if (nums[i] == 0)
            k--;
        while (j <= i && k < 0) {
            if (nums[j] == 0)
                k++;
            j++;
        }
        i++;
        res = std::max(res, i - j);
    }
    return res;
}
