//
// Created by anetreba on 05.07.21.
//

#include "Solution.h"

std::vector<int> Solution::findClosestElements(std::vector<int> &arr, int k, int x) {
    if (arr.empty())
        return arr;
    auto end = std::lower_bound(arr.begin(), arr.end(), x);
    auto start = end - 1;

    while(k--) {
        if (end == arr.end() or (start >= arr.begin() and x - (*start) <= (*end) - x))
            start--;
        else
            end++;
    }
    std::vector<int> ans;

    for(auto i = start + 1; i != end; i++)
        ans.push_back(*i);
    return ans;
}
