//#include <iostream>
//#include <cmath>
//#include <queue>
//#include <vector>
//#include <string>
//#include <limits.h> // INT_MAX
//#include <algorithm>
//
//int dir_x[4] = {-1, 0, 1, 0};
//int dir_y[4] = {0, -1, 0, 1};
//int R, C;
//std::vector<std::vector<int>> grid;
//
//int BFS(int x, int y, std::queue<std::pair<int, int>> &que) {
//    int max_time = 0;
//    int size = que.size(), time = 1;
//    while (!que.empty()) {
//        x = que.front().first, y = que.front().second;
//        que.pop();
//        max_time = std::max(max_time, grid[x][y]);
//        for (int i = 0; i < 4; ++i) {
//            int new_x = x + dir_x[i], new_y = y + dir_y[i];
//            if (new_x >= 0 && new_x < R && new_y >= 0 && new_y < C && grid[new_x][new_y] == -1) {
//                que.push(std::pair<int, int>(new_x, new_y));
//                grid[new_x][new_y] = time;
//            }
//        }
//        --size;
//        if (size == 0) {
//            size = que.size();
//            ++time;
//        }
//    }
//    return max_time;
//}
//
//bool CanDeliver(int &max_time) {
//    bool deliver = true;
//    int left_low = INT_MAX, left_high = INT_MIN, right_low = INT_MAX, right_high = INT_MIN;
//    for (int i = 0; i < R; ++i) {
//        for (int j = 0; j < C; ++j) {
//            if (grid[i][j] > max_time) {
//                deliver = false;
//                left_low = std::min(left_low, i + j + max_time);
//                left_high = std::max(left_high, i + j - max_time);
//                right_low = std::min(right_low, i - j + max_time);
//                right_high = std::max(right_high, i - j - max_time);
//            }
//        }
//    }
//    if (deliver)
//        return true;
//    for (int i = 0; i < R; ++i) {
//        for (int j = 0; j < C; ++j) {
//            int left = i + j, right = i - j;
//            if (left_high <= left && left <= left_low && right_high <= right && right <= right_low)
//                return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int num_case = 1;
//    int T;
//    std::cin >> T;
//    for (int t = 0; t < T; ++t) {
//        std::cin >> R >> C;
//        grid = std::vector<std::vector<int>>(R, std::vector<int>(C, -1));
//        std::queue<std::pair<int, int>> que;
//        for (int i = 0; i < R; ++i) {
//            std::string temp_in;
//            std::cin >> temp_in;
//            for (int j = 0; j < C; ++j) {
//                char &temp = temp_in[j];
//                if (temp == '1') {
//                    que.push(std::pair<int, int>(i, j));
//                    grid[i][j] = 0;
//                }
//            }
//        }
//        int size = que.size();
//        if (size == R * C) {
//            std::cout << "Case #" + std::to_string(num_case) + ": 0" << std::endl;
//            ++num_case;
//            continue;
//        }
//
//        // BFS
//        int max_time = BFS(0, 0, que);
//
//        // Binary Search
//        int lowest_time = 0, highest_time = INT_MAX;
//        while (lowest_time < highest_time) {
//            int mid_time = lowest_time + ((highest_time - lowest_time) >> 1);
//            if (CanDeliver(mid_time))
//                highest_time = mid_time;
//            else
//                lowest_time = mid_time + 1;
//        }
//
//        std::cout << "Case #" + std::to_string(num_case) + ": " + std::to_string(highest_time) << std::endl;
//        ++num_case;
//    }
//    return 0;
//}
