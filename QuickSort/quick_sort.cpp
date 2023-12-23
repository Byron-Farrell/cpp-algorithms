#include <iostream>

// 7 2 1 6 8 5 3 4      i = 0
// 7 2 1 6 8 5 3 4      i = 1
    // 2 7 1 6 8 5 3 4  swap        pivot++ (1)
// 2 7 1 6 8 5 3 4      i = 2
    // 2 1 7 6 8 5 3 4  swap        pivot++ (2)
// 2 1 7 6 8 5 3 4      i = 3
// 2 1 7 6 8 5 3 4      i = 4
// 2 1 7 6 8 5 3 4      i = 5
// 2 1 7 6 8 5 3 4      i = 6
    // 2 1 7 6 8 5 3 4  swap    pivot++ (3)
// 2 1 3 6 8 5 7 4      i = 7
    // 2 1 3 4 8 5 7 6  swap with pivot, pivot++ (4)

// 2 1 3                i = 0
    // 1 2 3
// 1 2 3                i = 1

void quick_sort(int *array, int size) {

    if (size <= 1) {
        return;
    }

    int pivot = 0;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] < array[size - 1]) {
            if (i != 0) {
                int temp = array[i];
                array[i] = array[pivot];
                array[pivot] = temp;
                pivot++;

            }

        }
    }

    int temp = array[size - 1];
    array[size - 1] = array[pivot];
    array[pivot] = temp;

    if (pivot == 0) {
        quick_sort(array, 1);
        quick_sort(array + 1, size - 1);
    }
    else {
        quick_sort(array, pivot - 1);
        quick_sort(array + pivot, size - pivot);
    }

}