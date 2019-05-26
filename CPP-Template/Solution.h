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
    vector<int> rearrangeBarcodes(vector<int> &barcodes) {
        int n = barcodes.size();
        if (n <= 2)
            return barcodes;
        for (int i = 0; i < n - 1; ++i) {
            int j = i + 1;
            while (j < n && barcodes[i] == barcodes[j])
                ++j;
            if (j >= n)
                break;
            swap(barcodes[j], barcodes[i + 1]);
        }
        for (int i = n - 1; i >= 1; --i) {
            int j = i - 1;
            while (j >= 0 && barcodes[i] == barcodes[j])
                --j;
            if (j < 0)
                break;
            swap(barcodes[j], barcodes[i - 1]);
        }
        return barcodes;
    }
};


#endif