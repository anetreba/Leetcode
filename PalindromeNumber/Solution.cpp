//
// Created by anetreba on 27.04.22.
//

#include "Solution.h"

bool Solution::isPalindrome(int x) {
	if (x < 0)
		return false;
	long int res = 0;
	int num = x;

	while (num != 0) {
		res = res * 10 + num % 10;
		num /= 10;
    }

    return (res == x);
}
