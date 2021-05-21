//
// Created by s1000633 on 5/21/21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    void heapify(std::vector<int>& nums, int size, int i);

    std::vector<int> sortArray(std::vector<int>& nums);
};


#endif //LEETCODE_SOLUTION_H
