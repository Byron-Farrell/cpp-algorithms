#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>
#include "Node.h"


class LinkedList {

public:
    LinkedList();
    ~LinkedList();
    
    void prepend(int value);
    void append(int value);
    void insert(int value, size_t index, Node *n = nullptr);
    void remove(size_t index, Node *n = nullptr);
    int at(size_t index, Node *n = nullptr);

    void display();

private:
    Node *start;
    Node *end;
    size_t size = 0;

    void increment_size() { size = ++size; };
    void decrement_size() { size == 0 ? 0 : --size; };
};

#endif