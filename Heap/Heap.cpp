#ifndef _HEAP_H_
#define _HEAP_H_


#include "Heap.h"


Heap::Heap(size_t heap_size) : heap_size {heap_size} {
    heap = new int[heap_size] {};
    this->heap_size = heap_size;
}

Heap::~Heap() {
    delete [] heap;
}

void Heap::display() const {
    for (size_t i = 0; i < heap_element_count; i++) {
        std::cout << heap[i] << " ";
    }
    std::cout << std::endl;
}

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

void Heap::max_backtrack(size_t index) {

    if (index <= 0) {
        return;
    }

    size_t parent_index {0};

    if (index % 2 == 1) {
        parent_index = (index - 1) / 2;
    }
    else {
        parent_index = (index - 2) / 2;
    }

    if (heap[index] > heap[parent_index]) {
        int temp = heap[index];
        heap[index] = heap[parent_index];
        heap[parent_index] = temp;
        max_backtrack(parent_index);
    }
}

void Heap::insert(int number) {

    if (heap_size <= heap_element_count) {
        std::cout << "Heap is full" << std::endl;
    }

    heap[heap_element_count] = number;
    max_backtrack(heap_element_count);
    heap_element_count += 1;
}


bool Heap::is_empty() const {
    return heap_element_count == 0;
}

int Heap::max_pop() {
    int max = heap[0];

    heap_element_count -= 1;

    // shift array back
    for (size_t i = 0; i < heap_element_count; i++) {
        heap[i] = heap[i + 1];
    }

    max_heapify(0);

    return max;
}

#endif
