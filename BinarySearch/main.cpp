#include <iostream>
#include "binary_search.h"
#include "../BinaryTree/Node.h"


int main() {

    Node root {14};

    // Creating binary search tree
    root.setLeftChild(5);
    root.setRightChild(40);
    root.getLeftChild()->setLeftChild(3);
    root.getLeftChild()->setRightChild(9);
    root.getRightChild()->setLeftChild(39);
    root.getRightChild()->setRightChild(52);

    std::cout << std::boolalpha;
    std::cout << binary_search(&root, 14) << std::endl;     // true
    std::cout << binary_search(&root, 5) << std::endl;      // true
    std::cout << binary_search(&root, 40) << std::endl;     // true
    std::cout << binary_search(&root, 3) << std::endl;      // true
    std::cout << binary_search(&root, 9) << std::endl;      // true
    std::cout << binary_search(&root, 39) << std::endl;     // true
    std::cout << binary_search(&root, 52) << std::endl;     // true

    std::cout << binary_search(&root, 4) << std::endl;     // true
    std::cout << binary_search(&root, 100) << std::endl;     // true


    return 0;
}