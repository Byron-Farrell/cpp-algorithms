#include <iostream>
#include "counting_sort.h"

int main() {
    size_t size {8};
    int array[size] {2, 5, 3, 0, 2, 3, 0, 3};

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;

    counting_sort(array, size);

    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;
}
