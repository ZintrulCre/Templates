#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        int prev = 1, curr = 1, i = 2;
        while (i < n) {
            int temp = curr;
            curr += prev;
            prev = temp;
            ++i;
        }
        return curr;
    }
};

#endif