#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        sort(points.begin(), points.end(), [](pair<int, int>& p1, pair<int, int>& p2){
            return p1.first < p2.first;
        });
        if (points.size() == 0)
            return 0;
        int start = points[0].first, end = points[0].second, count = 0;
        for (int i = 1; i < points.size(); ++i) {
            if (points[i].first <= end) {
                start = points[i].first;
                if (points[i].second <= end)
                    end = points[i].second;
            }
            else {
                ++count;
                start = points[i].first;
                end = points[i].second;
            }
        }
        return count + 1;
    }
};

#endif