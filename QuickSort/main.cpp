#include <iostream>
#include "quick_sort.h"


int main() {
    int size {8};
    int array[size] {8, 7, 6, 5, 4, 3, 2, 1};

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;

    quick_sort(array, size);

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;

//    quick_sort(array, size);
//
//    std::cout << "[ ";
//    for (int i = 0; i < size; i++) {
//        std::cout << array[i] << " ";
//    }
//    std::cout << "]" << std::endl;

    return 0;
}