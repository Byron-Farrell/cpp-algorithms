# Breadth First Search

## Code Example
*This BFS algorithm is for a full binary tree only*

```c++
void breadth_first_search(Node *node_ptr, std::queue<Node*> *queue_ptr) {
    // Base case
    if (node_ptr == nullptr) {
        return;
    }

    if (queue_ptr == nullptr) {
        queue_ptr = new std::queue<Node*> {};

        node_ptr->print();
        queue_ptr->push(node_ptr->left);
        queue_ptr->push(node_ptr->right);

        breadth_first_search(queue_ptr->front(), queue_ptr);
        delete queue_ptr;
    }
    else {
        node_ptr->print();
        queue_ptr->push(node_ptr->left);
        queue_ptr->push(node_ptr->right);

        queue_ptr->pop();
        breadth_first_search(queue_ptr->front(), queue_ptr);
    }
}
```
