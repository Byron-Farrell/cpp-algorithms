#ifndef _HEAP_H_
#define _HEAP_H_


#include "HeapSort.h"


void heapify(int *array, size_t size, size_t index) {

    if (index >= size) {
        return;
    }

    size_t left = (index * 2) + 1;
    size_t right = (index * 2) + 2;

    heapify(array, size,left);
    heapify(array, size, right);

    if (left < size && array[left] > array[index]) {
        int temp = array[left];
        array[left] = array[index];
        array[index] = temp;
    }


    if (right < size && array[right] > array[index]) {
        int temp = array[right];
        array[right] = array[index];
        array[index] = temp;
    }
}

int get_height(int *array, size_t size, size_t index, int height) {

    if (index >= size) {
        return height;
    }

    size_t left_child_index = (index * 2) + 1;
    return get_height(array, size, left_child_index, ++height);
}

void heap_sort(int *unsorted_array, size_t size) {

    if (size <= 0) {
        return;
    }

    heapify(unsorted_array, size, 0);


    int max = unsorted_array[0];
    unsorted_array[0] = unsorted_array[size - 1];
    unsorted_array[size - 1] = max;

    heap_sort(unsorted_array, size - 1);
}


#endif
