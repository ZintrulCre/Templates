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
//#include "Print.h"
//
//using namespace std;
//
//
//int main() {
//    int total_test_case_number;
//    cin >> total_test_case_number;
//    for (int case_number = 1; case_number <= total_test_case_number; ++case_number) {
//        int N, sum = 0, max_len = 0;
//        cin >> N;
//        vector<string> words(N);
//        for (int m = 0; m < N; ++m) {
//            cin >> words[m];
//            max_len = max(max_len, static_cast<int>(words[m].size()));
//            reverse(words[m].begin(), words[m].end());
//        }
//        unordered_map<string, int> status;
//        vector<bool> visited(N, false);
//        int total = 0;
//        for (int len = max_len; len > 0; --len) {
//            for (int m = 0; m < N; ++m) {
//                if (visited[m] || words[m].size() < len)
//                    continue;
//                string str = words[m].substr(0, len);
//                if (status.find(str) != status.end()) {
//                    if (status[str] != -1) {
//                        sum += 2;
//                        visited[status[str]] = true, visited[m] = true;
//                        status[str] = -1;
//                    }
//                } else
//                    status[str] = m;
//            }
//        }
//        printf("Case #%d: %d\n", case_number, sum);
//    }
//
//    return 0;
//}