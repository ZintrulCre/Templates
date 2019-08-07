#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/Sort.h"
#include "Include.h"
#include "Print.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    int smallestDistancePair(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), low = 0, high = nums[n - 1] - nums[0], mid = 0;
        while (low < high) {
            mid = low + (high - low) / 2;
            if (IsDistMoreThanK(nums, mid, k))
                high = mid;
            else
                low = mid + 1;
        }
        return high;
    }

    bool IsDistMoreThanK(const vector<int> &nums, int m, const int &k) {
        int left = 0, right = 0, count = 0;
        while (right < nums.size()) {
            while (nums[right] - nums[left] > m)
                ++left;
            count += right - left;
            ++right;
        }
        return count >= k;
    }
};

#endif
