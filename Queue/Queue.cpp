#include <iostream>
#include <cstdlib> 
#include "Queue.h"


Queue::Queue(size_t size) : size {size} {
    // TODO: Add exception if size is less than 0

    queue = (int*) malloc(sizeof(int) * this->size);
    end_index = 0;
}

void Queue::enqueue(int value) {
    if (end_index == size - 1) {
        std::cout << "Queue is full" << std::endl;
        return;
    }

    
    queue[end_index] = value;
    end_index++;

    std::cout << "Added " << value << " to the queue" << std::endl;
}

int Queue::dequeue() {
    
    if (end_index == 0) {
        std::cout << "Queue is empty" << std::endl;
        return 0;
    }

    int dequeued_value = queue[0];

    // Shift elements back one space
    for (size_t i = 0; i < end_index; i++) {
        queue[i] = queue[i + 1];
    }

    end_index--;

    std::cout << "Popped " << dequeued_value << " off queue" << std::endl;
    
    return dequeued_value;
}

void Queue::display() {

    if (end_index == 0) {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    std::cout << "[ ";
    for (size_t i = 0; i < end_index; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << "]" << std::endl;
}


