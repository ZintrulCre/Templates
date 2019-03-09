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
//using std::vector;
//using std::queue;
//using std::deque;
//using std::priority_queue;
//using std::stack;
//using std::map;
//using std::set;
//using std::multimap;
//using std::multiset;
//using std::unordered_map;
//using std::unordered_set;
//
//using std::begin;
//using std::end;
//using std::greater;
//using std::less;
//using std::max_element;
//using std::min_element;
//
//using std::pair;
//using std::tuple;
//using std::make_tuple;
//using std::get;
//
//using std::stoi;
//
//using std::string;
//using std::to_string;
//using std::swap;
//using std::max;
//using std::min;
//using std::cin;
//using std::cout;
//using std::endl;
//using std::sort;
//using std::move;
//using std::endl;
//
//int CountWeight(unordered_map<char, vector<char>> &dict, vector<int> &weight, char &c) {
//    if (weight[c - 'a'] != 999999999)
//        return weight[c - 'a'];
//    if (dict.find(c) == dict.end())
//        return -1;
//    int wei = 999999999;
//    for (int i = 0; i < dict[c].size(); ++i)
//        wei = min(wei, 1 + CountWeight(dict, weight, dict[c][i]));
//    weight[c - 'a'] = min(weight[c - 'a'], wei);
//    return weight[c - 'a'];
//}
//
//int main() {
//    int T, n, m;
//    cin >> T;
//    for (int t = 0; t < T; ++t) {
//        vector<int> weight(26, 1);
//        cin >> m;
//        char key, value;
//        unordered_map<char, vector<char>> dict;
//        for (int i = 0; i < m; ++i) {
//            if (dict.find(key) == dict.end())
//                dict[key] = vector<char>();
//            cin >> value >> key;
//            dict[key].push_back(value);
//        }
//        cin >> n;
//        char missed;
//        for (int i = 0; i < n; ++i) {
//            cin >> missed;
//            weight[missed - 'a'] = 999999999;
//        }
//        string target;
//        cin >> target;
//        int sum = 0;
//        for (int i = 0; i < target.size(); ++i) {
//            if (weight[target[i] - 'a'] == 999999999) {
//                if (CountWeight(dict, weight, target[i]) == -1) {
//                    sum = -1;
//                    break;
//                }
//            }
//            sum += weight[target[i] - 'a'];
//        }
//        cout << sum << endl;
//    }
//}
