//
// Created by anetreba on 22.06.21.
//

#include "Solution.h"

int Solution::numMatchingSubseq(std::string s, std::vector <std::string> &words) {
    int count = 0;
    int res = 0;
    int found = -1;

    for (auto &word : words) {
        for (int i = 0; i < word.length(); i++) {
            found = s.find_first_of(word[i], found + 1);
            if (found != std::string::npos)
                count++;
            else
                found = 0;
        }
        if (count == word.length())
            res++;
        count = 0;
        found = -1;
    }
    return res;
}
