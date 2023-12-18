#include <iostream>
#include "insertion_sort.h"


int main() {
    size_t size = 4;
    int nums[size] {5, 4, 2, 10};

    insertion_sort(nums, size);

    // Print sorted array
    std::cout << "[ ";
    for (int &num: nums) {
        std::cout << num << " ";
    }
    std::cout << "]"<<  std::endl;

    return 0;
}