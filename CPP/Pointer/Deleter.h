//
// Created by Zhengyu Chen on 2019-08-07.
//

#ifndef CPP_DELETER_H
#define CPP_DELETER_H

class Deleter {
public:
    template<typename T>
    void operator()(T *p) {
        delete p;
    }
};

#endif //CPP_DELETER_H
