//
// Created by anetreba on 24.06.21.
//

#include "Solution.h"

int Solution::maxArea(int h, int w, std::vector<int> &horizontalCuts, std::vector<int> &verticalCuts) {
    if (h < 0 || w < 0)
        return 0;
    int mod = std::pow(10, 9) + 7;

    std::sort(horizontalCuts.begin(), horizontalCuts.end());
    std::sort(verticalCuts.begin(), verticalCuts.end());
    int maxl = INT_MIN;
    int maxw = INT_MIN;

    long long res;

    for(int i = 0; i < horizontalCuts.size(); i++) {
        if(i == 0)
            maxl = std::max(maxl, horizontalCuts[i] - 0);
        if(i == horizontalCuts.size() - 1)
            maxl = std::max(maxl,h - horizontalCuts[i]);
        if(i > 0)
            maxl = std::max(maxl, horizontalCuts[i] - horizontalCuts[i - 1]);
    }
    for(int i = 0; i < verticalCuts.size(); i++) {
        if(i == 0)
            maxw = std::max(maxw, verticalCuts[i] - 0);
        if(i == verticalCuts.size() - 1)
            maxw = std::max(maxw, w - verticalCuts[i]);
        if(i > 0)
            maxw = std::max(maxw, verticalCuts[i] - verticalCuts[i - 1]);
    }
    res = (long(maxl) * long(maxw)) % mod;
    return res;
}
