//
// Created by s1000633 on 5/19/21.
//

class Solution {
public:
    void heapify(vector<int>& nums, int size, int i) {
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
            swap(nums[i], nums[largest]);

            // Recursively heapify the affected sub-tree
            heapify(nums, size, largest);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        // Build heap (rearrange array)
        for (i = size - 1; i >= 0; i--)
            heapify(nums, size, i);

        // One by one extract an element from heap
        for (i = size - 1; i > 0; i--) {
            // Move current root to end
            swap(nums[0], nums[i]);
            // call max heapify on the reduced heap
            heapify(nums, i, 0);
        }
        return nums;
    }
};
