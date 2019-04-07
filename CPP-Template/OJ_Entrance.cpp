//#include <iostream>
//#include <cmath>
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
//int main() {
//    int T;
//    cin >> T;
//    for (int t = 1; t <= T; ++t) {
//        int max_n, L;
//        cin >> max_n >> L;
//        vector<int> product(L, 0);
//        vector<int> res(L + 1);
//        for (int i = 0; i < L; ++i)
//            cin >> product[i];
//        unordered_set<int> prime, not_prime;
//        vector<int> match;
//        for (int i = 2; i <= max_n; ++i) {
//            if (not_prime.find(i) == not_prime.end()) {
//                prime.insert(i);
//                int j = 2, p = i * j;
//                while (p <= max_n) {
//                    not_prime.insert(p);
//                    ++j;
//                    p = i * j;
//                }
//            }
//        }
//        int a = 0, b = 0;
//        for (auto p:prime) {
//            if (product[0] % p == 0 && prime.find(product[0] / p) != prime.end()) {
//                a = p;
//                b = product[0] / p;
//                break;
//            }
//        }
//        res[0] = product[1] % a == 0 ? b : a;
//        res[1] = product[1] % a == 0 ? a : b;
//        res[2] = product[1] % a == 0 ? product[1] / a : product[1] / b;
//        match.push_back(res[0]);
//        match.push_back(res[1]);
//        match.push_back(res[2]);
//        for (int i = 2; i < L; ++i) {
//            res[i + 1] = product[i] / res[i];
//            match.push_back(res[i + 1]);
//        }
//        sort(match.begin(), match.end());
//        int j = 1;
//        for (int i = 1; i < match.size(); ++i) {
//            if (match[i] != match[i - 1]) {
//                match[j] = match[i];
//                ++j;
//            }
//        }
//
//        string ret;
//        for (int i = 0; i < L + 1; ++i) {
//            j = 0;
//            while (j < 26) {
//                if (match[j] == res[i])
//                    break;
//                ++j;
//            }
//            ret += static_cast<char>(j + 'A');
//        }
//        cout << "Case #" << t << ": " << ret << endl;
//    }
//}
