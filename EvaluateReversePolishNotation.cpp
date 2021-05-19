//
// Created by s1000633 on 5/19/21.
//

#include <locale>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    stack<int> res;
    int x;
    int y;
public:
    int evalRPN(vector <string> &tokens) {
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
};

