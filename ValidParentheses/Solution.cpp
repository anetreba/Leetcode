//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

bool Solution::isValid(std::string s) {
    if (s.empty())
        return false;
    std::stack<char> stack;

    for (auto ch: s) {
        if (ch == '(' || ch == '{' || ch == '[')
            stack.push(ch);
        else {
            if (stack.empty())
                return false;
            if (ch == ')' && stack.top() != '(')
                return false;
            if (ch == '}' && stack.top() != '{')
                return false;
            if (ch == ']' && stack.top() != '[')
                return false;
            stack.pop();
        }
    }
    return stack.empty();
}
