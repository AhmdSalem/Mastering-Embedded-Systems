/*
    This code prompts the user to enter 2 numbers
    then it swaps their values without using a temporary variable.
    
    Author: Ahmed Salem
    Date: 17/9/2025
    
*/

#include <stdio.h>
int main()
{
    float num1, num2;

    printf("\nEnter value for num1: ");
    scanf("%f", &num1);

    printf("Enter value for num2: ");
    scanf("%f", &num2);

    // Swapping without a temporary variable
    num1 = num1 + num2; // Step 1: Add both numbers and store the result in num1
    num2 = num1 - num2; // Step 2: Subtract the new num1 by num2 to get the original num1
    num1 = num1 - num2; // Step 3: Subtract the new num1 by the new num2 to get the original num2

    printf("\nAfter swapping:\n");
    printf("Value of num1: %.2f\n", num1);
    printf("Value of num2: %.2f\n", num2);

    printf("\n");
    return 0;
}

