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
    void Print(const std::set<T> &vec);

    template<typename T>
    void Print(const std::vector<T> &vec);

    template<typename T>
    void Print(const std::vector<std::vector<T>> &vec);

    void Print(ListNode *head);

    void Print(TreeNode *root);

    void Print(TreeLinkNode *root);

    void Print(RandomListNode *root);

    void Print(const std::vector<TreeNode *> &vec);

private:
    Printer();

    ~

    Printer();
};

template<typename T>
void Printer::Print(const T &t, ...) {
    std::cout << t << std::endl;
}

template<typename T>
void Printer::Print(const std::vector<T> &vec) {
    for (auto v: vec)
        cout << v << endl;
}

template<typename T>
void Printer::Print(const std::set<T> &vec) {
    for (auto v: vec)
        cout << v << ' ';
    cout << endl;
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
