//
// Created by ZintrulCre on 2019-01-26.
//

#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root)
            return;
        Support(root, nullptr);
    }

    void Support(TreeLinkNode *node, TreeLinkNode *next) {
        if (node) {
            if (node->left && node->right)
                node->left->next = node->right;
            if (node->right && next && next->left)
                node->right->next = next->left;
            Support(node->left, node->right);
            Support(node->right, next && next->left ? next->left : nullptr);
        }
    }
};

#endif //CPP_SOLUTION_H
