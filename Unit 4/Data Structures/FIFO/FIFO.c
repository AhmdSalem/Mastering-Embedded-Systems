#include "FIFO.h"
/*
Start
|
v
isFull? — yes -> print "Queue is Full!" -> End
|
no
|
front == -1? — yes -> front = 0
|
rear = (rear + 1) % SIZE

items[rear] = value

print "Enqueued value"

End


***************************************************************************************
Start
|
v
isEmpty? — yes -> print "Queue is Empty!" -> return -1
|
no
|
element = items[front]
front == rear? — yes -> front = -1, rear = -1 -> return element
|
no
|
front = (front + 1) % SIZE
return element
End

*/
FIFO_Status_t FIFO_init(FIFO_Buffer_t* fifo, int* buffer, unsigned int length)
{
    fifo->buffer = buffer;
    fifo->length = length;
    fifo->count = 0;
    fifo->front = -1;
    fifo->rear = -1;
    return FIFO_NO_ERROR;
}

FIFO_Status_t FIFO_enqueue(FIFO_Buffer_t* fifo, int item)
{
    if (FIFO_is_full(fifo) == FIFO_FULL)
    {
        printf("Queue is Full!\n");
        return FIFO_FULL;
    }

    if(fifo->front == -1)
    {
        fifo->front = 0;
    }

    fifo->rear = (fifo->rear + 1) % fifo->length;
    fifo->buffer[fifo->rear] = item;
    printf("Enqueued: %d\n", item);

    fifo->count++;
    return FIFO_NO_ERROR;
}

FIFO_Status_t FIFO_dequeue(FIFO_Buffer_t* fifo, int* item)
{
    if (FIFO_is_empty(fifo) == FIFO_EMPTY)
    {
        printf("Queue is Empty!\n");
        return FIFO_EMPTY;
    }

    *item = fifo->buffer[fifo->front];
    printf("Dequeued: %d\n", *item);

    if (fifo->front == fifo->rear)
    {
        fifo->front = -1;
        fifo->rear = -1;
    }
    else
    {
        fifo->front = (fifo->front + 1) % fifo->length;
    }

    fifo->count--;
    return FIFO_NO_ERROR;
}

FIFO_Status_t FIFO_is_full(FIFO_Buffer_t* fifo)
{
    if (fifo->count == fifo->length)
        return FIFO_FULL;
    return FIFO_NO_ERROR;
}

FIFO_Status_t FIFO_is_empty(FIFO_Buffer_t* fifo)
{
    if (fifo->count == 0)
        return FIFO_EMPTY;
    return FIFO_NO_ERROR;
}
