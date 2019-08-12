#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/Sort.h"
#include "Include.h"
#include "Print.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class MedianFinder {
    priority_queue<double> max_heap;
    priority_queue<double, vector<double>, greater<>> min_heap;
public:
    /** initialize your data structure here. */
    MedianFinder() {
        max_heap = priority_queue<double>();
        min_heap = priority_queue<double, vector<double>, greater<>>();
    }

    void addNum(int num) {
        if (max_heap.empty() || max_heap.top() > num)
            max_heap.push(num);
        else
            min_heap.push(num);
        while (max_heap.size() > min_heap.size() + 1) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
    }

    double findMedian() {
        int ls = max_heap.size(), rs = min_heap.size();
        if ((ls + rs) / 2 == 0)
            return (max_heap.top() + min_heap.top()) / 2;
        return ls > rs ? max_heap.top() : min_heap.top();
    }
};

#endif
