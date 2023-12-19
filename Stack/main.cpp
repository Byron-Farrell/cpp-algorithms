#include <iostream>
#include "Stack.h"


int main() {
    Stack stack {5};

    stack.display();
    std::cout << std::endl;

    stack.push(100);
    stack.push(200);
    stack.push(300);
    stack.display();
    std::cout << std::endl;

    stack.pop();
    stack.display();
    std::cout << std::endl;

    stack.pop();
    stack.display();
    std::cout << std::endl;
      
    stack.pop();
    stack.display();


    return 0;
}