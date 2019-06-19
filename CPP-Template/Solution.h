#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/Sort.h"
#include "Include.h"
#include "Print.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int i = 0, j = nums.size(), k = 0, n = nums.size();
        while (i < j) {
            k = i + (j - i) / 2;
            cout << k << endl;
            if (k % 2 == 0) {
                if (k + 1 < n && nums[k] == nums[k + 1])
                    i = k + 2;
                else if (k - 1 >= 0 && nums[k] == nums[k - 1])
                    j = k - 2;
                else
                    return nums[k];
            } else {
                if (k + 1 < n && nums[k] == nums[k + 1])
                    j = k - 2;
                else if (k - 1 >= 0 && nums[k] == nums[k - 1])
                    i = k + 2;
                else
                    return nums[k];
            }
        }
        return 0;
    }
};

#endif