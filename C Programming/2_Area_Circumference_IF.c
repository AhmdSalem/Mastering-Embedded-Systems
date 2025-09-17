/*
    This code prompts the user to enter a circle raduis and choose to calculate
    Either its area or circumference
    
    Author: Ahmed Salem
    Date: 17/9/2025
    
*/

#include <stdio.h>

int main() {
    char choice;
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("\nEnter the Radius of the Circle: ");
    scanf("%f", &radius);

    printf("\nEnter 'A' to calculate Area or 'C' to calculate Circumference: ");
    fflush(stdin);  // Clear input buffer
    fflush(stdout); // Clear output buffer

    scanf("%c", &choice);
    
    if (choice == 'A' || choice == 'a') {
        area = PI * radius * radius;
        printf("\nArea of the Circle: %f\n", area);
    } else if (choice == 'C' || choice == 'c') {
        circumference = 2 * PI * radius;
        printf("\nCircumference of the Circle: %f\n", circumference);
    } else {
        printf("\nInvalid choice");
    }

    printf("\n");
    return 0;
}