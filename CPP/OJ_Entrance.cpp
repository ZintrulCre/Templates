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
    int n = 0, res = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i) {
        int curr = -1;
        for (int j = i; j < n; ++j) {
            curr = max(curr, v[j]);
            res += curr;
        }
    }
    cout << res << endl;
}
