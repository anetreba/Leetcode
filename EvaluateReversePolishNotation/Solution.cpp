//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

bool Solution::is_number(std::string &number) {
    for (auto &i : number) {
        if (!(std::isdigit(i)))
            return false;
    }
    return true;
}

int Solution::evalRPN(std::vector <std::string> &tokens) {
    if (tokens.empty())
        return 0;
    for (auto &elem : tokens) {
        if (elem == "*") {
            if (res.empty())
                return 0;
            x = res.top();
            res.pop();
            if (res.empty())
                return 0;
            y = res.top();
            res.pop();
            res.push(x * y);
        }
        else if (elem == "/") {
            if (res.empty())
                return 0;
            x = res.top();
            if (x == 0)
                return 0;
            res.pop();
            if (res.empty())
                return 0;
            y = res.top();
            res.pop();
            res.push(y / x);
        }
        else if (elem == "+") {
            if (res.empty())
                return 0;
            x = res.top();
            res.pop();
            if (res.empty())
                return 0;
            y = res.top();
            res.pop();
            res.push(x + y);
        }
        else if (elem == "-") {
            if (res.empty())
                return 0;
            x = res.top();
            res.pop();
            if (res.empty())
                return 0;
            y = res.top();
            res.pop();
            res.push(y - x);
        }
        else if (is_number(elem)) {
            res.push(stoi(elem));
        }
        else
            return 0;
    }
    return res.top();
}
