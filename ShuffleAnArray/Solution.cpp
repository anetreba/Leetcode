//
// Created by anetreba on 20.07.21.
//

#include "Solution.h"

Solution::Solution(std::vector<int> &nums) {
    _store = nums;
    _shuffle = nums;
}

std::vector<int> Solution::reset() {
    _shuffle = _store;
    return _shuffle;
}

std::vector<int> Solution::shuffle() {
    int j = 0;

    for (int i = _shuffle.size() - 1; i > -1; i--) {
        j = rand() % (i + 1);
        std::swap(_shuffle[i], _shuffle[j]);
    }
    return _shuffle;
}
