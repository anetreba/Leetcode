//
// Created by Anastasia Netreba on 31.10.2021.
//

#include "Solution.h"

int main() {
    Solution s;
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);

    int target = 2;
    std::cout << s.searchInsert(nums, target) << std::endl;
    return 0;
}

