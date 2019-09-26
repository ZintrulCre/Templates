#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
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
    int T;
    cin >> T;
    for (int ttt = 0; ttt < T; ++ttt) {
        int n, m;
        cin >> n >> m;
        vector<int> w(m), c(m), res(n, 0), xx(n, 4);
        for (int i = 0; i < m; ++i)
            cin >> w[i];
        for (int i = 0; i < m; ++i) {
            cin >> c[i];
            res[w[i] - 1] = c[i];
            xx[w[i] - 1] = 1;
        }
        long long d = 4;
        for (int i = 1; i < n; ++i) {
            d = d * 3 % 1000000007;
        }
        cout << d << endl;
    }
    return 0;
}
