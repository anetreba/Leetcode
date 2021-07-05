//
// Created by anetreba on 05.07.21.
//

#include "Solution.h"

int main() {
    std::vector<std::vector<int>> mat = {{1,2},{3,4}};
    Solution solution;

    std::vector<std::vector<int>> res = solution.matrixReshape(mat, 1, 4);

    for (auto &item : res) {
        for (auto &i : item) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
