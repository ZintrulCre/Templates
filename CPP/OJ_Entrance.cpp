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

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> weight(n + 1, 0), value(n + 1, 0);
    for (int i = 1; i <=n; ++i)
        cin >> weight[i];
    for (int i = 1; i <= n; ++i)
        cin >> value[i];
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            dp[i][j] = (weight[i] <= j ? max(dp[i - 1][j], value[i] + dp[i - 1][j - weight[i]]) : dp[i - 1][j]);
        }
    }
    cout << dp[n][m] << endl;
}
