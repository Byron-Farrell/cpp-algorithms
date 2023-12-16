#include "includes/LinkedList.h"
#include <iostream>
#include <vector>
#include "includes/Node.h"


int main() {
    LinkedList nums {};

    nums.prepend(50);
    nums.prepend(500);
    nums.prepend(88);


    nums.display();

    std::cout << nums.at(4) << std::endl;

    return 0;
}