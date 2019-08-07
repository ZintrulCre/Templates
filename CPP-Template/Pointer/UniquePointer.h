//
// Created by Zhengyu Chen on 2019-08-07.
//

#include "Deleter.h"
#include <iostream>

#ifndef CPP_UNIQUEPOINTER_H
#define CPP_UNIQUEPOINTER_H

template<typename T, typename D>
class UniquePointer {
public:
    explicit UniquePointer(T *t, const D &d);

    ~UniquePointer();

    T &operator*();

    T *operator->();

    T *release();

    void reset(T *p);

    UniquePointer(UniquePointer &&other) noexcept;

    UniquePointer &operator=(UniquePointer &&other) noexcept;

    UniquePointer(const UniquePointer &other) = delete;

    UniquePointer &operator=(const UniquePointer &other) = delete;

private:
    T *pointer;
    D deleter;
};

template<typename T, typename D>
UniquePointer<T, D>::UniquePointer(T *t, const D &d) {
    std::cout << "UniquePointer " << this << " constructor called." << std::endl;
    this->pointer = t;
    this->deleter = d;
}

template<typename T, typename D>
UniquePointer<T, D>::~UniquePointer() {
    std::cout << "UniquePointer " << this << " destructor called." << std::endl;
    this->deleter(this->pointer);
}

template<typename T, typename D>
T &UniquePointer<T, D>::operator*() {
    return *this->pointer;
}

template<typename T, typename D>
T *UniquePointer<T, D>::operator->() {
    return this->pointer;
}

template<typename T, typename D>
T *UniquePointer<T, D>::release() {
    T *new_pointer = this->pointer;
    this->pointer = nullptr;
    return new_pointer;
}

template<typename T, typename D>
void UniquePointer<T, D>::reset(T *p) {
    if (this->pointer != p) {
        this->deleter(this->pointer);
        this->pointer = p;
    }
}

template<typename T, typename D>
UniquePointer<T, D>::UniquePointer(UniquePointer<T, D> &&other) noexcept {
    std::cout << "UniquePointer " << this << " move constructor called." << std::endl;
    this->pointer = other.release();
    this->deleter(std::move(other.deleter));
}

template<typename T, typename D>
UniquePointer<T, D> &UniquePointer<T, D>::operator=(UniquePointer<T, D> &&other) noexcept {
    std::cout << "UniquePointer " << this << " assignment operator called." << std::endl;
    if (this->pointer != other.pointer) {
        reset(other.release());
        this->deleter = std::move(other.deleter);
    }
    return *this;
}

#endif //CPP_UNIQUEPOINTER_H
