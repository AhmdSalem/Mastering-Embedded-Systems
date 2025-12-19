// Array Implementation of Stack (LIFO) using Static Memory Allocation
#include "LIFO.h"

Stack_Status_t Stack_init(Stack* stack, int* buffer, int size)
{
    stack->data = buffer;
    stack->size = size;
    stack->count = 0;
    stack->top = -1;
    return STACK_NO_ERROR;
}

Stack_Status_t isEmpty(Stack* stack)
{
    if(stack->count == 0)
    {
        return STACK_EMPTY;
    }
    return STACK_NO_ERROR;
}

Stack_Status_t isFull(Stack* stack)
{
    if(stack->count == stack->size)
    {
        return STACK_FULL;
    }
    return STACK_NO_ERROR;
}

Stack_Status_t push(Stack* stack, int value)
{
    if (isFull(stack) == STACK_FULL)
    {
        printf("Stack is Full!\n");
        return STACK_FULL;
    }
    stack->top++;
    stack->data[stack->top] = value;
    stack->count++;
    return STACK_NO_ERROR;
}
Stack_Status_t pop(Stack* stack, int* value)
{
    if (isEmpty(stack) == STACK_EMPTY)
    {
        printf("Stack is Empty!\n");
        return STACK_EMPTY;
    }
    *value = stack->data[stack->top];
    stack->top--;
    stack->count--;
    return STACK_NO_ERROR;
}
Stack_Status_t peek(Stack* stack, int* value)
{
    if (isEmpty(stack) == STACK_EMPTY)
    {
        printf("Stack is Empty!\n");
        return STACK_EMPTY;
    }
    *value = stack->data[stack->top];
    return STACK_NO_ERROR;
}