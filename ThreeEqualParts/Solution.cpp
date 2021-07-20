//
// Created by anetreba on 19.07.21.
//

#include "Solution.h"

std::vector<int> Solution::threeEqualParts(std::vector<int> &arr) {
    if (arr.empty())
        return {-1, -1};
    std::vector<int> vi;

    for (int i = 0; i < arr.size(); ++i)
        if (arr[i] == 1)
            vi.push_back(i);
    if (vi.size() == 0)
        return {0, 2};
    if (vi.size() % 3 != 0)
        return {-1, -1};
    int len = arr.size() - vi[vi.size() / 3 * 2];
    int a = vi[0];
    int b = vi[vi.size() / 3];
    int c = vi[vi.size() / 3 * 2];

    for (int i = 0; i < len; ++i)
        if (arr[a + i] != arr[b + i] || arr[a + i] != arr[c + i])
            return {-1, -1};
    return {a + len - 1, b + len};
}
