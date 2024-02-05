#include "../includes/LinkedList.h"

LinkedList::LinkedList() : root {nullptr} {}

LinkedList::~LinkedList() {
    while (root != nullptr) {
        Node* temp = root->next;
        delete root;
        root = temp;
    }
}

Node* LinkedList::get_tail(Node *node) const {
    if (node == nullptr) {
        return node;
    }

    if (node->next == nullptr) {
        return node;
    }

    return get_tail(node->next);
}

void LinkedList::add(std::string key, int value) {

    Node *new_node = new Node;
    new_node->key = key;
    new_node->value = value;

    if (root == nullptr) {
        root = new_node;
    }
    else {
        Node *tail = get_tail(root);
        tail->next = new_node;
    }
}

Node* LinkedList::search(std::string key) {

    Node *current_node = root;

    while (current_node != nullptr && current_node->key != key) {
        current_node = current_node->next;
    }

    return current_node;
}

void LinkedList::remove(std::string key) {

    if (root->key == key) {
        Node *temp = root;
        root = root->next;
        delete temp;
        return;
    }

    Node *current_node = root;

    while (current_node != nullptr && current_node->key != key) {

        if (current_node->next == nullptr) {
            break;
        }

        if (current_node->next->key == key) {
            Node *temp = current_node->next;
            current_node->next = current_node->next->next;
            delete temp;
            break;
        }
        current_node = current_node->next;
    }
}