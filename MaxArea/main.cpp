//
// Created by anetreba on 24.06.21.
//
#include "Solution.h"

int main() {
    int h = 5;
    int w = 4;
    std::vector<int> horizontalCuts = {1, 2, 4};
    std::vector<int> verticalCuts = {1, 3};
    Solution solution;
    std::cout << solution.maxArea(h, w, horizontalCuts, verticalCuts) << std::endl;
}
