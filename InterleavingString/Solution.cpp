//
// Created by anetreba on 24.06.21.
//

#include "Solution.h"

bool Solution::solve(int i, int j, int k) {
    if(i == n && j == m)
        return true;

    if(dp[i][j] != -1)
        return dp[i][j];

    if(a[i] == c[k] || b[j] == c[k])
    {
        bool b1 = false, b2 = false;
        if(a[i] == c[k])
            b1 = solve(i + 1, j, k + 1);

        if(b[j] == c[k])
            b2 = solve(i, j + 1, k + 1);

        return dp[i][j] = b1 || b2;
    }

    else
        return dp[i][j] = false;
}

bool Solution::isInterleave(std::string s1, std::string s2, std::string s3) {
    a = s1, b = s2, c = s3;
    n = s1.length();
    m = s2.length();
    dp.assign(n + 1, std::vector<int> (m + 1, -1));
    if(n + m != s3.length())
        return false;
    return solve(0,0,0);
}
