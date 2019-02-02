//
// Created by ZintrulCre on 2019-01-27.
//

#ifndef CPP_SORT_H
#define CPP_SORT_H

#include "../Include.h"

void BubbleSort(vector<int> &nums) {
    auto size = nums.size();
    for (int i = size - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

void InsertionSort(vector<int> &nums) {
    for (int i = 1; i < nums.size(); ++i) {
        int temp = nums[i];
        int j = i - 1;
        while (j >= 0 && temp < nums[j]) {
            nums[j + 1] = nums[j];
            --j;
        }
        nums[j + 1] = temp;
    }
}

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
#endif //CPP_SORT_H
