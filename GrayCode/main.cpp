#include "Solution.h"

int main() {
    int n = 3;
    Solution solution;
    std::vector<int> vec = solution.grayCode(n);
    for (auto &item : vec)
        std::cout << item << " ";
    std::cout << std::endl;
    return 0;
}
