#include <iostream>
#include "../BinaryTree/Node.h"


void pre_order_depth_first_search(Node *node) {

    if (node == nullptr) {
        return;
    }

    std::cout << node->getValue() << " ";

    pre_order_depth_first_search(node->getLeftChild());
    pre_order_depth_first_search(node->getRightChild());
};

void in_order_depth_first_search(Node *node) {

    if (node == nullptr) {
        return;
    }

    in_order_depth_first_search(node->getLeftChild());
    std::cout << node->getValue() << " ";
    in_order_depth_first_search(node->getRightChild());
};

void post_order_depth_first_search(Node *node) {

    if (node == nullptr) {
        return;
    }

    post_order_depth_first_search(node->getLeftChild());
    post_order_depth_first_search(node->getRightChild());

    std::cout << node->getValue() << " ";
}