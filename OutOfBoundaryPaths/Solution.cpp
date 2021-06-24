//
// Created by anetreba on 24.06.21.
//

#include "Solution.h"

int Solution::getPosition(int n, int startRow, int startColumn) {
    return n * startRow + startColumn;
}

int Solution::finder(int m, int n, int maxMove, int startRow, int startColumn, map<pair<int, int>, int> &cache) {
    if (startRow < 0 || startRow >= m || startColumn < 0 || startColumn >= n)
        return 1;
    int position = getPosition(n, startRow, startColumn);
    if (cache.count({position, maxMove}) > 0)
        return cache[{position, maxMove}];
    if (maxMove == 0)
        return 0;
    int ret = 0;
    for (int i = 0; i < 4; i++) {
        ret = (ret + finder(m, n, maxMove - 1, startRow + directions[i][0], startColumn + directions[i][1], cache)) % MOD;
    }

    cache[{position, maxMove}] = ret;
    return ret;

}

int Solution::findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    if (maxMove == 0 || startColumn < 0 || startRow < 0 || m < 0 || n < 0)
        return 0;
    map<pair<int, int>, int> cache;
    return finder(m, n, maxMove, startRow, startColumn, cache);
}
