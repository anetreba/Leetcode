//
// Created by s1000633 on 5/19/21.
//

#include "Solution.h"

int main() {
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    Solution n;
    n.reverseString(s);
    for (auto i : s)
        std::cout << i << " ";
    std::cout << std::endl;
}
