//
// Created by s1000633 on 5/19/21.
//

#include <vector>

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int len = size / 2;
        size--;

        for (int i = 0; i < len; i++) {
            swap(s[i], s[size - i]);
        }
    }
};

