#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/Sort.h"
#include "Include.h"
#include "Print.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
    vector<string> SplitVersion(string &version) {
        vector<string> res;
        int start = 0;
        for (int i = 0; i < version.size(); ++i) {
            if (version[i] == '.') {
                res.push_back(version.substr(start, i - start));
                start = i + 1;
            }
        }
        res.push_back(version.substr(start));
        while (!res.empty() && stoi(res.back()) == 0)
            res.pop_back();
        return res;
    }

public:
    int compareVersion(string version1, string version2) {
        vector<string> s1 = SplitVersion(version1);
        vector<string> s2 = SplitVersion(version2);
        int n1 = s1.size(), n2 = s2.size();
        for (int i = 0; i < n1 && i < n2; ++i) {
            if (stoi(s1[i]) < stoi(s2[i]))
                return -1;
            else if (stoi(s1[i]) > stoi(s2[i]))
                return 1;
        }
        return n1 > n2 ? 1 : (n2 == n1 ? 0 : -1);
    }
};

#endif
