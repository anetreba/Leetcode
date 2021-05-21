//
// Created by s1000633 on 5/21/21.
//

#include "Solution.h"

void Solution::heapify(std::vector<int> &nums, int size, int i) {
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i; // right = 2*i

    // If left child is larger than root
    if (l < size && nums[l] > nums[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < size && nums[r] > nums[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        std::swap(nums[i], nums[largest]);

        // Recursively heapify the affected sub-tree
        heapify(nums, size, largest);
    }
}

std::vector<int> Solution::sortArray(std::vector<int> &nums) {
    int size = nums.size();
    int i = 0;
    // Build heap (rearrange array)
    for (i = size - 1; i >= 0; i--)
        heapify(nums, size, i);

    // One by one extract an element from heap
    for (i = size - 1; i > 0; i--) {
        // Move current root to end
        std::swap(nums[0], nums[i]);
        // call max heapify on the reduced heap
        heapify(nums, i, 0);
    }
    return nums;
}
