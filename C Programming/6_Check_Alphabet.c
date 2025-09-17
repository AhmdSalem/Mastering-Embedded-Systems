/*
    This code prompts the user to enter any character,
    Then it checks whether the character is an alphabet or not.
    
    Author: Ahmed Salem
    Date: 17/9/2025
    
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("\nEnter any character: ");
    fflush(stdin);  // Clear input buffer
    fflush(stdout); // Clear output buffer

    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n'%c' is an Alphabet.\n", ch);
    }
    else
    {
        printf("\n'%c' is not an Alphabet.\n", ch);
    }

    printf("\n");
    return 0;
}