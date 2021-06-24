//
// Created by anetreba on 30.06.21.
//

#include "gtest/gtest.h"
#include "../Solution.h"

// Tests ReverseLinkedList func with invalid args.
TEST(ReverseLinkedList, HandlesInvalidInput) {
    Solution solution;

    ListNode *node = nullptr;
    EXPECT_EQ(node, solution.reverseBetween(node, -1, -1));
}

// Tests ReverseLinkedList func with right input.
TEST(ReverseLinkedList, HandlesRightIput) {
    Solution solution;

    ListNode *listNode = new ListNode(7);
    ListNode *listNode1 = new ListNode(6, listNode);
    ListNode *listNode2 = new ListNode(5, listNode1);
    ListNode *listNode3 = new ListNode(4, listNode2);
    ListNode *listNode4 = new ListNode(3, listNode3);
    ListNode *listNode5 = new ListNode(2, listNode4);
    ListNode *listNode6 = new ListNode(1, listNode5);

    ListNode *Node = new ListNode(7);
    ListNode *Node1 = new ListNode(6, Node);
    ListNode *Node2 = new ListNode(2, Node1);
    ListNode *Node3 = new ListNode(3, Node2);
    ListNode *Node4 = new ListNode(4, Node3);
    ListNode *Node5 = new ListNode(5, Node4);
    ListNode *Node6 = new ListNode(1, Node5);

    ListNode *res = solution.reverseBetween(listNode6, 2, 5);

    while (res) {
        ASSERT_EQ(Node6->val, res->val);
        res = res->next;
        Node6 = Node6->next;
    }
}
