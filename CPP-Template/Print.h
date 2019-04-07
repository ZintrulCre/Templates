//
// Created by ZintrulCre on 2019-04-08.
//

#ifndef CPP_PRINT_H
#define CPP_PRINT_H

#include "Include.h"
#include "DataStructure.h"

template<typename T>
void Print(const T &t, ...) {
    cout << t << endl;
}

template<typename T>
void Print(const vector<T> &vec) {
    for (auto v: vec)
        cout << v << endl;
}

template<typename T>
void Print(stack<T> stk) {
    while (!stk.empty()) {
        cout << stk.top() << ' ';
        stk.pop();
    }
    cout << endl;
}

template<typename T>
void Print(const set<T> &vec) {
    for (auto &v: vec)
        cout << v << ' ';
    cout << endl;
}

template<typename T>
void Print(const vector<vector<T>> &vec) {
    for (auto &v:vec) {
        for (auto u:v)
            cout << u << ' ';
        cout << endl;
    }
}


#endif //CPP_PRINT_H
