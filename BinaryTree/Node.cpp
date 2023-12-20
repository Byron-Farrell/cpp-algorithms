#include <iostream>
#include "Node.h"


Node::Node(int value) : value {value} {
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

Node::~Node() {
    if (this->leftChild != nullptr) {
        int left = this->leftChild->value;
        delete this->leftChild;
    }

    if (this->rightChild != nullptr) {
        int right = this->rightChild->value;
        delete this->rightChild;
    }
}

int Node::getValue() const {
    return this->value;
}

Node* Node::getLeftChild() const {
    return this->leftChild;
}

Node* Node::getRightChild() const {
    return this->rightChild;
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setLeftChild(int value) {
    if (this->leftChild == nullptr) {
        this->leftChild = new Node {value};
    }
    else {
        this->leftChild->setValue(value);
    }
}

void Node::setRightChild(int value) {
    if (this->rightChild == nullptr) {
        this->rightChild = new Node {value};
    }
    else {
        this->rightChild->setValue(value);
    }
}
