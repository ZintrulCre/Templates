#include "Sort/Sort.h"
#include "Include.h"
#include "Printer.h"
#include "Solution.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

int main() {
//    vector<int> nums{0, 0, 0, 0};
//    vector<int> another{2, 5, 3, 6};
//    vector<vector<int>> nu{{1,  0},
//                           {-3, 1},
//                           {-4, 0},
//                           {2,  3}};
    auto a = new TreeLinkNode(1);
    auto b = new TreeLinkNode(2);
    auto c = new TreeLinkNode(3);
    auto d = new TreeLinkNode(4);
    auto e = new TreeLinkNode(5);
    auto f = new TreeLinkNode(6);
    auto g = new TreeLinkNode(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
//    vector<Interval> a = {Interval(3, 5), Interval(9, 20)};
//    vector<Interval> b = {Interval(4, 5), Interval(7, 10), Interval(11, 12), Interval(14, 15), Interval(16, 20)};

    Solution sol;
    sol.connect(a);
//    Printer::GetInstance().Print(s);
    return 0;
}