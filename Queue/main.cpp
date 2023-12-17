#include "Queue.h"


int main() {
    Queue queue {10};

    queue.display();

    queue.enqueue(100);
    queue.enqueue(200);

    queue.display();

    queue.dequeue();

    queue.enqueue(300);
    queue.enqueue(400);
    queue.enqueue(500);
    queue.enqueue(600);

    queue.display();
    
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    queue.display();

    queue.dequeue();
    queue.dequeue();

    queue.display();

    queue.dequeue();

    return 0;
}