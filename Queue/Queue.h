#include <iostream>


class Queue {

public:
    Queue(size_t size);

    void enqueue(int value);
    int dequeue();
    void display();

private:
    int *queue;
    size_t size;
    unsigned int end_index;
};