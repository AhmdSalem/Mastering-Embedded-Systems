#include <stdio.h>

unsigned short sum_digits(unsigned int number);

int main() 
{
    unsigned int number;
    printf("Enter a positive integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%u", &number);
    
    unsigned short sum = sum_digits(number);
    printf("Sum of digits: %hu\n", sum);
    
    return 0;
}

unsigned short sum_digits(unsigned int number) 
{
    unsigned short sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
