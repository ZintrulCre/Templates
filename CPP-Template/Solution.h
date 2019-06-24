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
    bool carPooling(vector<vector<int>> &trips, int capacity) {
        vector<int> p(1001, 0);
        for (auto &t:trips)
            p[t[1]] += t[0], p[t[2]] -= t[0];
        for (int i = 0; i < 1001; ++i)
            if ((capacity -= p[i]) < 0)
                return false;
        return true;
    }
};


#endif