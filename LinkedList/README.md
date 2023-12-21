# Linked List

One of the biggest downsides to C++ arrays is they have to be assigned a size when they are initialized. This means you have to know the exact size of the array you want to create. Assigning a size to an array might not be possible if you need the array to dynamically increase in size during runtime. You could create a massive array but this would be a waste of memory if only 10% of the array is being used. Vectors solve this issue but each time you add an element to the vector it allocates a new contiguous block of memory, inserts the new vector into this memory block and frees up the previous memory block. This causes a lot of overhead if you are inserting and deleting elements in the vector.

In comes linked lists to the rescue. Linked lists can dynamically add new nodes (*you can think of a node in a linked list as an element in an array*) and don't rewrite the nodes to a new memory block when a node is inserted or deleted.

**Array vs LinkedList**
| Array                                                                     | Linked List                                                               |
| ------------------------------------------------------------------------- | ------------------------------------------------------------------------- |
| Fixed Size                                                                | Dynamic size                                                              |
| Size calculated during compile time                                       | Size can be dynamically increased during run time                         |
| Uses less memory space                                                    | uses more memory space                                                    |
| Stored in contiguous memory block                                         | Not stored in contiguous memory block                                     |
| Elements can be accessed easily                                           | Linked list has to be traversed to get node `O(n)`                        |

**std::vector vs LinkedList**
| std::vector                                                               | Linked List                                                               |
| ------------------------------------------------------------------------- | ------------------------------------------------------------------------- |
| Uses less memory space                                                    | uses more memory space                                                    |
| Stored in contiguous memory block                                         | Not stored in contiguous memory block                                     |
| Elements can be accessed easily                                           | Linked list has to be traversed to get node `O(n)`                        |
| Inserts require a new contiguous block of memory to be allocated          | Inserts don't require memory reallocation. New nodes created in the heap  |  


## Code Example

First, let's have a look at how a linked list adds a new node.

1: When initializing the linked list, two pointers to a node will be created and initialized to a `nullptr`.The `start` pointer variable will point to the first node in the linked list and the `end` pointer variable will point to the last node in the linked list.

Let's create an empty linked list.

```c++
#include "includes/LinkedList.h"


int main() {
    LinkedList linked_list {};

    return 0;
}
```

We now have an empty linked list. Inside the `LinkedList` object are two member variables `start` and `end`. Right now they are both pointing to `nullptr`.

2: Let's add a node to the end of the list.

```c++
#include "includes/LinkedList.h"
#include "includes/Node.h"


int main() {
    LinkedList linked_list {};

    linked_list.append(200);

    return 0;
}
```

the `LinkedList` object member variables `start` and `end` will now both be pointing to the node that contains the value 200.

let's have a look at what the linked list looks like.

```c++
linked_list.display();
```

the above code will output the following: `nullptr <- 200 -> nullptr`.

3: lets add a node to the start of the linked list and display the linked list.

```c++
#include "includes/LinkedList.h"


int main() {
    LinkedList linked_list {};

    linked_list.append(200);
    linked_list.prepend(25);
    linked_list.display();

    return 0;
}
```

This will display `nullptr <- 25 <-> 200 -> nullptr`. 

So what is going on here? Firstly the pointer to the first node in the linked list `start` is now pointing to the node 25 and the pointer to the end of the list `end` is still pointing to the node 100. 

Node 25 contains a pointer variable `next` which points to the next node in the list which is node 100 and a pointer variable `previous` which points to the previous node in the list, but since node 25 is the first node in the list this pointer is pointing to a `nullptr` signifying its the end of the list if you were traversing the linked list backwards. 

Node 100s `previous` pointer variable is pointing to node 25 and its `next` pointer variable is pointing to `nullptr` since its the end of the linked list.

4: Finally lets insert a node into the middle of the linked list and display the result.

```c++
#include "includes/LinkedList.h"


int main() {
    LinkedList linked_list {};

    linked_list.append(200);
    linked_list.prepend(25);
    linked_list.insert(100, 1);
    linked_list.display();

    return 0;
}
```

This will display `nullptr <- 25 <-> 100 <-> 200 -> nullptr`.

Lets have a look at a visual representation of the linked list. The blue boxes represent a node and the red arrows represent pointers.


![Linked List Diagram](images/linked_list_diagram.png?raw=true "Linked List")

In conclusion, you can see that linked lists can dynamically add nodes by creating a new node in the heap and pointing to it.

## Methods

### Append

#### Time Complexity

**O(n):** *where n is the size of the linked list.*

### Prepend

#### Time Complexity

**O(n):** *where n is the size of the linked list.*

### Insert

#### Time Complexity

**O(n):** *where n is the index of the node you want to insert into the linked list.*

### Remove

#### Time Complexity

**O(n):** *where n is the index of the node you want to remove from the linked list.*

### At

#### Time Complexity

**O(n):** *where n is the index of the node you want to retrieve from the linked list.*
