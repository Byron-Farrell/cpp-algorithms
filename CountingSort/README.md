# Counting Sort

# Explanation

# Code Example
```c++
void counting_sort(int *array, size_t size) {
    int max {array[0]};
    int array_copy[size] {};

    for (int i = 0; i < size; i++) {
        array_copy[i] = array[i];
        if (array[i] > max) {
            max = array[i];
        }
    }

    size_t count_array_size = max + 1;
    int count_array[count_array_size] {};

    for (size_t i = 0; i < size; i++) {
        count_array[array[i]] += 1;
    }

    for (size_t i = 1; i < count_array_size; i++) {
        count_array[i] += count_array[i - 1];
    }

    for (int i = 0; i < size; i++) {
        int index = --count_array[array_copy[i]];
        array[index] = array_copy[i];
    }
}
```
# Time Complexity
Time Complexity: O(N+M), where N and M are the size of array[] and count_array[] respectively.