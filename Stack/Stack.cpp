#include "Stack.h"


Stack::Stack(size_t size) : size {size} {
    this->top = 0;
    this->stack = new int[size];
}

Stack::~Stack() {
    delete [] this->stack;
}

void Stack::push(int value) {
    if (this->isFull()) {
        throw "Stack is full";
    }

    this->stack[this->top] = value;
    this->top++; 
}

int Stack::pop() {
    if (this->isEmpty()) {
        throw "Stack is empty";
    }

    this->top--;
    return this->stack[this->top];
}

bool Stack::isEmpty() {
    if (this->top == 0) {
        return true;
    }

    return false;
}

bool Stack::isFull() {
    if (this->top >= this->size - 1) {
        return true;
    }

    return false;
}

void Stack::display() {
    if (this->isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    for (int i = top - 1; i >= 0; i--) {
        std::cout << "[" << this->stack[i] << "]" << std::endl;
    }
}