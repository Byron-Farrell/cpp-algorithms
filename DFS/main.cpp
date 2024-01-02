#include <iostream>
#include "depth_first_search.h"
#include "../BinaryTree/Node.h"


int main() {

    Node root {1};
    root.setLeftChild(2);
    root.setRightChild(3);
    root.getLeftChild()->setLeftChild(4);
    root.getLeftChild()->setRightChild(5);

    std::cout << "Pre-Order" << std::endl;
    pre_order_depth_first_search(&root);
    std::cout << std::endl;

    std::cout << "In-Order" << std::endl;
    in_order_depth_first_search(&root);
    std::cout << std::endl;

    std::cout << "Post-Order" << std::endl;
    post_order_depth_first_search(&root);
    std::cout << std::endl;

    return 0;
}