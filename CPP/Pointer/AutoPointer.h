//
// Created by Zhengyu Chen on 2019-08-07.
//
#include <iostream>

#ifndef CPP_AUTOPOINTER_H
#define CPP_AUTOPOINTER_H

template<typename T>
class AutoPointer {
public:
    explicit AutoPointer(T *t);

    ~AutoPointer();

    T &operator*();

    T *operator->();

    T *release();

    void reset(T *p);

    AutoPointer(AutoPointer<T> &other);

    AutoPointer<T> &operator=(AutoPointer<T> const &other);

private:
    T *pointer;
};

template<typename T>
AutoPointer<T>::AutoPointer(T *t) {
    std::cout << "AutoPointer " << this << " constructor called." << std::endl;
    this->pointer = t;
}

template<typename T>
AutoPointer<T>::~AutoPointer() {
    std::cout << "AutoPointer " << this << " destructor called." << std::endl;
    delete this->pointer;
}

template<typename T>
T &AutoPointer<T>::operator*() {
    return *this->pointer;
}

template<typename T>
T *AutoPointer<T>::operator->() {
    return this->pointer;
}

template<typename T>
T *AutoPointer<T>::release() {
    T *new_pointer = this->pointer;
    this->pointer = nullptr;
    return new_pointer;
}

template<typename T>
void AutoPointer<T>::reset(T *p) {
    if (this->pointer != p) {
        delete this->pointer;
        this->pointer = p;
    }
}

template<typename T>
AutoPointer<T>::AutoPointer(AutoPointer<T> &other) {
    std::cout << "AutoPointer " << this << " copy constructor called." << std::endl;
    this->pointer = other.release();
}

template<typename T>
AutoPointer<T> &AutoPointer<T>::operator=(AutoPointer<T> const &other) {
    std::cout << "AutoPointer " << this << " assignment operator called." << std::endl;
    if (this->pointer != other.pointer)
        this->reset(other.release());
    return *this;
}

#endif //CPP_AUTOPOINTER_H