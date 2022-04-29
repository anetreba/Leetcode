//
// Created by anetreba on 27.04.22.
//

#include "Solution.h"

int main() {
	std::vector<int> num = {2,7,11,15};
	int target = 9;
	Solution solution;

	std::vector<int> res = solution.twoSum(num, target);
	std::cout << res[0] << " " << res[1] << std::endl;
}
