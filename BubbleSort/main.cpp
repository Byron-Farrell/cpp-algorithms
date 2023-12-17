#include <iostream>
#include "bubble_sort.h"


void print(int *array, size_t size);

int main() {

    size_t size_of_array1 = 10;
    int array1[size_of_array1] {9, 3, 10, 7, 5, 6, 4, 8, 2, 1};

    size_t size_of_array2 = 5;
    int array2[size_of_array2] {-10, 20, 30, -40, -50};

    bubble_sort(array1, size_of_array1);
    print(array1, size_of_array1);
    std::cout << std::endl;

    bubble_sort(array1, size_of_array1, false);
    print(array1, size_of_array1);
    std::cout << std::endl;

    bubble_sort(array2, size_of_array2);
    print(array2, size_of_array2);
    std::cout << std::endl;

    return 0;
}

void print(int *array, size_t size) {
    std::cout << "[ ";

    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "]" << std::endl;
}