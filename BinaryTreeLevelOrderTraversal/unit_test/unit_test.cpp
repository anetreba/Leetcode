//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../Solution.h"


// Tests binaryTreeLevelOrderTraversal func with empty arg.
TEST(TestBinaryTreeLevelOrderTraversal, HandlesEmptyInput) {
    Solution solution;
    TreeNode *no_node = nullptr;
    std::vector<std::vector<int>> res = solution.levelOrder(no_node);
    std::vector<std::vector<int>> res_expect;

    ASSERT_EQ(res_expect, res);
}

// Tests binaryTreeLevelOrderTraversal func with one node.
TEST(TestBinaryTreeLevelOrderTraversal, HandlesOneNodeInput) {
    Solution solution;
    TreeNode *one_node = new TreeNode(1);
    std::vector<std::vector<int>> res = solution.levelOrder(one_node);
    std::vector<std::vector<int>> res_expect = {{1}};

    ASSERT_EQ(res_expect, res);
}

// Tests binaryTreeLevelOrderTraversal func with right arg.
TEST(TestReversePolishNotation, HandlesRightIput) {
    Solution solution;
    TreeNode* treeNode3 = new TreeNode(2);
    TreeNode* treeNode2 = new TreeNode(3);
    TreeNode* treeNode1 = new TreeNode(5, treeNode3, treeNode2);
    TreeNode* treeNode4 = new TreeNode(4);
    TreeNode* treeNode5 = new TreeNode(7);
    TreeNode* treeNode6 = new TreeNode(8, treeNode4, treeNode5);
    TreeNode* treeNode7 = new TreeNode(7, treeNode6, treeNode1);
    std::vector<std::vector<int>> res = solution.levelOrder(treeNode7);
    std::vector<std::vector<int>> res_expect = {{7}, {8, 5}, {4, 7, 2, 3}};

    EXPECT_EQ(res_expect, res);
}
