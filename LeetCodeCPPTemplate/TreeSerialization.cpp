//
// Created by ZintrulCre on 2019-01-26.
//

#include "TreeSerialization.h"

TreeSerialization &TreeSerialization::GetInstance() {
    static TreeSerialization tree_serialization;
    return tree_serialization;
}

string TreeSerialization::serialize(TreeNode *root) {
    if (!root)
        return "[]";
    string serialization = "[";
    int prev = 0;
    queue<TreeNodeInfo *> node_info;
    node_info.push(new TreeNodeInfo(root, 0));
    int size = 1, total = 1;
    while (!node_info.empty()) {
        auto node = node_info.front();
        node_info.pop();
        --size;
        for (int i = 0; i < node->sub - prev - 1; ++i)
            serialization += "null,";
        prev = node->sub;
        serialization += to_string(node->node->val);
        serialization += ',';
        if (node->node->left)
            node_info.push(new TreeNodeInfo(node->node->left, node->sub * 2 + 1));
        if (node->node->right)
            node_info.push(new TreeNodeInfo(node->node->right, node->sub * 2 + 2));
    }
    serialization.erase(serialization.end() - 1);
    serialization.append("]");
    return serialization;
}

TreeNode *TreeSerialization::deserialize(string data) {
    int size = data.size();
    if (size == 2)
        return nullptr;
    int sub = 1;
    vector<TreeNode *> node_vector;
    string str;
    while (sub < size) {
        if (data[sub] == ',' || data[sub] == ']') {
            if (str == "null")
                node_vector.push_back(nullptr);
            else
                node_vector.push_back(new TreeNode(std::stoi(str)));
            str.clear();
        } else
            str += data[sub];
        ++sub;
    }
    int node_vector_size = static_cast<int>(log2(node_vector.size())) + 1;
    for (int i = 0; i < node_vector_size; ++i) {
        if (node_vector[i]) {
            if (i * 2 + 1 < node_vector.size())
                node_vector[i]->left = node_vector[i * 2 + 1];
            if (i * 2 + 2 < node_vector.size())
                node_vector[i]->right = node_vector[i * 2 + 2];
        }
    }
    return node_vector[0];
}
