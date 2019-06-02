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
    int GetUglyNumber_Solution(int index) {
        if (index == 1)
            return 1;
        vector<int> primes{2, 3, 5}, coe{0, 0, 0}, res{1};
        for (int i = 1; i < index; ++i) {
            int r = INT_MAX;
            for (int j = 0; j < 3; ++j)
                r = min(r, primes[j] * res[coe[j]]);
            for (int j = 0; j < 3; ++j)
                if (primes[j] * res[coe[j]] == r)
                    ++coe[j];
            res.push_back(r);
        }
        return res.back();
    }
};

#endif