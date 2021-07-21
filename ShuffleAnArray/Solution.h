//
// Created by anetreba on 20.07.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <cstdlib>
#include <utility>
#include <iostream>

class Solution {
private:
    std::vector<int> _store;
    std::vector<int> _shuffle;
public:
    Solution(std::vector<int>& nums);

    /** Resets the array to its original configuration and return it. */
    std::vector<int> reset();

    /** Returns a random shuffling of the array. */
    std::vector<int> shuffle();
};


#endif //LEETCODE_SOLUTION_H
