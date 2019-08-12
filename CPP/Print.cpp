//
// Created by ZintrulCre on 2019-04-08.
//

#include "Print.h"

void Print(ListNode *head) {
    while (head) {
        std::cout << head->val << ' ';
        head = head->next;
    }
    std::cout << std::endl;
}

void Print(TreeNode *root) {
    if (!root)
        return;
    queue<TreeNode *> que;
    que.push(root);
    while (!que.empty()) {
        auto curr = que.front();
        cout << curr->val << ' ';
        que.pop();
        if (curr->left)
            que.push(curr->left);
        if (curr->right)
            que.push(curr->right);
    }
}

void Print(TreeLinkNode *root) {
    if (!root)
        return;
    queue<TreeLinkNode *> que;
    que.push(root);
    while (!que.empty()) {
        auto curr = que.front();
        cout << curr->val << ' ';
        que.pop();
        if (curr->left)
            que.push(curr->left);
        if (curr->right)
            que.push(curr->right);
    }
}


void Print(RandomListNode *head) {
    while (head) {
        std::cout << head->label << ' ';
        head = head->next;
    }
    std::cout << std::endl;
}

void Print(const vector<pair<int, int>> &vec) {
    for (pair<int, int> iter:vec)
        Print(iter.first, iter.second);
}

void Print(const std::vector<TreeNode *> &vec) {
    for (TreeNode *root: vec) {
        Print(root);
        cout << endl;
    }
    cout << endl;
}
