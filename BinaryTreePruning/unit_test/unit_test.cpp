//
// Created by anetreba on 23.07.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"


// Tests BinaryTreePruning func with empty arg.
TEST(BinaryTreePruning, HandlesEmptyInput) {
    Solution solution;
    TreeNode *no_node = nullptr;
    TreeNode *res = solution.pruneTree(no_node);

    ASSERT_EQ(no_node, res);
}

// Tests BinaryTreePruning func with one node.
TEST(BinaryTreePruning, HandlesOneNodeInput) {
    Solution solution;
    TreeNode *one_node = new TreeNode(1);
    TreeNode *res = solution.pruneTree(one_node);

    ASSERT_EQ(one_node, res);
}

// Tests BinaryTreePruning func with right arg.
TEST(BinaryTreePruning, HandlesRightIput) {
    TreeNode* treeNode2 = new TreeNode;
    TreeNode* treeNode3 = new TreeNode(1);
    TreeNode* treeNode1 = new TreeNode(0, treeNode2, treeNode3);
    TreeNode* treeNode = new TreeNode(1, NULL, treeNode1);
    Solution solution;

    std::vector<std::vector<int>> res_expect = {{1},{0},{1}};

    TreeNode* res = solution.pruneTree(treeNode);
    std::vector<std::vector<int>> res_vec = solution.levelOrder(res);

    EXPECT_EQ(res_expect, res_vec);

    TreeNode* Node2 = new TreeNode;
    TreeNode* Node3 = new TreeNode(1);
    TreeNode* Node1 = new TreeNode(1, Node2, Node3);
    TreeNode* Node6 = new TreeNode;
    TreeNode* Node7 = new TreeNode;
    TreeNode* Node5 = new TreeNode(0, Node6, Node7);
    TreeNode* Node = new TreeNode(1, Node5, Node1);

    std::vector<std::vector<int>> res_expect1 = {{1},{1},{1}};

    TreeNode* res1 = solution.pruneTree(Node);
    std::vector<std::vector<int>> res_vec1 = solution.levelOrder(res1);

    EXPECT_EQ(res_expect1, res_vec1);
    TreeNode* bitreeNode2 = new TreeNode;
    TreeNode* bitreeNode3 = new TreeNode(1);
    TreeNode* bitreeNode1 = new TreeNode(1, bitreeNode2, bitreeNode3);
    TreeNode* bitreeNode8 = new TreeNode(0);
    TreeNode* bitreeNode6 = new TreeNode(1, bitreeNode8, nullptr);
    TreeNode* bitreeNode7 = new TreeNode(1);
    TreeNode* bitreeNode5 = new TreeNode(1, bitreeNode6, bitreeNode7);
    TreeNode* bitreeNode = new TreeNode(1, bitreeNode5, bitreeNode1);

    std::vector<std::vector<int>> res_expect2 = {{1},{1, 1},{1, 1, 1}};

    TreeNode* res2 = solution.pruneTree(bitreeNode);
    std::vector<std::vector<int>> res_vec2 = solution.levelOrder(res2);

    EXPECT_EQ(res_expect2, res_vec2);
}
