// Basic implementation of a fixed sized stack
#include <iostream>


class Stack {

public:
    Stack(size_t size);
    ~Stack();

    void push(int value);
    int pop();
    void display();

private:
    int *stack;
    size_t size;
    size_t top;

    bool isEmpty();
    bool isFull();
};