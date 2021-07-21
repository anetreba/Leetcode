//
// Created by anetreba on 20.07.21.
//

#include "Solution.h"

int main() {
    std::vector<int> nums = {1, 2, 3};
    Solution solution(nums);
    srand(time(nullptr));
    std::vector<int> res = solution.shuffle();
    for (auto &item : res)
        std::cout << item << " ";
    std::cout << std::endl;
    std::vector<int> reset = solution.reset();
    for (auto &item : reset) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    return 0;
}
