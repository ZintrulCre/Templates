//
// Created by ZintrulCre on 2019-01-26.
//

#ifndef CPP_PRINTER_H
#define CPP_PRINTER_H

#include "Include.h"
#include "DataStructure.h"

class Printer {
public:
    static Printer &GetInstance();

    template<typename T>
    void Print(const T &t, ...);

    template<typename T>
    void Print(const std::vector<T> &vec);

    template<typename T>
    void Print(const std::vector<std::vector<T>> &vec);

    void Print(ListNode *head);

    void Print(TreeNode *root);

    void Print(const std::vector<TreeNode *> &vec);

private:
    Printer();

    ~Printer();
};

template<typename T>
void Printer::Print(const T &t, ...) {
    std::cout << t << std::endl;
}

template<typename T>
void Printer::Print(const std::vector<T> &vec) {
    int i = 1, j = 1;
    for (auto v: vec) {
        std::cout << v << ' ';
        --j;
    }
    std::cout << std::endl;
}

template<typename T>
void Printer::Print(const std::vector<std::vector<T>> &vec) {
    for (auto v:vec) {
        for (auto u:v)
            std::cout << u << ' ';
        std::cout << std::endl;
    }
}

#endif //CPP_PRINTER_H
