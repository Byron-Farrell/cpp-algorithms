#include <iostream>


void heapify(int *array, size_t size, size_t index);
int get_height(int *array, size_t size, size_t index = 0, int height = 0);
void heap_sort(int *unsorted_array, size_t size);