#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
    int dir_x[4] = {-1, 0, 1, 0};
    int dir_y[4] = {0, -1, 0, 1};
    int m, n;
public:
    vector<pair<int, int>> pacificAtlantic(vector<vector<int>> &matrix) {
        m = matrix.size(), n = m == 0 ? 0 : matrix[0].size();
        set<pair<int, int>> s1, s2;
        vector<pair<int, int>> ret;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (DFS(matrix, i, j))
                    ret.emplace_back(pair<int, int>(i, j));
            }
        }
        return {};
    }

    bool DFS(vector<vector<int>> &matrix, int x, int y) {
        for (int i = 0; i < 4; ++i) {
            int new_x = x + dir_x[i], new_y = y + dir_y[i];
            if (new_x < 0 || new_y < 0 || new_x >= m || new_y >= n)
                return true;
            if (matrix[new_x][new_y] <= matrix[x][y] && DFS(matrix, new_x, new_y))
                return true;
        }
        return false;
    }
};

#endif