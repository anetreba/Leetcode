//
// Created by anetreba on 23.06.21.
//
#include "Solution.h"
#include <iostream>

void print_list(ListNode *list) {
    ListNode *lst = list;

    while(lst) {
        std::cout << lst->val << std::endl;
        lst = lst->next;
    }
}

int main() {
    Solution solution;
    ListNode *listNode = new ListNode(7);
    ListNode *listNode1 = new ListNode(6, listNode);
    ListNode *listNode2 = new ListNode(5, listNode1);
    ListNode *listNode3 = new ListNode(4, listNode2);
    ListNode *listNode4 = new ListNode(3, listNode3);
    ListNode *listNode5 = new ListNode(2, listNode4);
    ListNode *listNode6 = new ListNode(1, listNode5);

    std::cout << "************************" << std::endl;
    print_list(listNode6);
    ListNode * reverse = solution.reverseBetween(listNode6, 2, 5);
    std::cout << "************************" << std::endl;
    print_list(reverse);
    std::cout << "************************" << std::endl;

    ListNode *head = new ListNode(5);
    ListNode *head1 = new ListNode(4, head);

    std::cout << "************************" << std::endl;
    print_list(head1);
    ListNode * reverse1 = solution.reverseBetween(head1, 1, 2);
    std::cout << "************************" << std::endl;
    print_list(reverse1);
    std::cout << "************************" << std::endl;

}
