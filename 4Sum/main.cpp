//
// Created by anetreba on 16.07.21.
//

#include "Solution.h"

int main() {
    std::vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    Solution solution;

    std::vector<std::vector<int>> res = solution.fourSum(nums, target);
    for (auto &elem : res) {
        for (auto &item : elem)
            std::cout << item << " ";
        std::cout << std::endl;
    }
    return 0;
}

