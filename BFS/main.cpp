#include <iostream>
#include <queue>

#include "Node.h"

void breadth_first_search(Node *node_ptr, std::queue<Node*> *queue_ptr = nullptr);

int main() {
    // create binary tree

    Node n1 {10};
    Node n2 {20};
    Node n3 {30};
    Node n4 {40};
    Node n5 {50};
    Node n6 {60};
    Node n7 {70};

    n1.left = &n2;
    n1.right = &n3;
    n2.left = &n4;
    n2.right = &n5;
    n3.left = &n6;
    n3.right = &n7;

    breadth_first_search(&n1);
    return 0;
}

void breadth_first_search(Node *node_ptr, std::queue<Node*> *queue_ptr) {
    // Base case
    if (node_ptr == nullptr) {
        return;
    }

    if (queue_ptr == nullptr) {
        queue_ptr = new std::queue<Node*> {};

        node_ptr->print();
        queue_ptr->push(node_ptr->left);
        queue_ptr->push(node_ptr->right);

        breadth_first_search(queue_ptr->front(), queue_ptr);
        delete queue_ptr;
    }
    else {
        node_ptr->print();
        queue_ptr->push(node_ptr->left);
        queue_ptr->push(node_ptr->right);

        queue_ptr->pop();
        breadth_first_search(queue_ptr->front(), queue_ptr);
    }
}
