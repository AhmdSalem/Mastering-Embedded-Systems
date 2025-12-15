#include "FIFO.h"
#include <stdio.h>
#define SIZE 5

int buffer[SIZE];

int main(void)
{
    FIFO_Buffer_t fifo;

    FIFO_init(&fifo, buffer, SIZE);

    FIFO_enqueue(&fifo, 10);
    FIFO_enqueue(&fifo, 20);
    FIFO_enqueue(&fifo, 30);
    FIFO_enqueue(&fifo, 40);
    FIFO_enqueue(&fifo, 50);
    FIFO_enqueue(&fifo, 60); // This should indicate that the queue is full

    int item;
    FIFO_dequeue(&fifo, &item); // Should dequeue 10
    return 0;
}