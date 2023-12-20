#ifndef _NODE_H_
#define _NODE_H_


class Node {
public:
    // Initialization Constructor
    Node(int value);
    // Destructor
    ~Node();

    // Getters
    int getValue() const;
    Node* getLeftChild() const;
    Node* getRightChild() const;

    // Setters
    void setValue(int value);
    void setLeftChild(int value);
    void setRightChild(int value);
private:
    int value;
    Node *leftChild;
    Node *rightChild;
};


#endif
