# Binary Tree

A binary tree is a hierarchical data structure of nodes. Each node has 2 children.

## Code Example

```c++
Node::Node(int value) : value {value} {
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

Node::~Node() {
    if (this->leftChild != nullptr) {
        int left = this->leftChild->value;
        delete this->leftChild;
    }

    if (this->rightChild != nullptr) {
        int right = this->rightChild->value;
        delete this->rightChild;
    }
}

int Node::getValue() const {
    return this->value;
}

Node* Node::getLeftChild() const {
    return this->leftChild;
}

Node* Node::getRightChild() const {
    return this->rightChild;
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setLeftChild(int value) {
    if (this->leftChild == nullptr) {
        this->leftChild = new Node {value};
    }
    else {
        this->leftChild->setValue(value);
    }
}

void Node::setRightChild(int value) {
    if (this->rightChild == nullptr) {
        this->rightChild = new Node {value};
    }
    else {
        this->rightChild->setValue(value);
    }
}
```

## Creating a binary tree

```c++
int main() {

    Node root {10};
    root.setLeftChild(20);
    root.setRightChild(30);
    root.getLeftChild()->setLeftChild(40);
    root.getLeftChild()->setRightChild(50);
    root.getRightChild()->setLeftChild(60);
    root.getRightChild()->setRightChild(70);

    return 0;
}
```

The above code will create the binary tree below.

```
     10          
     /\            
    /  \                               
  20    30      
  /\    /\       
40 50  60 70    
```