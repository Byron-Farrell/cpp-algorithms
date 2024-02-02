#include <iostream>
#include "Node.h"


Node::Node(int value) : value {value} {}

void Node::print() const {
    std::cout << value << std::endl;
}