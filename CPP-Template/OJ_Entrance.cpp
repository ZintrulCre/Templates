#include <iostream>
#include <cmath>
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

using std::vector;
using std::queue;
using std::deque;
using std::priority_queue;
using std::stack;
using std::map;
using std::set;
using std::multimap;
using std::multiset;
using std::unordered_map;
using std::unordered_set;

using std::begin;
using std::end;
using std::greater;
using std::less;
using std::max_element;
using std::min_element;

using std::pair;
using std::tuple;
using std::make_tuple;
using std::get;

using std::stoi;

using std::string;
using std::to_string;
using std::swap;
using std::max;
using std::min;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::move;
using std::endl;

int main() {
    int c = 1;
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, P;
        int min_hour = INT_MAX;
        cin >> N >> P;
        vector<int> rating(N, 0);
        for (int n = 0; n < N; ++n)
            cin >> rating[n];
        sort(rating.begin(), rating.end()); // C++ 14

        vector<int> prefix_sum(N + 1, 0);
        for (int i = 0; i < N; ++i)
            prefix_sum[i + 1] = prefix_sum[i] + rating[i];

        for (int i = P - 1; i < N; ++i) {
            int sum = rating[i] * (P - 1) - (prefix_sum[i] - prefix_sum[i - P + 1]);
            min_hour = max(0, min(min_hour, sum));
        }

        cout << "Case #" + to_string(c) + ": " + to_string(min_hour) << endl;
        ++c;
    }
    return 0;
}
