# Binary Search

## Code Example
```c++
bool binary_search(Node *binary_search_tree, int search_value) {

    if (binary_search_tree == nullptr) {
        return false;
    }

    int current_node_value = binary_search_tree->getValue();

    if (current_node_value == search_value) {
        return true;
    }

    if (search_value < current_node_value) {
        return binary_search(binary_search_tree->getLeftChild(), search_value);
    }

    return binary_search(binary_search_tree->getRightChild(), search_value);
}
```