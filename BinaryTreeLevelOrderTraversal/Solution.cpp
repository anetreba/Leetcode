//
// Created by s1000633 on 5/20/21.
//

#include "Solution.h"

std::vector<std::vector<int>> Solution::levelOrder(TreeNode *root) {
    if (root == nullptr)
        return result;
    TreeNode* tmp;
    std::queue<TreeNode*> q;
    std::vector<int> level_of_tree;
    int size = 0;

    q.push(root);
    while (!q.empty()) {
        size = q.size();
        for (int i = 0; i < size; i++) {
            tmp = q.front();
            level_of_tree.push_back(tmp->val);
            q.pop();
            if (tmp->left)
                q.push(tmp->left);
            if (tmp->right)
                q.push(tmp->right);
        }
        result.push_back(level_of_tree);
        level_of_tree.clear();
    }
    return result;
}
