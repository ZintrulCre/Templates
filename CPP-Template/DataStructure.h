//
// Created by ZintrulCre on 2019-01-26.
//

#ifndef CPP_DATASTRUCTURE_H
#define CPP_DATASTRUCTURE_H

#include "Include.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}

};

class Node {
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;

    Node() = default;

    Node(int _val, Node *_prev, Node *_next, Node *_child) {
        val = _val;
        prev = _prev;
        next = _next;
        child = _child;
    }
};

struct Interval {
    int start;
    int end;

    Interval() : start(0), end(0) {}

    Interval(int s, int e) : start(s), end(e) {}

    friend bool operator<(const Interval &interval1, const Interval &interval2);
};

struct RandomListNode {
    int label;
    RandomListNode *next, *random;

    RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

#endif //CPP_DATASTRUCTURE_H
