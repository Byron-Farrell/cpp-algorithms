#ifndef _Linked_List_H_
#define _Linked_List_H_

#include <string>

template <typename T>
struct Node {
    std::string key;
    T value;
    Node *next = nullptr;
};

template <typename L>
class LinkedList {
public:
    Node<L> *root;

    LinkedList();
    ~LinkedList();

    bool exists(std::string key) const;
    void add(std::string, L value);
    Node<L>* search(std::string key);
    void remove(std::string key);
private:
    Node<L>* get_tail(Node<L> *node) const;
};

#endif