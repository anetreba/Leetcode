//
// Created by anetreba on 23.07.21.
//

#include "Solution.h"

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

TreeNode * Solution::pruneTree(TreeNode *root) {
    if (root == NULL)
        return NULL;
    TreeNode* left = pruneTree(root->left);
    root->left = left;
    TreeNode* right = pruneTree(root->right);
    root->right = right;
    if (root->val == 0 && root->left == NULL && root->right == NULL)
        return NULL;
    return root;
}

