//
// Created by anetreba on 24.06.21.
//

#include "Solution.h"

int main() {
    Solution solution;
    std::vector<std::string> deadends = {"0201","0101","0102","1212","2002"};
    std::string target = "0202";
    std::cout << solution.openLock(deadends, target) << std::endl;
}

