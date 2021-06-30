//
// Created by anetreba on 30.06.21.
//


#include "gtest/gtest.h"
#include "../Solution.h"

// Tests LCA func with invalid args.
TEST(LCA, HandlesInvalidInput) {
    Solution solution;
    TreeNode *node = nullptr;
    TreeNode *p = nullptr;
    TreeNode *q = nullptr;
    EXPECT_EQ(node, solution.lowestCommonAncestor(node, p, q));
}

// Tests LCA func with right input.
TEST(LCA, HandlesRightIput) {
    Solution solution;

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

    TreeNode *res = solution.lowestCommonAncestor(node, p, q);
    q->val = 4;

    TreeNode *res1 = solution.lowestCommonAncestor(node, p, q);

    ASSERT_EQ(5, res1->val);
}
