//
// Created by anetreba on 23.06.21.
//
#include "Solution.h"
#include <iostream>


ListNode * Solution::reverseBetween(ListNode *head, int left, int right) {
    if (head != nullptr && left < right) {
        ListNode *prev = nullptr;
        ListNode *current = head;

        while (left > 1) {
            prev = current;
            current = current->next;
            left--;
            right--;
        }

        ListNode* con = prev;
        ListNode* tail = current;

        ListNode *next = nullptr;

        while (right > 0) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            right--;
        }
        if (con != nullptr) {
            con->next = prev;
        } else {
            head = prev;
        }

        tail->next = current;
    }
    return head;
}

