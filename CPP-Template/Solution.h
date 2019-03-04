#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if (n < m)
            return {};
        vector<int> std(26, 0), cur(26, 0), ret;
        for (auto ch:p)
            ++std[ch - 'a'];
        for (int i = 0; i < m - 1; ++i)
            ++cur[s[i] - 'a'];
        for (int i = m - 1; i < n; ++i) {
            ++cur[s[i] - 'a'];
            if (cur == std)
                ret.push_back(i);
            --cur[s[i - m + 1] - 'a'];
        }
        return ret;
    }
};

#endif