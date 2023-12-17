#include <iostream>
#include "bubble_sort.h"

void bubble_sort(int array[], size_t size, bool ascending) {
    int count = 0;

    if (ascending) {
        for (size_t i = 0; i < size; i++) {
            bool swapped = false;

            for (size_t j = 0; j < size - 1; j++) {
                count++;
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;

                    swapped = true;
                }
            }

            if (!swapped) {
                std::cout << count << std::endl;
                return;
            }
        }
    }
    else {
        // Descending
        for (size_t i = 0; i < size; i++) {
            bool swapped = false;
            
            for (size_t j = 0; j < size - 1; j++) {
                count++;
                if (array[j] < array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;

                    swapped = true;
                }
            }

            if (!swapped) {
                std::cout << count << std::endl;
                return;
            }
        }
    }

    std::cout << count << std::endl;
    
}