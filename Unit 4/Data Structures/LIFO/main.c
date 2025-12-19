#include <stdio.h>
#include "LIFO.h"

#define SIZE 5
Stack myStack;
int buffer1[SIZE];

int main(void)
{
    Stack_init(&myStack, buffer1, SIZE);
    printf("Stack initialized with size %d\n", SIZE);

    push(&myStack, 10);
    printf("Pushed 10 onto stack\n");
    push(&myStack, 20);
    printf("Pushed 20 onto stack\n");
    push(&myStack, 30);
    printf("Pushed 30 onto stack\n");
    push(&myStack, 40);
    printf("Pushed 40 onto stack\n");
    push(&myStack, 50);
    printf("Pushed 50 onto stack\n");
    push(&myStack, 60); // This should indicate that the stack is full
    int value;
    while (pop(&myStack, &value) != STACK_EMPTY)
    {
        printf("Popped value: %d\n", value);
    }
    return 0;
}