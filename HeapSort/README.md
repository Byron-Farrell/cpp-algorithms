# Heap Sort

## Code Example

```c++
int main() {

    size_t size {10};

    int unsorted_array[10] {10, 50, 30, 40, 70, 100, 60, 20, 90, 80};

    for (size_t i = 0; i < size; i++) {
        std::cout << unsorted_array[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < get_height(unsorted_array, size); i++) {
        heapify(unsorted_array, size, 0);
    }

    heap_sort(unsorted_array, size);

    for (size_t i = 0; i < size; i++) {
        std::cout << unsorted_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

```c++
void heapify(int *array, size_t size, size_t index) {

    if (index >= size) {
        return;
    }

    size_t left = (index * 2) + 1;
    size_t right = (index * 2) + 2;

    heapify(array, size,left);
    heapify(array, size, right);

    if (left < size && array[left] > array[index]) {
        int temp = array[left];
        array[left] = array[index];
        array[index] = temp;
    }


    if (right < size && array[right] > array[index]) {
        int temp = array[right];
        array[right] = array[index];
        array[index] = temp;
    }
}

int get_height(int *array, size_t size, size_t index, int height) {

    if (index >= size) {
        return height;
    }

    size_t left_child_index = (index * 2) + 1;
    return get_height(array, size, left_child_index, ++height);
}

void heap_sort(int *unsorted_array, size_t size) {

    if (size <= 0) {
        return;
    }

    heapify(unsorted_array, size, 0);


    int max = unsorted_array[0];
    unsorted_array[0] = unsorted_array[size - 1];
    unsorted_array[size - 1] = max;

    heap_sort(unsorted_array, size - 1);
}
```