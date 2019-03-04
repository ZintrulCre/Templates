#ifndef CPP_SOLUTION_H
#define CPP_SOLUTION_H

#include "Sort/TempSort.h"
#include "Include.h"
#include "Printer.h"
#include "DataStructure.h"
#include "TreeSerialization.h"

class Solution {
public:
    bool isValid(string &S) {
        auto iter = S.find("abc");
        while (iter != string::npos) {
            S.erase(iter, 3);
            iter = S.find("abc");
        }
        return S.empty();
    }
};

#endif