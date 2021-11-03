//
// Created by Anastasia Netreba on 03.11.2021.
//

#include "Solution.h"

int main() {
    std::string a = "0111";
    std::string b = "1110";
    Solution s;
    std::string res = s.addBinary(a, b);
    std::cout << res << std::endl;
    return 0;
}
