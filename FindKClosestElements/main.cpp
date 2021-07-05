#include "Solution.h"

int main() {
    std::vector<int> vec = {1,2,3,4,5};

    Solution solution;

    std::vector<int> res = solution.findClosestElements(vec, 4, -1);
    for (auto &i : res)
        std::cout << i << " ";
    std::cout << std::endl;
}
