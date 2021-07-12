//
// Created by anetreba on 12.07.21.
//

#include "Solution.h"

bool Solution::isIsomorphic(std::string s, std::string t) {
    if (s.length() != t.length())
        return false;
    std::unordered_map<char, char> elem_map;
    std::unordered_set<char> seen;

    for (int i = 0; i < s.length(); i++) {
        if (elem_map.find(s[i]) != elem_map.end()) {
            if (elem_map[s[i]] != t[i])
                return false;
        }
        else {
            if (seen.find(t[i]) != seen.end())
                return false;
            elem_map[s[i]] = t[i];
            seen.insert(t[i]);
        }
    }
    return true;
}

