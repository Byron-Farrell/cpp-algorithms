#include <iostream>

int* merge_sort(int *array, size_t size) {


    if (size == 1) {
        return new int {array[0]};
    }

    size_t left_size {size / 2};
    size_t right_size {size - left_size};

    int *left_array = merge_sort(array, left_size);
    int *right_array = merge_sort(array + left_size, right_size);



    // merge left and right (while)
    size_t left_index = 0;
    size_t right_index = 0;

    int *merged_array = new int[size];

    while (left_index < left_size && right_index < right_size) {
        if (left_array[left_index] < right_array[right_index]) {
            *merged_array = left_array[left_index];
            merged_array++;
            left_index++;
        }
        else {
            *merged_array = right_array[right_index];
            merged_array++;
            right_index++;
        }
    }

    if (left_index < left_size) {
        for (size_t i = left_index; i < left_size; i++) {
            *merged_array = left_array[i];
            merged_array++;
        }
    }

    if (right_index < right_size) {
        for (size_t i = right_index; i < right_size; i++) {
            *merged_array = right_array[i];
            merged_array++;
        }
    }

    delete [] left_array;
    delete [] right_array;

    return merged_array - size;
}
