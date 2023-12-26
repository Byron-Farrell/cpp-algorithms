#include <iostream>
#include "quick_sort.h"


int main() {
    int size {4};
    int array[size] {4, 3, 3, 1};

    quick_sort(array, size);

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;


    return 0;
}