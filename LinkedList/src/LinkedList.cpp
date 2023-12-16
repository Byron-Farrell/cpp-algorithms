#include <iostream>
#include "../includes/LinkedList.h"
#include "../includes/Node.h"


LinkedList::LinkedList() {
    start = nullptr;
    end = nullptr;
}

LinkedList::~LinkedList() {
    while (start != nullptr) {
        delete start;
        start = start->get_next();
    }
}

void LinkedList::prepend(int value) {
    Node *new_node = new Node(value, nullptr, start);

    if (start != nullptr) {
        start->set_previous(new_node);
    }

    if (end == nullptr) {
        end = new_node;
    }
    
    start = new_node;
}

void LinkedList::append(int value) {
    Node *new_node = new Node(value, end, nullptr);

    if (end != nullptr) {
        end->set_next(new_node);
    }

    if (start == nullptr) {
        start = new_node;
    }
     
    end = new_node;    
}

// void insert(size_t index, Node *n) {
//     if (n == nullptr) {
//         n = start;
//     }

//     if (index == 0) {
//         return n->get_value();
//     }

//     return at(index - 1, n->get_next());
// }

void LinkedList::display() {
    Node *current_node = start;
    
    std::cout << "nullptr <- ";
    while (current_node != nullptr) {
        if (current_node->get_next() == nullptr) {
            std::cout << current_node->get_value() << " -> ";
        }
        else {
            std::cout << current_node->get_value() << " <-> ";
        }
        current_node = current_node->get_next();
        
    }
    std::cout << "nullptr" << std::endl;
}

int LinkedList::at(size_t index, Node *n) {

    if (n == nullptr) {
        n = start;
    }

    if (index == 0) {
        return n->get_value();
    }

    return at(index - 1, n->get_next());
}