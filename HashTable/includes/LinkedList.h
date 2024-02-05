#ifndef _Linked_List_H_
#define _Linked_List_H_

#include <string>


struct Node {
    std::string key;
    int value;
    Node *next = nullptr;
};

class LinkedList {
public:
    Node *root;

    LinkedList();
    ~LinkedList();

    void add(std::string, int value);
    Node* search(std::string key);
    void remove(std::string key);
private:
    Node* get_tail(Node* node) const;
};

#endif