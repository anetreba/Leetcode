//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

int Solution::evalRPN(std::vector <std::string> &tokens) {
    for (auto &elem : tokens) {
        if (elem == "*") {
            x = res.top();
            res.pop();
            y = res.top();
            res.pop();
            res.push(x * y);
        }
        else if (elem == "/") {
            x = res.top();
            res.pop();
            y = res.top();
            res.pop();
            res.push(y / x);
        }
        else if (elem == "+") {
            x = res.top();
            res.pop();
            y = res.top();
            res.pop();
            res.push(x + y);
        }
        else if (elem == "-") {
            x = res.top();
            res.pop();
            y = res.top();
            res.pop();
            res.push(y - x);
        }
        else {
            res.push(stoi(elem));
        }
    }
    return res.top();
}
