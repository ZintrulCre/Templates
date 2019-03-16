#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> counter;
        for (auto &m: nums)
            ++counter[m];
        priority_queue<int, vector<int>, greater<>> heap;
        for (auto &freq:counter) {
            if (heap.size() < k || freq.second > heap.top())
                heap.push(freq.second);
            if (heap.size() > k)
                heap.pop();
        }
        vector<int> ret;
        for (auto &freq:counter) {
            if (freq.second >= heap.top()) {
                ret.push_back(freq.first);
                heap.pop();
            }
        }
        return ret;
    }
};


#endif