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
    int n, q;
    scanf("%d %d", &n, &q);
    vector<vector<int>> matrix;
    for (int i = 0; i < n; ++i) {
        int j;
        scanf("%d", &j);
        int temp[j];
        for (int k = 0; k < j; ++k)
            scanf("%d", &temp[k]);
        vector<int> array(temp, temp + sizeof(temp) / sizeof(temp[0]));
        matrix.push_back(array);
    }
    for (int i = 0; i < q; ++i) {
        int r, c;
        scanf("%d %d", &r, &c);
        printf("%d", matrix[r][c]);
    }
    return 0;
}