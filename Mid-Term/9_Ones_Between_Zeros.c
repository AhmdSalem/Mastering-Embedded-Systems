#include <stdio.h>

int maxOnesBetweenZeros(const int arr[], int size);

int main() {
    int my_array[] = {1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    int max_ones = maxOnesBetweenZeros(my_array, n);

    printf("The original array is: 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1\n");
    printf("The max number of ones between two zeros is: %d\n", max_ones); 

    return 0;
}

int maxOnesBetweenZeros(const int arr[], int size) {
    int max_count = 0;
    int last_zero_idx = -1; // Use -1 to indicate that no zero has been found yet

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == 0) 
        {
            if (last_zero_idx != -1) // If we have already found a zero before this one
            {
                // Calculate the number of ones between the current zero and the last one
                int current_count = i - last_zero_idx - 1;

                if (current_count > max_count) 
                {
                    max_count = current_count;
                }
            }
            // Update the index of the most recently found zero
            last_zero_idx = i;
        }
    }

    return max_count;
}

