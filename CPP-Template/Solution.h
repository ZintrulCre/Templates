#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/Sort.h"
#include "Include.h"
#include "Print.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
    ListNode *ReverseLinkedList(ListNode *head) {
        ListNode *prev = nullptr, *curr = head, *next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode *root = new ListNode(0), *prev = root;
        prev->next = head;
        while (prev) {
            int i = 1;
            ListNode *start = prev->next, *end = prev->next, *curr = end, *next = nullptr;
            while (curr && i < k)
                curr = curr->next, ++i;
            if (i < k || !curr)
                break;
            next = curr->next;
            curr->next = nullptr;
            start = ReverseLinkedList(start);
            prev->next = start;
            end->next = next;
            prev = end;
        }
        return root->next;
    }
};

#endif
