//
// Created by ZintrulCre on 2019-04-17.
//

#ifndef CPP_HEAPSORT_H
#define CPP_HEAPSORT_H

#include "../Include.h"

void AdjustHeap(vector<int> &nums, int &sub, int &size) {
    int i = sub, j = i * 2 + 1;
    while (j < size) {
        if (j + 1 < size && nums[j] > nums[j + 1])
            ++j;
        if (nums[i] < nums[j])
            break;
        else {
            swap(nums[i], nums[j]);
            i = j;
        }
        j = j * 2 + 1;
    }
}

void HeapSort(vector<int> &nums) {
    int size = nums.size();
    for (int i = size / 2 - 1; i >= 0; --i) {
        AdjustHeap(nums, i, size);
    }
}

#endif //CPP_HEAPSORT_H
