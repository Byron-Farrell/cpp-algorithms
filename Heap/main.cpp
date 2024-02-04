#include <iostream>
#include "Heap.h"


int main() {

    Heap heap {10};
    heap.insert(10);
    heap.insert(50);
    heap.insert(30);
    heap.insert(40);
    heap.insert(70);
    heap.insert(100);
    heap.insert(60);
    heap.insert(20);
    heap.insert(90);
    heap.insert(80);


//    heap.display();
//    heap.max_heapify(0);
    for (size_t i = 0; i < 10; i++) {
        std::cout << heap.max_pop() << std::endl;
    }

    return 0;
}