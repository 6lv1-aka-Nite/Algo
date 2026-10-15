#include <stdio.h>

#include "lists.h"

typedef list queue;

queue enqueue(int x, queue q) {
    return add(x, q);
}

void peek(queue q) {
    printf("%i", q->head);
}

int dequeue() {
    return 0;
}