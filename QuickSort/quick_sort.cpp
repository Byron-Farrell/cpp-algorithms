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

            }
            pivot++;

        }
    }

    int temp = array[size - 1];
    array[size - 1] = array[pivot];
    array[pivot] = temp;

    if (pivot == 0) {
        quick_sort(array, 0);
        quick_sort(array + 1, size - 1);
    }
    else {
        quick_sort(array, pivot);
        quick_sort(array + pivot + 1, size - pivot - 1);
    }
}