#include "Sort/Sort.h"
#include "Include.h"
#include "Printer.h"
#include "Solution.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

int main() {
    vector<int> nums{10, 5, 12, 4, 7};
//    vector<int> another{2, 5, 3, 6};
//    vector<vector<int>> nums{{1,  2,  3,  4},
//                             {5,  6,  7,  8},
//                             {9,  10, 11, 12},
//                             {13, 14, 15, 16}};
    auto a = new TreeNode(10);
    auto b = new TreeNode(5);
    auto c = new TreeNode(12);
    auto d = new TreeNode(4);
    auto e = new TreeNode(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->left = e;
    Solution sol;
    auto s = sol.FindPath(a, 22);
    Printer::GetInstance().Print(s);


    return 0;
}