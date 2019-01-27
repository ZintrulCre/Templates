//
// Created by ZintrulCre on 2019-01-26.
//

#include "DataStructure.h"

bool operator<(const Interval &interval1, const Interval &interval2) {
    return interval1.start < interval2.start;
}
