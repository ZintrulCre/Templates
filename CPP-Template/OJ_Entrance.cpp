#include <iostream>
#include <cmath>
#include <cstdio>
#include <math.h>
#include <limits>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Stone {
    int seconds;
    int energy;
    int lost;
};
vector<Stone> stones;
vector<vector<int>> dp;
int N;

void solve(const int &T) {
    scanf("%d", &N);
    stones = vector<Stone>(N);
    int total_time = 0;
    for (int i = 0; i < N; ++i)
        scanf("%d %d %d", &stones[i].seconds, &stones[i].energy, &stones[i].lost);
    sort(stones.begin(), stones.end(), [](const Stone &s1, const Stone &s2) {
        return s1.lost > s2.lost;
    });
    int res = 0;
    dp = vector<vector<int>>(N + 1, vector<int>(stones[0].seconds * N, -1));
    for (int i = 1; i <= N; ++i) {
        dp[i - 1][0] = 0;
        for (int j = 0; j < stones[i - 1].seconds; ++j)
            dp[i][j] = dp[i - 1][j];
        for (int j = stones[i - 1].seconds; j < dp[i - 1].size(); ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - stones[i - 1].seconds] + stones[i - 1].energy -
                                         (j - stones[i - 1].seconds) * stones[i - 1].lost);
            res = max(res, dp[i][j]);
        }
    }
    printf("Case #%d: %d\n", T, res);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; ++t)
        solve(t);
    return 0;
}