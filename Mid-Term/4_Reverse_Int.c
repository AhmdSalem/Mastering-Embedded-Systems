#include <stdio.h>

void print_arr_reversed(int* arr, int arr_size);

int main() {

    char buffer[1024] = {0};
    int numbers[1024] = {0};
    int valid_input = 0;
    
    printf("Please Enter a Positive Integer to be reversed, Press Enter to finish: ");
    fflush(stdin); fflush(stdout);

    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        for(int i = 0; buffer[i] != '\0' && buffer[i] != '\n'; i++)
        {
            if(buffer[i] >= '0' && buffer[i] <= '9')
            {
                numbers[valid_input] = buffer[i] - '0'; // a to i
                valid_input++;
            }
            else
            {
                printf("\n Ignoring Input (%c), Accepting Numbers Only", buffer[i]);
            }
        }
    }
    
    print_arr_reversed(numbers, valid_input);
    
    return 0;
}

void print_arr_reversed(int* arr, int arr_size)
{
    printf("\n Numbers Reversed: ");
    int end_digit = arr_size - 1;
    
    for(int i = end_digit; i >= 0; i--)
        printf(" %d", arr[i]);
    return;
}