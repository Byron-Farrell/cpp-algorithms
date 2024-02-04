#include <iostream>


class Heap {
public:
    int *heap;
    size_t heap_size;
    size_t heap_element_count = 0;
    Heap(size_t heap_size);
    ~Heap();

    void insert(int number);
    int max_pop();
    bool is_empty() const;
    void display() const;
    void max_backtrack(size_t index);
    void max_heapify(size_t index);
};