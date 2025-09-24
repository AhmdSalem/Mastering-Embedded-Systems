#include <stdio.h>
#include <stdbool.h>

void print_prime(int num1, int num2);

int main()
{
    int num1, num2;

    // Prompt user for input
    printf("Enter two numbers (space-separated) to find prime numbers between them: ");
    fflush(stdout);
    scanf("%d %d", &num1, &num2);

    // Validate input
    if (num1 < 0 || num2 < 0) {
        printf("Error: Numbers must be non-negative.\n");
        return 0;
    }

    // Print prime numbers between num1 and num2
    print_prime(num1, num2);

    return 0;
}

void print_prime(int num1, int num2)
{
    if (num1 > num2) {
        printf("Error: The first number must be less than or equal to the second number.\n");
        return;
    }

    bool found = false;

    for (int i = num1; i <= num2; i++) {
        if (i < 2) continue; // Skip numbers less than 2, 2 is not < 2
        bool is_prime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
            found = true;
        }
    }

    if (!found) {
        printf("No prime numbers found in the given range.");
    }
    
    printf("\n");
}
