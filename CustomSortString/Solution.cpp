//
// Created by anetreba on 14.07.21.
//

#include "Solution.h"

std::string Solution::customSortString(std::string order, std::string str) {
    std::unordered_map<char,int> map;
    std::string res;

    for (const auto &i: str)
        map[i]++;
    for (const auto &i : order) {
        res += std::string(map[i], i);
        map[i] = 0;
    }
    for (const auto &i : map)
        res += std::string(i.second, i.first);
    return res;
}
