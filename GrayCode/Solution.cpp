//
// Created by anetreba on 05.07.21.
//

#include "Solution.h"

std::vector<int> Solution::grayCode(int n) {
    std::vector<int> ans;

    for (int i = 0; i < (1 << n); ++i) {
        ans.push_back((i >> 1) ^ i);
    }
    return ans;
}
