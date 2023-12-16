#include <iostream>
#include "../includes/Node.h"


Node::Node(int value, Node *previous, Node *next) {
    this->value = value;
    this->previous = previous;
    this->next = next;
}


