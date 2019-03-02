// #include <iostream>
// #include <cmath>
// #include <math.h>
// #include <limits>
// #include <algorithm>
// #include <vector>
// #include <stack>
// #include <queue>
// #include <string>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>

// using std::vector;
// using std::queue;
// using std::deque;
// using std::priority_queue;
// using std::stack;
// using std::map;
// using std::set;
// using std::multimap;
// using std::multiset;
// using std::unordered_map;
// using std::unordered_set;

// using std::begin;
// using std::end;
// using std::greater;
// using std::less;
// using std::max_element;
// using std::min_element;

// using std::pair;
// using std::tuple;
// using std::make_tuple;
// using std::get;

// using std::stoi;

// using std::string;
// using std::to_string;
// using std::swap;
// using std::max;
// using std::min;
// using std::cin;
// using std::cout;
// using std::endl;
// using std::sort;
// using std::move;
// using std::endl;

// int main() {
//     int n, m, needi, valuei;
//     cin >> n >> m;
//     vector<int> need(n + 1), value(n + 1);
//     for (int i = 1; i <= n; ++i) {
//         cin >> needi >> valuei;
//         need[i] = needi;
//         value[i] = valuei;
//     }
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= m; ++j) {
//             dp[i][j] = dp[i - 1][j];
//             if (j >= need[i])
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - need[i]] + value[i]);
//         }
//     }
//     cout << dp[n][m] << endl;
// }