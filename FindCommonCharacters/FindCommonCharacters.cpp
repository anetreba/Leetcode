//
// Created by s1000633 on 5/19/21.
//
#include "Solution.h"

int main() {
    std::vector<std::string> vec = {"cool","lock","cook"};
    Solution s;
    std::vector<std::string> res = s.commonChars(vec);

    for (auto i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
