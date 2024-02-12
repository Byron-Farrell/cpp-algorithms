#include "../includes/LinkedList.h"
#include "../includes/Graph.h"

template <typename T>
LinkedList<T>::LinkedList() : root {nullptr} {}

template <typename T>
LinkedList<T>::~LinkedList() {
    while (root != nullptr) {
        Node<T>* temp = root->next;
        delete root;
        root = temp;
    }
}

template <typename T>
Node<T>* LinkedList<T>::get_tail(Node<T> *node) const {
    if (node == nullptr) {
        return node;
    }

    if (node->next == nullptr) {
        return node;
    }

    return get_tail(node->next);
}

template <typename T>
void LinkedList<T>::add(std::string key, T value) {

    Node<T> *new_node = new Node<T>;
    new_node->key = key;
    new_node->value = value;

    if (root == nullptr) {
        root = new_node;
    }
    else {
        Node<T> *tail = get_tail(root);
        tail->next = new_node;
    }
}

template <typename T>
Node<T>* LinkedList<T>::search(std::string key) {

    Node<T> *current_node = root;

    while (current_node != nullptr && current_node->key != key) {
        current_node = current_node->next;
    }

    return current_node;
}

template <typename T>
bool LinkedList<T>::exists(std::string key) const {
    Node<T> *current_node = root;

    while (current_node != nullptr && current_node->key == key) {
        return true;
    }

    return false;
}
template <typename T>
void LinkedList<T>::remove(std::string key) {

    if (root->key == key) {
        Node<T> *temp = root;
        root = root->next;
        delete temp;
        return;
    }

    Node<T> *current_node = root;

    while (current_node != nullptr && current_node->key != key) {

        if (current_node->next == nullptr) {
            break;
        }

        if (current_node->next->key == key) {
            Node<T> *temp = current_node->next;
            current_node->next = current_node->next->next;
            delete temp;
            break;
        }
        current_node = current_node->next;
    }
}

template class LinkedList<int>;
template class LinkedList<Vertex*>;