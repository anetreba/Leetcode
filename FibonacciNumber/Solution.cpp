//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

int Solution::fib(int n) {
    if (n < 2)
        return n;
    int n1 = 0;
    int n2 = 1;
    int n0 = 0;

    for (int i = 2; i < n; i++) {
        n0 = n1 + n2;
        n1 = n2;
        n2 = n0;
    }
    return n1 + n2;
}
