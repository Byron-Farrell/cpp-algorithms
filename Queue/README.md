# Queue

A queue is a data structure that inserts elements into the end of the queue and when an item is removed it is taken from the beginning of the array. This is also referred to zs first in first out (FIFO).

## Explanation

Inserting an element into an empty queue will insert it into the first element.

add `100` to queue: `[ 100 ]`
add '200` to queue: `[ 100, 200 ]`
add `300` to queue: `[ 100, 200, 300 ]`

Each element is inserted into the end of the array. 

Current queue: `[ 100, 200, 300 ]`

Pop element off queue: `[ 200, 300 ]`
Pop element off queue: `[ 300 ]`

Now let's look at what FIFO means. If we want to remove an element from the array it will remove the first element in the array which was 100, the *first element* added (first in) and the first element added is always removed (first out).

## Code Example

```c++
#include "Queue.h"


int main() {
    Queue queue {10};

    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);

    queue.display();

    queue.dequeue();
    queue.dequeue();


    return 0;
}
```
