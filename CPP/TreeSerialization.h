//
// Created by ZintrulCre on 2019-01-26.
//

#ifndef CPP_TREESERIALIZATION_H
#define CPP_TREESERIALIZATION_H

#include "Include.h"
#include "DataStructure.h"

struct TreeNodeInfo {
    TreeNode *node;
    int sub;

    TreeNodeInfo(TreeNode *node, int sub) : node(node), sub(sub) {}
};

class TreeSerialization {
public:
    static TreeSerialization &GetInstance();

    // Encodes a tree to a single string.
    string serialize(TreeNode *root);

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data);

private:
    TreeSerialization() = default;

    ~TreeSerialization() = default;
};


#endif //CPP_TREESERIALIZATION_H
