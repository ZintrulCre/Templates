//
// Created by Zhengyu Chen on 2019-08-07.
//

#include <iostream>

#ifndef CPP_OBJECT_H
#define CPP_OBJECT_H

class Object {
public:
    Object() { std::cout << "Construct" << std::endl; }

    Object(const Object &other) { std::cout << "Copy" << std::endl; }

    Object(Object &&other) noexcept { std::cout << "Move" << std::endl; }

    ~Object() { std::cout << "Destruct" << std::endl; }

    void Print() { std::cout << "Print" << std::endl; }
};

//Object CopyObject() {
//    Object obj;
//    return obj;
//}

//Object MoveObject() {
//    Object obj;
//    return move(obj);
//}

Object &&MoveObject() {
    Object obj;
    return move(obj);
}

Object CopyObject(bool flag) {
    Object obj1, obj2;
    if (flag)
        return obj1;
    return obj2;
}

#endif //CPP_OBJECT_H
