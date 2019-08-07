//#include <iostream>
//#include <cmath>
//#include <cstdio>
//#include <math.h>
//#include <limits>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <string>
//#include <map>
//#include <set>
//#include <unordered_map>
//#include <unordered_set>
//
//using namespace std;
//
//#define VVI vector<vector<int>>
//#define VVB vector<vector<bool>>
//#define VI vector<int>
//#define VB vector<bool>
//
////bool IsXorEven(int num) {
////    int k = 0;
////    while (num > 0) {
////        if (num & 1)
////            ++k;
////        num >>= 1;
////    }
////    return k % 2 == 0;
////}
////
////int FindSubinterval(VI &nums, int x, int y, int res) {
////    queue<vector<int>> q;
////    vector<int> t{x, y, res};
////    q.push(t);
////    int len = 1;
////    while (!q.empty()) {
////        vector<int> c = q.front();
////        q.pop();
////        if (IsXorEven(c[2]))
////            return c[1] - c[0];
////        if (c[0] + 1 < c[1]) {
////            q.push(vector<int>{c[0] + 1, c[1], c[2] ^ nums[c[0]]});
////            q.push(vector<int>{c[0], c[1] - 1, c[2] ^ nums[c[1] - 1]});
////        }
////    }
////    return 0;
////}
////
////void solve(const int &t) {
////    int N, Q, res = 0;
////    VI ret;
////    scanf("%d %d", &N, &Q);
////    VI nums(N, 0);
////    for (int i = 0; i < N; ++i) {
////        scanf("%d", &nums[i]);
////        res ^= nums[i];
////    }
////    for (int i = 0; i < Q; ++i) {
////        int p, v;
////        scanf("%d %d", &p, &v);
////        res ^= nums[p];
////        nums[p] = v;
////        res ^= nums[p];
////        ret.push_back(FindSubinterval(nums, 0, nums.size(), res));
////    }
////    printf("Case #%d: ", t);
////    for (auto &r:ret)
////        printf("%d ", r);
////    printf("\n");
////}
//
//int res;
//
//void DFS(vector<vector<int>> &len_wei, int index, int max_weight, int lvl) {
//    for (int i = index + 1; i < len_wei.size(); ++i) {
//        if (len_wei[i][1] <= max_weight) {
//            res = max(res, lvl + 1);
//            DFS(len_wei, i, min(max_weight - len_wei[i][1], len_wei[i][1] * 7), lvl + 1);
//        }
//    }
//}
//
//int main() {
////    int T;
////    scanf("%d", &T);
////    for (int t = 1; t <= T; ++t)
////        solve(t);
//
//
//    int n,m;
//    cin >> n >> m;
//    vector<int> time(n + 1, 0);
//    unordered_map<int, vector<int>> rely;
//    for (int i = 1 ; i <= n; ++i)
//        cin >> time[i];
//    for (int i = 0 ; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        if(rely.find(b) == rely.end())
//            rely[b] = vector<int>();
//        rely[b].push_back(a);
//    }
//
//
//    return 0;
//}
