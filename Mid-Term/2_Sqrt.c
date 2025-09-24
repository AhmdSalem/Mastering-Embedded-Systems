#include <stdio.h>

double sqrt(double number);

int main()
{
    double number, result;

    // Prompt user for input
    printf("Enter a number to find its square root: ");
    fflush(stdout); 
    scanf("%lf", &number);


    if (number < 0) {
        printf("Error: Cannot compute the square root of a negative number.\n");
        return 0; 
    }

    if (number == 0 || number == 1) {
        printf("\nThe square root of %.2f is %.2f\n\n", number, number);
        return 0; 
    }

    // Calculate the square root
    result = sqrt(number);

    // Output the result
    printf("The square root of %.2f is %.2f\n", number, result);

    return 0; 
}

double sqrt(double number) {
    double guess = number / 2.0; // Initial guess
    double epsilon = 0.00001; // Precision threshold
    // Iterate until the guess is close enough to the actual square root
    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0; // Update guess using Newton's method
    }

    return guess;
}
