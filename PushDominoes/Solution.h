//
// Created by anetreba on 21.07.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class Solution {
private:
    std::vector<int> make_push(std::string dominoes, char turn);
public:
    std::string pushDominoes(std::string dominoes);
};


#endif //LEETCODE_SOLUTION_H
