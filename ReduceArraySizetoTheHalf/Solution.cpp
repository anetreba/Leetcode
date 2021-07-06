//
// Created by anetreba on 06.07.21.
//

#include "Solution.h"

int Solution::minSetSize(std::vector<int> &arr) {
    if (arr.empty())
        return 0;
    int max = 0;

    for(int i = 0; i < arr.size(); i++)
        max = std::max(max, arr[i]);
    std::vector<int> count(max + 1,0);

    for(int i = 0;i < arr.size(); i++)
        count[arr[i]]++;

    std::priority_queue<int> pq;

    for(int i = 0;i < count.size(); i++)
        pq.push(count[i]);
    int n = (arr.size() + 1) / 2;
    int sum = 0;
    int c = 0;

    while (sum < n){
        sum += pq.top();
        pq.pop();
        c++;
    }
    return c;
}
