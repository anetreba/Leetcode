//
// Created by s1000633 on 5/21/21.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <locale>
#include <iostream>
#include <vector>
#include <stack>

class Solution {
private:
    std::stack<int> res;
    int x;
    int y;
public:
    bool is_number(std::string &number);
    int evalRPN(std::vector <std::string> &tokens);
};



#endif //LEETCODE_SOLUTION_H
