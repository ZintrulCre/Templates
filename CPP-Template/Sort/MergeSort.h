//
// Created by ZintrulCre on 2019-01-31.
//

#ifndef CPP_MERGESORT_H
#define CPP_MERGESORT_H

#include "../Include.h"
#include "../Printer.h"


template<typename T>
void MergeSort(vector<T> &nums, int i, int j);

template<typename T>
void Merge(vector<T> &nums, T &i, T &mid, T &j);

template<typename T>
void MergeSort(vector<T> &nums) {
    if (nums.size() == 0)
        return;
    MergeSort(nums, 0, static_cast<int>(nums.size() - 1));
}

template<typename T>
void MergeSort(vector<T> &nums, int i, int j) {
    if (i == j)
        return;
    int &&mid = i + (j - i) / 2;
    MergeSort(nums, i, mid);
    MergeSort(nums, mid + 1, j);
    Merge(nums, i, mid, j);
}

template<typename T>
void Merge(vector<T> &nums, T &i, T &mid, T &j) {
    vector<T> temp;
    int x = i, y = mid + 1;
    while (x <= mid && y <= j) {
        if (nums[x] < nums[y])
            temp.push_back(nums[x++]);
        else
            temp.push_back(nums[y++]);
    }
    while (x <= mid)
        temp.push_back(nums[x++]);
    while (y <= j)
        temp.push_back(nums[y++]);
    int t = 0;
    for (int index = i; index <= j; ++index)
        nums[index] = temp[t++];
}

#endif //CPP_MERGESORT_H
