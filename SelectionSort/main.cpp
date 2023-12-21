#include <iostream>
#include "selection_sort.h"


int main() {
    size_t size = 5;
    int nums[size] {64, 25, 12, 22, 11};

    std::cout << "[ ";
    for (size_t i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << "]" << std::endl;

    selection_sort(nums, size);

    std::cout << "[ ";
    for (size_t i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << "]" << std::endl;
    return 0;
}