//
// Created by anetreba on 25.06.21.
//

#include "Solution.h"

UnionFindSet::UnionFindSet(int n) {
    ranks_ = std::vector<int>(n + 1, 0);
    parents_ = std::vector<int>(n + 1, 0);
    for (int i = 0; i < parents_.size(); ++i)
        parents_[i] = i;
}

bool UnionFindSet::Union(int u, int v) {
    int pu = Find(u);
    int pv = Find(v);
    if (pu == pv) return false;

    // Merge low rank tree into high rank tree
    if (ranks_[pv] > ranks_[pu])
        parents_[pu] = pv;
    else if (ranks_[pu] > ranks_[pv])
        parents_[pv] = pu;
    else {
        parents_[pv] = pu;
        ranks_[pv] += 1;
    }

    return true;
}

int UnionFindSet::Find(int u) {
    // Compress the path during traversal
    if (u != parents_[u])
        parents_[u] = Find(parents_[u]);
    return parents_[u];
}

std::vector<int> Solution::findRedundantConnection(std::vector<std::vector<int>> &edges) {
    UnionFindSet s(edges.size());

    for(const auto& edge: edges)
        if (!s.Union(edge[0], edge[1]))
            return edge;

    return {};
}
