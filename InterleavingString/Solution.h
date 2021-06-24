//
// Created by anetreba on 24.06.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class Solution {
private:
    std::string a,b,c;
    int n,m;
    std::vector<std::vector<int>> dp;
    bool solve(int i, int j, int k);
public:
    bool isInterleave(std::string s1, std::string s2, std::string s3);
};


#endif //LEETCODE_SOLUTION_H
