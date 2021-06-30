//
// Created by anetreba on 30.06.21.
//

#include "Solution.h"

int main() {
    TreeNode *node = new TreeNode(3);
    TreeNode *node1 = new TreeNode(5);
    TreeNode *node2 = new TreeNode(1);
    TreeNode *node3 = new TreeNode(6);
    TreeNode *node4 = new TreeNode(2);
    TreeNode *node5 = new TreeNode(7);
    TreeNode *node6 = new TreeNode(4);
    TreeNode *node7 = new TreeNode(0);
    TreeNode *node8 = new TreeNode(8);
    node->left = node1;
    node->right = node2;
    node1->left = node3;
    node1->right = node4;
    node4->left = node5;
    node4->right = node6;
    node2->left = node7;
    node2->right = node8;

    TreeNode *p = new TreeNode(5);
    TreeNode *q = new TreeNode(1);

    Solution solution;
    std::vector<std::vector<int>> vec1 = solution.levelOrder(node);

    for (auto &i : vec1) {
        for (auto &j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    TreeNode *res = solution.lowestCommonAncestor(node, p, q);

    std::vector<std::vector<int>> vec = solution.levelOrder(res);


    for (auto &i : vec) {
        for (auto &j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;



}
