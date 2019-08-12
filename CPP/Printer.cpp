//
// Created by ZintrulCre on 2019-01-26.
//

#include "Printer.h"

Printer &Printer::GetInstance() {
    static Printer instance;
    return instance;
}


void Printer::Print(ListNode *head) {
    while (head) {
        std::cout << head->val << ' ';
        head = head->next;
    }
    std::cout << std::endl;
}

void Printer::Print(TreeNode *root) {
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

void Printer::Print(TreeLinkNode *root) {
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


void Printer::Print(RandomListNode *head) {
    while (head) {
        std::cout << head->label << ' ';
        head = head->next;
    }
    std::cout << std::endl;
}

void Printer::Print(const vector<pair<int, int>> &vec) {
    for (pair<int, int> iter:vec)
        Print(iter.first, iter.second);
}

void Printer::Print(const std::vector<TreeNode *> &vec) {
    for (TreeNode *root: vec) {
        Print(root);
        cout << endl;
    }
    cout << endl;
}

Printer::Printer() = default;

Printer::~Printer() = default;
