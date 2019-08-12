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

int len, n, k, m;

bool BackTracking(vector<int> &num, vector<int> &v, int idx) {
    if (idx == len)
        return true;
    if (idx >= n) {
        for (int rr = 0; rr <= 1; ++rr) {
            int r = rr;
            for (int i = n - 1, j = idx + 1; i >= 0 && j < len; --i, ++j)
                r ^= v[i];
            if (r == num[idx]) {
                if (BackTracking(num, v, idx + 1))
                    return true;
            }
        }
    } else {
        for (int rr = 0; rr <= 1; ++rr) {
            int r = rr;
            for (int i = idx - 1, j = k - 1; i >= 0 && j > 0; --i, --j)
                r ^= v[i];
            if (r == num[idx]) {
                v[idx] = rr;
                if (BackTracking(num, v, idx + 1))
                    return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> clock(n, vector<int>(2, 0));
    for (int i = 0; i < n; ++i)
        cin >> clock[i][0] >> clock[i][1];
    int x, a, b;
    cin >> x >> a >> b;
    int res_a, res_b, res = 1000000;
    for (int i = 0; i < n; ++i) {
        if (clock[i][0] > 21 && a < 2) {
            int interval = (a + 24 - clock[i][0]) * 60 + b - clock[i][1];
            if (interval >= x && res > interval) {
                res = interval;
                res_a = clock[i][0];
                res_b = clock[i][1];
            }
            continue;
        }
        if (clock[i][0] > a || (clock[i][0] == a && clock[i][1] > b))
            continue;
        int interval = (a - clock[i][0]) * 60 + b - clock[i][1];
        if (interval >= x && res > interval) {
            res = interval;
            res_a = clock[i][0];
            res_b = clock[i][1];
        }
    }
    cout << res_a << ' ' << res_b << endl;
    return 0;
}
