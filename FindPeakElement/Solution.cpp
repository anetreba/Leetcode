//
// Created by anetreba on 13.07.21.
//

#include "Solution.h"

int Solution::findPeakElement(std::vector<int> &nums) {
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = low + (high - low)/2;
        if ((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == n-1 || nums[mid + 1] < nums[mid]))
            return mid;
        if (mid > 0 && nums[mid - 1] >= nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
