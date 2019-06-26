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
    int maxProfit(int k, vector<int> &prices) {
        int n = prices.size();
        if (n < 2 || k == 0)
            return 0;
        vector<vector<int>> buy(n, vector<int>(k, INT_MIN)), sell(n, vector<int>(k, 0));
        buy[0][0] = -prices[0], sell[0][0] = 0;
        cout << buy[0][0] << ' ' << sell[0][0] << endl;
        for (int i = 1; i < n; ++i) {
            buy[i][0] = max(buy[i - 1][0], -prices[i]);
            sell[i][0] = max(sell[i - 1][0], buy[i - 1][0] + prices[i]);
            cout << i << ' ' << 0 << ' ' << buy[i][0] << ' ' << sell[i][0] << endl;
            for (int j = 1; j < k && j <= i; ++j) {
                buy[i][j] = max(buy[i - 1][j - 1], sell[i - 1][j - 1] - prices[i]);
                sell[i][j] = max(sell[i - 1][j - 1], buy[i - 1][j] + prices[i]);
                cout << i << ' ' << j << ' ' << buy[i][j] << ' ' << sell[i][j] << endl;
            }
        }
        return sell[n - 1][k - 1];
    }
};

#endif