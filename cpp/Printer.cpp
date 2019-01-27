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
    cout << root->val << ' ';
    Print(root->left);
    Print(root->right);
}

void Printer::Print(const std::vector<TreeNode *> &vec) {
    for (TreeNode *root: vec) {
        Print(root);
        cout << endl;
    }
}

Printer::Printer() = default;

Printer::~Printer() = default;
