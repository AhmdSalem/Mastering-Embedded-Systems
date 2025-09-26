#include <stdio.h>

void sum_to_100(void);

int main(void)
{
    sum_to_100();
    return 0;
}

void sum_to_100(void)
{
    printf("\nSum from 1 to 100 is: %d", (100 + 1) * (100 / 2));
}
