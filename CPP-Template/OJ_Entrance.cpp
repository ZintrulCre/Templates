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

void solve(const int &t) {
    int R, C, K;
    scanf("%d %d %d", &R, &C, &K);
    vector<vector<int>> len(301, vector<int>(301, 1)), matrix(301, vector<int>(301));
    for (int r = 0; r < R; ++r)
        for (int c = 0; c < C; ++c)
            scanf("%d", &matrix[r][c]);
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            int i = c - 1, current_max = matrix[r][c], current_min = matrix[r][c];
            while (i >= 0) {
                current_max = max(current_max, matrix[r][i]);
                current_min = min(current_min, matrix[r][i]);
                if (current_max - current_min > K)
                    break;
                --i;
            }
            len[r][c] = c - i;
        }
    }
    int res = 1;
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            int min_c = len[r][c];
            for (int line = r; line >= 0; --line) {
                min_c = min(min_c, len[line][c]);
                res = max(res, min_c * (r - line + 1));
            }
        }
    }
    printf("Case #%d: %d\n", t, res);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; ++t)
        solve(t);
    return 0;
}