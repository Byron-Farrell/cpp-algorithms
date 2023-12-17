#ifndef _NODE_H_
#define _NODE_H_

class Node {

public:
    
    Node(int value, Node *previous = nullptr, Node *next = nullptr);

    Node* get_previous() const { return previous; };
    Node* get_next() const { return next; };
    int get_value() const { return value; };
    
    void set_value(int value) { this->value = value; };
    void set_next(Node *next) { this->next = next; };
    void set_previous(Node *previous) { this->previous = previous; };

private:
    int value;
    Node *previous;
    Node *next;
};

#endif