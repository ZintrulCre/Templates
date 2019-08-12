//
// Created by ZintrulCre on 2019-04-17.
//

#ifndef CPP_QUICKSORT_H
#define CPP_QUICKSORT_H

#include "../Include.h"

template<typename T>
void QuickSort(vector<T> &nums, int x, int y) {
    if (x >= y - 1)
        return;
    int pivot = nums[x], i = x, j = y - 1;
    while (i < j) {
        while (i < j && nums[j] >= pivot)
            --j;
        while (i < j && nums[i] <= pivot)
            ++i;
        swap(nums[i], nums[j]);
        if(i == j && nums[i] < nums[x])
            swap(nums[x], nums[i]);
    }
    QuickSort(nums, x, i);
    QuickSort(nums, i + 1, y);
}

template<typename T>
void QuickSort(vector<T> &nums) {
    QuickSort(nums, 0, nums.size());
}

#endif //CPP_QUICKSORT_H
