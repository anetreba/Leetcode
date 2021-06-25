//
// Created by anetreba on 24.06.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>
#include <unordered_set>
#include <queue>
#include <iostream>

class Solution {
private:
    std::vector<std::string> neighbors(const std::string& code);
public:
    int openLock(std::vector<std::string>& deadends, std::string target);
};


#endif //LEETCODE_SOLUTION_H
