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
    int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target) {
        int m = matrix.size(), n = m == 0 ? 0 : matrix[0].size(), res = 0;
        if (m == 0)
            return 0;
        for (int i = 0; i < m; ++i)
            for (int j = 1; j < n; ++j)
                matrix[i][j] += matrix[i][j - 1];
        for (int j = 0; j < n; ++j) {
            for (int y = j; y < n; ++y) {
                for (int i = 0; i < m; ++i) {
                    int sum = 0;
                    for (int x = i; x < m; ++x) {
                        sum += matrix[x][y] - (j == 0 ? 0 : matrix[x][j - 1]);
                        res += (sum == target);
                    }
                }
            }
        }
        return res;
    }
};

#endif