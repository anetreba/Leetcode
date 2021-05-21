//
// Created by s1000633 on 5/19/21.
//

#include "Solution.h"

int main() {
    std::vector <int> num = {5, 7, 3, 10, 17, 1, 345, 65, 1,7};

    Solution s;
    s.sortArray(num);

    for (auto i : num)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}
