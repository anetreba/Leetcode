//
// Created by anetreba on 23.07.21.
//

#include "Solution.h"

int main() {
    TreeNode* treeNode2 = new TreeNode;
    TreeNode* treeNode3 = new TreeNode(1);
    TreeNode* treeNode1 = new TreeNode(0, treeNode2, treeNode3);
    TreeNode* treeNode = new TreeNode(1, NULL, treeNode1);
    Solution solution;

    std::vector<std::vector<int>> vec = solution.levelOrder(treeNode);

    std::cout << "******************************\n";
    for (auto &i : vec) {
        for (auto &j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "******************************\n";

    TreeNode* res = solution.pruneTree(treeNode);
    std::vector<std::vector<int>> res_vec = solution.levelOrder(res);

    std::cout << "******************************\n";
    for (auto &i : res_vec) {
        for (auto &j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "******************************\n";
    return 0;
}
