#include "includes/LinkedList.h"


int main() {
    LinkedList linked_list {};

    linked_list.append(200);
    linked_list.prepend(25);
    linked_list.insert(100, 1);
    linked_list.display();

    return 0;
}