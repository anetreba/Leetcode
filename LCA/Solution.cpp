//
// Created by anetreba on 30.06.21.
//

#include "Solution.h"

TreeNode * Solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root == nullptr)
        return nullptr;
    if (root->val == p->val || root->val == q->val)
        return root;
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);

    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}

std::vector<std::vector<int>> Solution::levelOrder(TreeNode *root) {
    std::vector<std::vector<int>> result;
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

