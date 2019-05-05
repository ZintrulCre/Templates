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
    int minScoreTriangulation(vector<int> &A) {
        int n = A.size(), res = INT_MAX;
        for (int i = 0; i < A.size() - 2; ++i) {
            int j = i + 1, k = i + 2, score = 0;
            for (int m = 0; m < n - 2; ++m) {
                score += A[i] * A[j >= n ? j - n : j] * A[k >= n ? k - n : k];
                ++j;
                ++k;
            }
            res = min(res, score);
        }
        return res;
    }
};

#endif