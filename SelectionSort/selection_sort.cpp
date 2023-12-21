#include "selection_sort.h"


void selection_sort(int *unsorted_array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        int min_index = i;
        for (size_t j = i + 1; j < size; j++) {
            if (unsorted_array[min_index] > unsorted_array[j]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = unsorted_array[i];
            unsorted_array[i] = unsorted_array[min_index];
            unsorted_array[min_index] = temp;
        }
    }
}