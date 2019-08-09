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
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        int n = nums.size();
        deque<int> d;
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            while (!d.empty() && d.back() < nums[i])
                d.pop_back();
            d.push_back(nums[i]);
        }
        res.push_back(d.front());
        for (int i = k; i < n; ++i) {
            if (!d.empty() && nums[i - k] == d.front())
                d.pop_front();
            while (!d.empty() && d.back() < nums[i])
                d.pop_back();
            d.push_back(nums[i]);
            res.push_back(d.front());
        }
        return res;
    }
};


#endif
