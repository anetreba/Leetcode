//
// Created by anetreba on 16.07.21.
//

#include "Solution.h"

std::vector<std::vector<int>> Solution::fourSum(std::vector<int> &nums, int target) {
    std::sort(nums.begin(), nums.end());
    int start = 0;
    int end = 0;
    int sum = 0;
    std::vector<std::vector<int>> res;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            start = j + 1;
            end = nums.size() - 1;
            sum = target - nums[i] - nums[j];
            while (start < end) {
                if (nums[start] + nums[end] == sum) {
                    res.push_back({nums[i], nums[j], nums[start], nums[end]});

                    start++;
                    end--;
                    while (start < end && nums[start] == nums[start - 1])
                        start++;
                    while (start < end && nums[end] == nums[end + 1])
                        end--;
                }
                else if (nums[start] + nums[end] > sum)
                    end--;
                else
                    start++;
            }
            while (j + 1 < nums.size() && nums[j + 1] == nums[j])
                j++;
        }
        while (i + 1 < nums.size() && nums[i + 1] == nums[i])
            i++;
    }
    return res;
}

