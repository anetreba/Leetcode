//
// Created by anetreba on 19.07.21.
//

#include "Solution.h"

int main() {
    std::vector<int> vec = {1,0,1,0,1};
    Solution solution;
    std::vector<int> res = solution.threeEqualParts(vec);

    for (auto &item : res)
        std::cout << item << " ";
    std::cout << std::endl;
}
