//
// Created by anetreba on 29.06.21.
//

#include "Solution.h"

int main() {
    std::vector<int> vec = {1,1,1,0,0,0,1,1,1,1,0};
    Solution solution;

    std::cout << solution.longestOnes(vec, 2) << std::endl;
    return 0;
}
