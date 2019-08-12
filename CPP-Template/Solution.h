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
    int numRollsToTarget(int d, int f, int target) {
        int dp[d + 1][target + f + 1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for (int i = 0; i < d; ++i)
            for (int j = 0; j < target; ++j)
                if (dp[i][j])
                    for (int k = 1; k <= f; ++k)
                        if (j + k <= target) {
                            dp[i + 1][j + k] = dp[i + 1][j + k] + dp[i][j] % 1000000007;
                            cout << i + 1 << ' ' << j + k << ' ' << dp[i + 1][j + k] << endl;
                        }
        return dp[d][target];
    }
};;


#endif
