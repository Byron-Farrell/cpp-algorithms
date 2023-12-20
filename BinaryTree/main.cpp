#include <iostream>
#include "Node.h"


int main() {

    Node root {10};
    root.setLeftChild(20);
    root.setRightChild(30);
    root.getLeftChild()->setLeftChild(40);
    root.getLeftChild()->setRightChild(50);
    root.getRightChild()->setLeftChild(60);
    root.getRightChild()->setRightChild(70);

    return 0;
}