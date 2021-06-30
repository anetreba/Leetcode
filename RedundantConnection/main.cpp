//
// Created by anetreba on 25.06.21.
//

#include "Solution.h"

int main() {
    std::vector<std::vector<int>> edges = {{1,2},{1,3},{2,3}};
    Solution solution;
    std::vector<int> res = solution.findRedundantConnection(edges);
    for (auto &i : res)
        std::cout << i << " ";
}