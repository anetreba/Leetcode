//
// Created by anetreba on 24.06.21.
//

#include "Solution.h"

std::vector<std::string> Solution::neighbors(const std::string &code) {
    std::vector<std::string> result;
    std::string nei;
    for (int i = 0; i < 4; i++) {
        for (int diff = -1; diff <= 1; diff += 2) {
            nei = code;
            nei[i] = (nei[i] - '0' + diff + 10) % 10 + '0';
            result.push_back(nei);
            nei.clear();
        }
    }
    return result;
}

int Solution::openLock(std::vector<std::string> &deadends, std::string target) {
    std::unordered_set<std::string> deadSet(deadends.begin(), deadends.end());
    if (deadSet.count("0000"))
        return -1;
    std::queue<std::string> q({"0000"});
    std::string curr;

    for (int steps = 0; !q.empty(); ++steps) {
        for (int i = q.size(); i > 0; --i) {
            curr = q.front();
            q.pop();
            if (curr == target)
                return steps;
            for (auto nei : neighbors(curr)) {
                if (deadSet.count(nei))
                    continue;
                deadSet.insert(nei); // Marked as visited
                q.push(nei);
            }
            curr.empty();
        }
    }
    return -1;
}
