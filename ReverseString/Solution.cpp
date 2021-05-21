//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

void Solution::reverseString(std::vector<char> &s) {
    int size = s.size();
    int len = size / 2;
    size--;

    for (int i = 0; i < len; i++) {
        std::swap(s[i], s[size - i]);
    }
}
