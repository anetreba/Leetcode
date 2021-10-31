//
// Created by anetreba on 21.07.21.
//

#include "Solution.h"

std::vector<int> Solution::make_push(std::string dominoes, char turn) {
    int i = 0;
    if (turn == 'L')
        i = dominoes.length() - 1;
    int l = 0;
    std::vector<int> push(dominoes.length());

    while (i < dominoes.length() && i > -1) {
        if (dominoes[i] == turn) {
            l = 1 ;
            push[i] = l;
        }
        else if (dominoes[i] == '.'  &&  l > 0) {
            l++;
            push[i] = l;
        }
        else
            l = 0;
        if (turn == 'R')
            i++;
        else
            i--;
    }
    return push;
}

std::string Solution::pushDominoes(std::string dominoes) {
    std::vector<int> ltr = make_push(dominoes, 'R');
    std::vector<int> rtl = make_push(dominoes, 'L');

    for (int i = 0; i < dominoes.length(); i++) {
        if (ltr[i] == rtl[i])
            continue;
        else if (ltr[i] < rtl[i]) {
            if (ltr[i] == 0)
                dominoes[i] = 'L';
            else
                dominoes[i] = 'R';
        }
        else {
            if (rtl[i] == 0)
                dominoes[i] = 'R';
            else
                dominoes[i] = 'L';
        }
    }
    return dominoes;
}

