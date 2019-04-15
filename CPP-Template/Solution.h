#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Print.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
    vector<double> p;
    int n;
    double res;
    bool flag = false;
public:
    string minimizeError(vector<string> &prices, int target) {
        this->n = prices.size();
        this->p = vector<double>(n);
        this->res = 0.0;
        for (int i = 0; i < n; ++i)
            this->p[i] = stof(prices[i]);
        BackTracking(0, target);
        if (!flag)
            return "-1";
        string temp = to_string(res);
        int cnt = 0;
        int i = 0;
        while (i < temp.size() && temp[i] != '.')
            ++i;
        return temp.substr(0, i + 4);
    }

    bool BackTracking(int m, int target) {
        if (m == n) {
            if (target == 0) {
                flag = true;
                return true;
            }
            return false;
        }
        int k = static_cast<int>(p[m]);
        if (BackTracking(m + 1, target - k)) {
            res += p[m] - k * 1.0;
            return true;
        }
        if (p[m] - static_cast<int>(p[m]) * 1.0 > 1e-5) {
            if (BackTracking(m + 1, target - k - 1)) {
                res += (k + 1) * 1.0 - p[m];
                return true;
            }
        }
        return false;
    }
};

#endif