//
// Created by anetreba on 24.06.21.
//
#include "Solution.h"

int main() {
    std::string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
    Solution solution;
    std::cout << solution.isInterleave(s1, s2, s3) << std::endl;

    std::string s4 = "aabcc", s5 = "dbbca", s6 = "aadbbbaccc";
    std::cout << solution.isInterleave(s4, s5, s6) << std::endl;
}
