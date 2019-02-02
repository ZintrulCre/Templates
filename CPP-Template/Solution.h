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
    vector<vector<int>> ret;

    vector<vector<int>> FindPath(TreeNode *root, int expectNumber) {
        if (!root)
            return {};
        ret.clear();
        vector<int> path;
        Traverse(root, path, expectNumber + 0);
        return ret;
    }

    void Traverse(TreeNode *node, vector<int> &path, int &&left) {
        path.push_back(node->val);
        if (!node->left && !node->right) {
            if (left == node->val)
                ret.emplace_back(vector<int>(path));
            path.pop_back();
            return;
        }
        if (node->left) {
            Traverse(node->left, path, left - node->val);
        }
        if (node->right) {
            Traverse(node->right, path, left - node->val);
        }
        path.pop_back();
    }
};

#endif //CPP_SOLUTION_H
