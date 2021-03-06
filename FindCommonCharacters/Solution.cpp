//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

std::vector<std::string> Solution::commonChars(std::vector <std::string> &A)  {
    if (!A.empty()) {
        std::vector <std::string> res;
        std::string append;
        int count = 1;
        int pos = -1;

        for (int j = 0; j < A[0].size(); j++) {
            count = 1;
            append = A[0][j];
            for (int i = 1; i < A.size(); i++) {
                if ((pos = A[i].find_first_of(append)) == -1)
                    break;
                else {
                    A[i].erase(pos, 1);
                    count++;
                }
            }
            if (count == A.size())
                res.push_back(append);
        }
        return res;
    }
    return A;
}
