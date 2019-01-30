#include "Sort.h"
#include "Include.h"
#include "Printer.h"
#include "Solution.cpp"
#include "DataStructure.h"
#include "TreeSerialization.h"

int main() {
//    vector<int> nums{1, 3, 4, 5, 6, 7};
//    vector<int> nums{1, 2, 3, 4, 5}, c{7, 8, 9};
    vector<vector<int>> nums{{3, 0, 8, 4},
                             {2, 4, 5, 7},
                             {9, 2, 6, 3},
                             {0, 3, 1, 0}};
    Solution sol;
    sol.rotate(nums);
    Printer::GetInstance().Print(nums);
    return 0;
}