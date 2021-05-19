//
// Created by s1000633 on 5/19/21.
//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
private:
    vector<vector<int>> result;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return result;
        TreeNode* tmp;
        queue<TreeNode*> q;
        vector<int> level_of_tree;
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
};
