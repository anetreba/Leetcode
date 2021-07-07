//
// Created by anetreba on 07.07.21.
//

#include "Solution.h"

int main() {
    std::vector<std::vector<int>> mat = {{1,5,9},{10,11,13},{12,13,15}};
    Solution solution;
    std::cout << solution.kthSmallest(mat, 8) << std::endl;
    return 0;
}

