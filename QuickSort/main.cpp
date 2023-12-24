#include <iostream>
#include "quick_sort.h"


int main() {
    int size {8};
    int array[size] {8, 7, 6, 5, 4, 3, 2, 1};


    quick_sort(array, size);

    int a[3] {2, 1, 3};
//    quick_sort(a, 3);

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;


    return 0;
}