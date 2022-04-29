//
// Created by anetreba on 27.04.22.
//

#include "Solution.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
	std::vector<int> res;
	int find = 0;

	for (int i = 0; i < nums.size(); i++) {
		find = target - nums[i];
		for (int j = i + 1; j < nums.size(); j++) {
			if (find == nums[j]) {
				res = {i, j};
				return res;
			}
		}
	}
	return res;
}
