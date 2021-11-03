//
// Created by Anastasia Netreba on 03.11.2021.
//

#include "Solution.h"

//std::string Solution::addBinary(std::string a, std::string b) {
//    int i = a.size() - 1;
//    int j = b.size() - 1;
//    std::string res;
//    int tmp = 0;
//
//    while (i > -1 || j > -1) {
//        if ((i < 0 && b[j] == '1') || (j < 0 && a[i] == '1')
//            || (a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1')) {
//            if (tmp == 1)
//                res += "0";
//            else
//                res += "1";
//        }
//        else if (a[i] == '1' && b[j] == '1') {
//            if (tmp == 1)
//                res += "1";
//            else {
//                res += "0";
//                tmp = 1;
//            }
//        }
//        else if (a[i] == '0' && b[j] == '0') {
//            if (tmp == 1) {
//                tmp = 0;
//                res += "1";
//            }
//            else
//                res += "0";
//        }
//        i--;
//        j--;
//    }
//    if (tmp == 1)
//        res += "1";
//    std::reverse(res.begin(), res.end());
//    return res;
//}

std::string Solution::addBinary(std::string a, std::string b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    std::string res;
    int tmp = 0;
    int value1;
    int value2;
    int sum;

    while (i > -1 || j > -1) {
        value1 = (i > -1 && a[i] == '1') ? 1 : 0;
        value2 = (j > -1 && b[j] == '1') ? 1 : 0;

        sum = value1 + value2 + tmp;
        res += sum % 2 + '0';
        tmp = sum / 2;
        i--;
        j--;
    }
    res = (tmp == 1) ? res + "1" : res;
    std::reverse(res.begin(), res.end());
    return res;
}
