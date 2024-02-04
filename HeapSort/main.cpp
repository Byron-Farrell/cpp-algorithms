#include <iostream>
#include "HeapSort.h"


int main() {

    size_t size {10};

    int unsorted_array[10] {10, 50, 30, 40, 70, 100, 60, 20, 90, 80};

    for (size_t i = 0; i < size; i++) {
        std::cout << unsorted_array[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < get_height(unsorted_array, size); i++) {
        heapify(unsorted_array, size, 0);
    }

    heap_sort(unsorted_array, size);

    for (size_t i = 0; i < size; i++) {
        std::cout << unsorted_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}