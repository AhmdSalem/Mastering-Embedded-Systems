/*
    This code prompts the user to enter the number of students,
    then it takes their marks as input and calculates the average marks.
    
    Author: Ahmed Salem
    Date: 17/9/2025
    
*/



#include <stdio.h>

int main()
{
    int num_students;
    float total_marks = 0.0, average;

    printf("\nEnter the number of students: ");

    fflush(stdin);  // Clear input buffer
    fflush(stdout); // Clear output buffer

    scanf("%d", &num_students);

    for (int i = 1; i <= num_students; i++)
    {
        float temp;
        printf("Enter marks for student %d: ", i);
        scanf("%f", &temp);
        total_marks += temp;
    }

    average = total_marks / num_students;
    printf("\nThe average marks of the class is: %.2f\n", average);
    printf("\n");
    return 0;
}