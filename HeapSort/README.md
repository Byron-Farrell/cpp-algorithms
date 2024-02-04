# Heap Sort

## Code Example

### heapify

```c++
void Heap::max_heapify(size_t index) {

    if (index >= heap_element_count) {
        return;
    }

    size_t left = (index * 2) + 1;
    size_t right = (index * 2) + 2;

    if (left < heap_element_count && heap[left] > heap[index]) {
        int temp = heap[left];
        heap[left] = heap[index];
        heap[index] = temp;
    }
    else if (right < heap_element_count && heap[right] > heap[index]) {
        int temp = heap[right];
        heap[right] = heap[index];
        heap[index] = temp;
    }

    max_heapify(left);
    max_heapify(right);
}
```

