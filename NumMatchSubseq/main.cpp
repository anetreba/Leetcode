//
// Created by anetreba on 22.06.21.
//

#include "Solution.h"

int main() {
    std::string s = "abcde";
    std::vector<std::string> words = {"a","bb","acd","ace"};
    Solution solution;
    std::cout << solution.numMatchingSubseq(s, words) << std::endl;

    std::string s1 = "dsahjpjauf";
    std::vector<std::string> words1 = {"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
    std::cout << solution.numMatchingSubseq(s1, words1) << std::endl;

}
