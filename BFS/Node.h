//
// Created by byron on 01/02/24.
//

#ifndef _NODE_H
#define _NODE_H


class Node {
public:
    Node(int value);
    int value;
    Node *right = nullptr;
    Node *left = nullptr;
    void print() const;
};

#endif
