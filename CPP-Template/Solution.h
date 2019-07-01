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
    vector<int> pathInZigZagTree(int label) {
        vector<int> res;
        while (label > 0) {
            int k = label, l = 1;
            bool odd = true;
            int level = 0;
            while (k > 1) {
                k >>= 1;
                ++l;
            }
            if (l % 2 == 0)
                odd = false;
            res.push_back(label);
            if (!odd) {
                while (k < label)
                    k <<= 1;
                if (k != label)
                    k >>= 1;
                k -= 1;
                label = k ^ label;
                label /= 2;
            }
            else {
                label /= 2;
                while (k < label)
                    k <<= 1;
                if (k != label)
                    k >>= 1;
                k -= 1;
                label = k ^ label;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

#endif