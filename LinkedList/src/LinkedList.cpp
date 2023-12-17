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

    increment_size();
}

void LinkedList::append(int value) {
    Node *new_node = new Node(value, end, nullptr);

    if (end != nullptr) {
        end->set_next(new_node);
    }

    if (start == nullptr) {
        start = new_node;
    }
    
    this->end = new_node;

    increment_size();
}

void LinkedList::insert(int value, size_t index, Node *n) {
    
    if (index >= size) {
        append(value);
        return;
    }

    if (n == nullptr) {
        n = start;
    }

    if (index == 0) {
        Node *node_before_new_node = n->get_previous();
        Node *new_node = new Node { value, node_before_new_node, n };
        
        n->set_previous(new_node);

        if (node_before_new_node != nullptr) {
            node_before_new_node->set_next(new_node);
        }
        else {
            start = new_node;
        }
        
        increment_size();
        
        return;
    }

    return insert(value, index - 1, n->get_next());
}

void LinkedList::display() const {
    Node *current_node = start;
    
    if (size == 0) {
        std::cout << "Linked list is empty." << std::endl;
        return;
    }
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

int LinkedList::at(size_t index, Node *n) const {

    // TODO: Add exception handling for empty list.
    if (index >= size) {
        return end->get_value();
    }

    if (n == nullptr) {
        n = start;
    }

    if (index == 0) {
        return n->get_value();
    }

    return at(index - 1, n->get_next());
}