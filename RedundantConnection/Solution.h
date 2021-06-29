//
// Created by anetreba on 25.06.21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <iostream>

class UnionFindSet {
private:
    std::vector<int> parents_;
    std::vector<int> ranks_;
public:

    UnionFindSet(int n);

    // Merge sets that contains u and v.
    // Return true if merged, false if u and v are already in one set.
    bool Union(int u, int v);
    // Get the root of u.
    int Find(int u);
};

class Solution {
public:
    std::vector<int> findRedundantConnection(std::vector<std::vector<int>>& edges);
};


#endif //LEETCODE_SOLUTION_H
