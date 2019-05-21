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
//char Decide(const char &R, const char &P, const char &S) {
//    if (R && P && S)
//        return 'X';
//    if (R && P)
//        return 'P';
//    if (R && S)
//        return 'R';
//    if (P && S)
//        return 'S';
//    if (R)
//        return 'P';
//    if (P)
//        return 'S';
//    return 'R';
//}
//
//bool Defeate(const char &current, const char &opponent) {
//    return (current == 'R' && opponent == 'S') || (current == 'S' && opponent == 'P') ||
//           (current == 'P' && opponent == 'R');
//}
//
//void solve(const int &t) {
//    int A;
//    scanf("%d", &A);
//    int i = 0;
//    vector<string> opponent(A);
//    vector<bool> defeated(A, false);
//    bool R, P, S;
//    string res;
//    for (int a = 0; a < A; ++a)
//        cin >> opponent[a];
//    while (true) {
//        int current_opponent = 0;
//        R = false, P = false, S = false;
//        for (int a = 0; a < A; ++a) {
//            if (!defeated[a]) {
//                ++current_opponent;
//                if (opponent[a][i % opponent[a].size()] == 'R')
//                    R = true;
//                else if (opponent[a][i % opponent[a].size()] == 'P')
//                    P = true;
//                else
//                    S = true;
//            }
//        }
//        if (current_opponent == 0)
//            break;
//        char result = Decide(R, P, S);
//        if (result == 'X') {
//            res = "IMPOSSIBLE";
//            break;
//        }
//        res += result;
//        for (int a = 0; a < A; ++a) {
//            if (!defeated[a] && Defeate(result, opponent[a][i % opponent[a].size()]))
//                defeated[a] = true;
//        }
//        ++i;
//    }
//    printf("Case #%d: %s\n", t, res.c_str());
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    for (int t = 1; t <= T; ++t)
//        solve(t);
//    return 0;
//}