#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    void solveSudoku(vector<vector<char>> &board) {
        vector<vector<bool>> row(9, vector<bool>(9, false)), col(9, vector<bool>(9, false));
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] != '.') {
                    row[i][board[i][j] - '0' - 1] = true;
                    col[j][board[i][j] - '0' - 1] = true;
                }
            }
        }
        Backtrack(0, 0, board, row, col);
    }

    bool Backtrack(int i, int j, vector<vector<char>> &board, vector<vector<bool>> &row, vector<vector<bool>> &col) {
        if (i == 9)
            return true;
        if (board[i][j] != '.') {
            if (Backtrack(j == 8 ? i + 1 : i, j == 8 ? 0 : j + 1, board, row, col))
                return true;
        } else {
            for (int k = 1; k <= 9; ++k) {
                if (row[i][k - 1] || col[j][k - 1])
                    continue;
                if (ExistInMatrix(i, j, board, k)) {
                    board[i][j] = static_cast<char>('0' + k);
                    row[i][k - 1] = true;
                    col[j][k - 1] = true;
                    if (Backtrack(j == 8 ? i + 1 : i, j == 8 ? 0 : j + 1, board, row, col))
                        return true;
                    board[i][j] = '.';
                    row[i][k - 1] = false;
                    col[j][k - 1] = false;
                }
            }
        }
        return false;
    }

    bool ExistInMatrix(int i, int j, vector<vector<char>> &board, int &num) {
        int x = i / 3 * 3, y = j / 3 * 3;
        for (int p = 0; p < 3; ++p) {
            for (int q = 0; q < 3; ++q) {
                if (board[x + p][y + q] == static_cast<char>(num + '0'))
                    return false;
            }
        }
        return true;
    }
};

#endif