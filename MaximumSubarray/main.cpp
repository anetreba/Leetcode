//
// Created by Anastasia Netreba on 01.11.2021.
//

#include "Solution.h"

int main() {
    std::vector<int> nums;
    nums.push_back(-2);
    nums.push_back(1);
    nums.push_back(-3);
    nums.push_back(4);
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(4);
    Solution solution;
    std::cout << solution.maxSubArray(nums) << std::endl;
}