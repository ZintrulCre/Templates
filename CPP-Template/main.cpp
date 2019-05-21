#include "Sort/Sort.h"
#include "Include.h"
#include "Printer.h"
#include "Solution.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

int main() {
    vector<pair<int, int>> vp = {
            pair<int, int>{1, 0},
            pair<int, int>{0, 1}
    };
    vector<pair<string, string>> equations = {
            {"a", "b"},
            {"e", "f"},
            {"b", "e"}
    };
    vector<double> values = {3.4, 1.4, 2.3};
    vector<pair<string, string>> queries = {
            {"b", "a"},
            {"a", "f"},
            {"f", "f"},
            {"e", "e"},
            {"c", "c"},
            {"a", "c"},
            {"f", "e"}
    };
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

    auto a = new TreeNode(4);
    auto b = new TreeNode(1);
    auto c = new TreeNode(6);
    auto d = new TreeNode(2);
    auto e = new TreeNode(5);
    auto f = new TreeNode(7);
    auto g = new TreeNode(3);
    auto h = new TreeNode(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = d;
    c->left = e;
    c->right = f;
    d->right = g;
    f->right = h;

//    auto a = new ListNode(3);
//    auto b = new ListNode(3);
//    auto c = new ListNode(5);
//    auto d = new ListNode(1);
//    auto e = new ListNode(9);
//    auto f = new ListNode(2);
//    auto g = new ListNode(5);
//    auto h = new ListNode(1);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    e->next = f;
//    f->next = g;
//    g->next = h;

    vector<vector<int>> array{{4, 1},
                              {4, 2},
                              {4, 3},
                              {2, 5},
                              {1, 2},
                              {1, 5}};
    vector<int> num{2,7,13,19};
    string str1 = "missisipi", str2 = "missisipi";
    vector<string> strings{"flower", "flow", "flight"};
    vector<vector<int>> matrix = {{7, 0},
                                  {4, 4},
                                  {7, 1},
                                  {5, 0},
                                  {6, 1},
                                  {5, 2}}, matrix1 = {{1, 2},
                                                      {3, 3}};
    Solution sol;
    auto s = sol.nthUglyNumber(11);
    Print(s);

    return 0;
}