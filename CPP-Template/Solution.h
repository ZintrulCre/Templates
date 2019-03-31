#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    string baseNeg2(int N) {
        if (N == 0)
            return "0";
        int b = 4, product = 1, cumulative = 1;
        while (cumulative < N) {
            cumulative += product * b;
            product *= b;
        }
        vector<int> res;
        int temp = cumulative;
        while (temp > 1) {
            res.push_back(0);
            temp >>= 1;
        }
        res.push_back(1);
        std::reverse(res.begin(), res.end());
        for (int i = 1; i < res.size(); i += 2) {
            if (product == N)
                break;
            if (product < N)
                continue;
            if (product > N) {
                res[i] = 1;
                product -= pow(2, res.size() - i - 1);
            }
            if (product < N) {
                res[i + 1] = 1;
                product += pow(2, res.size() - i - 2);
            }
            if (product == N)
                break;
        }
        string ret;
        for (auto &r:res)
            ret += to_string(r);
        return ret;
    }
};

#endif