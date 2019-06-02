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
    int maxEqualRowsAfterFlips(vector<vector<int>> &m) {
        int res = 1;
        while (m.size() > res) {
            vector<int> std = m[0];
            vector<vector<int>> remain;
            for (int i = 1; i < m.size(); ++i) {
                int j = 0;
                while (j < m[i].size()) {
                    if ((std[0] ^ m[i][0]) != (std[j] ^ m[i][j]))
                        break;
                    ++j;
                }
                if (j != m[i].size())
                    remain.push_back(m[i]);
            }
            res = max(res, static_cast<int>(m.size() - remain.size()));
            m = remain;
        }
        return res;
    }
};

#endif