//
// Created by s1000633 on 5/19/21.
//
#include "Solution.h"

int main() {
    std::vector<std::string> tokens = {"2", "3", "*", "4", "5", "*", "+"};

    Solution solution;
    int res = solution.evalRPN(tokens);

    std::cout << res << std::endl;

    return 0;
}
