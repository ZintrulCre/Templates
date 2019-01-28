#include "Include.h"
#include "Printer.h"
#include "Solution.cpp"
#include "DataStructure.h"
#include "TreeSerialization.h"

int main() {
//    vector<int> nums{1, 2, 3, 4, 6, 8, 9, 10, 13, 14, 16, 17, 19, 21, 24, 26, 27, 28, 29}, c{3, 14, 50};
//    vector<int> nums{1,2,3,4,5}, c{7,8,9};
    vector<vector<int>> nums{{3, 0, 8, 4},
                             {2, 4, 5, 7},
                             {9, 2, 6, 3},
                             {0, 3, 1, 0}};
    Solution sol;
    auto s = sol.maxIncreaseKeepingSkyline(nums);
    Printer::GetInstance().Print(s);

//    Printer::GetInstance().Print(1&1);
//
//    TimeMap time_map;
//    time_map.set("foo","bar",1);
//    auto s = time_map.get("foo", 2);
//    Printer::GetInstance().Print(s);

    return 0;
}