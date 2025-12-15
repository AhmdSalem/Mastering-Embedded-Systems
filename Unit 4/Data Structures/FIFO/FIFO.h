// Array Implementation of Queue (FIFO)

#ifndef FIFO_H
#define FIFO_H

typedef struct FIFO_Buffer {
    unsigned int length;      // Maximum number of elements in the buffer
    unsigned int count;       // Current number of elements in the buffer
    unsigned int front;        // Index of the front element
    unsigned int rear;        // Index of the rear element
    int* buffer;              // Pointer to the buffer array
} FIFO_Buffer_t;

typedef enum {
    FIFO_NO_ERROR,
    FIFO_FULL,
    FIFO_EMPTY,
    FIFO_NULL
} FIFO_Status_t;

FIFO_Status_t FIFO_init(FIFO_Buffer_t* fifo, int* buffer, unsigned int length);
FIFO_Status_t FIFO_enqueue(FIFO_Buffer_t* fifo, int item);
FIFO_Status_t FIFO_dequeue(FIFO_Buffer_t* fifo, int* item);
FIFO_Status_t FIFO_is_full(FIFO_Buffer_t* fifo);
FIFO_Status_t FIFO_is_empty(FIFO_Buffer_t* fifo);

#endif // FIFO_H

