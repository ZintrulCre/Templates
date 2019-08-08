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
    int longestOnes(vector<int> &A, int K) {
        int i = 0, res = 0;
        for (int j = 0; j < A.size(); ++j) {
            if (A[j] == 0) {
                if (K > 0)
                    --K;
                else {
                    while (A[i] == 1)
                        ++i;
                    ++i;
                }
            }
            res = max(res, j - i + 1);
        }
        return res;
    }
};

#endif
