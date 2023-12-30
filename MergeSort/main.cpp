#include <iostream>
#include "merge_sort.h"


int main() {

    size_t size {4};
    int unsorted_array[size] {38, 27, 43, 10};

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << unsorted_array[i] << " ";
    }
    std::cout << "]" << std::endl;

    int *sorted_array = merge_sort(unsorted_array, size);

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << sorted_array[i] << " ";
    }
    std::cout << "]" << std::endl;

    delete [] sorted_array;

    return 0;
}