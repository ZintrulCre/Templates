#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        priority_queue<int> min_heap;
        for (auto &m : nums) {
            if (min_heap.size() < k || min_heap.top() < m)
                min_heap.push(m);
            if (min_heap.size() > k)
                min_heap.pop();
        }
        return min_heap.top();
    }
};

#endif