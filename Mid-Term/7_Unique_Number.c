#include <stdio.h>

int findUnique(int arr[], int size);

int main() {
    int my_array[] = {4, 1, 2, 1, 5, 4, 2}; // 5 is the unique number
    int n = sizeof(my_array) / sizeof(my_array[0]);

    int unique = findUnique(my_array, n);

    printf("The unique number is: %d\n", unique); // Output: The unique number is: 5

    return 0;
}


int findUnique(int arr[], int size) {
    int unique_num = 0; // Start with 0

    for (int i = 0; i < size; i++) {
        unique_num ^= arr[i];
    }

    return unique_num;
}
