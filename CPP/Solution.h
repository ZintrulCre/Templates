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
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K) {
        vector<int> prices(n, INT_MAX);
        prices[src] = 0;
        for (int i = 0; i <= K; ++i) {
            vector<int> u(prices);
            for (auto &f:flights)
                if (prices[f[0]] != INT_MAX)
                    u[f[1]] = min(u[f[1]], prices[f[0]] + f[2]);
            prices = u;
        }
        return prices[dst] == INT_MAX ? -1 : prices[dst];
    }
};

#endif
