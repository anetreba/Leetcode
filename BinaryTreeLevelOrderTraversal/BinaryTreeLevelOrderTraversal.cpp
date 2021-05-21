//
// Created by s1000633 on 5/19/21.
//

#include "Solution.h"

int main() {
    TreeNode* treeNode3 = new TreeNode(2);
    TreeNode* treeNode2 = new TreeNode(3);
    TreeNode* treeNode1 = new TreeNode(5, treeNode3, treeNode2);
    TreeNode* treeNode4 = new TreeNode(4);
    TreeNode* treeNode5 = new TreeNode(7);
    TreeNode* treeNode6 = new TreeNode(8, treeNode4, treeNode5);
    TreeNode* treeNode7 = new TreeNode(7, treeNode6, treeNode1);

    Solution s;
    std::vector<std::vector<int>> vec = s.levelOrder(treeNode7);


    for (auto &i : vec) {
         for (auto &j : i)
             std::cout << j << " ";
         std::cout << std::endl;
    }
    return 0;
}
