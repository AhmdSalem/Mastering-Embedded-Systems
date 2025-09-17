/*
    This code prompts the user to enter 2 numbers
    then it performs the desired arithmetic operation
    (addition, subtraction, multiplication, or division)
    
    Author: Ahmed Salem
    Date: 17/9/2025
    
*/

#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("\nEnter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    fflush(stdin);  // Clear input buffer
    fflush(stdout); // Clear output buffer
    scanf("%c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nError: Invalid operator.\n");
            break;
    }

    printf("\n");
    return 0;
}