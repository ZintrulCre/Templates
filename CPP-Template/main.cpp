#include "Sort/Sort.h"
#include "Include.h"
#include "Printer.h"
#include "Solution.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

int main() {
    vector<int> nums{1, 5};
    vector<int> num{2};
//    vector<string> another{"a==b", "b!=c", "c==a"};
    vector<vector<int>> nu{{0, 1, 2, 0},
                           {3, 4, 5, 2},
                           {1, 3, 1, 5}};
//    auto a = new TreeLinkNode(1);
//    auto b = new TreeLinkNode(2);
//    auto c = new TreeLinkNode(3);
//    auto d = new TreeLinkNode(4);
//    auto e = new TreeLinkNode(5);
//    auto f = new TreeLinkNode(6);
//    auto g = new TreeLinkNode(7);
//    a->left = b;
//    a->right = c;
//    b->left = d;
//    b->right = e;
//    c->left = f;
//    c->right = g;
//    vector<Interval> a = {Interval(3, 5), Interval(9, 20)};
//    vector<Interval> b = {Interval(4, 5), Interval(7, 10), Interval(11, 12), Interval(14, 15), Interval(16, 20)};
//    auto a = new RandomListNode(1);
//    auto b = new RandomListNode(2);
//    auto c = new RandomListNode(3);
//    auto d = new RandomListNode(4);
//    auto e = new RandomListNode(5);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    a->random = c;
//    b->random = e;
//    d->random = b;

    auto a = new TreeNode(1);
    auto b = new TreeNode(2);
    auto c = new TreeNode(3);
    auto d = new TreeNode(4);
    auto e = new TreeNode(5);
    auto f = new TreeNode(6);
    auto g = new TreeNode(7);
    auto h = new TreeNode(8);
//    auto i = new TreeLinkNode(6);
//    auto j = new TreeLinkNode(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
//    d->left = g;
//    f->right = h;

    Solution sol;
    auto s = sol.findRadius(nums, num);
    Printer::GetInstance().Print(s);
    return 0;
}