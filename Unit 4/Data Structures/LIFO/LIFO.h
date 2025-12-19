// Array Implementation of Stack (LIFO)

#ifndef LIFO_H
#define LIFO_H

#include <stdio.h>
typedef struct {
    int* data;
    int top;
    int size;
    int count;
} Stack;

typedef enum {
    STACK_NO_ERROR,
    STACK_FULL,
    STACK_EMPTY,
    STACK_NULL_POINTER
} Stack_Status_t;

Stack_Status_t Stack_init(Stack* stack, int* buffer, int size);
Stack_Status_t isEmpty(Stack* stack);
Stack_Status_t isFull(Stack* stack);
Stack_Status_t push(Stack* stack, int value);
Stack_Status_t pop(Stack* stack, int* value);
Stack_Status_t peek(Stack* stack, int* value);

#endif // LIFO_H