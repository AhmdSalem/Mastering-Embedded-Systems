#include <stdio.h>
#include <string.h>

void reverse(char* start, char* end);
void reverseWords(char* str);
int main() {
    char my_string[] = "Ahmed Salem";

    printf("Original string: \"%s\"\n", my_string);

    reverseWords(my_string);

    printf("Reversed words:  \"%s\"\n", my_string); 

    return 0;
}

// Helper function to reverse a portion of a string from start to end
void reverse(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char* str) {
    if (str == NULL) return;

    size_t len = strlen(str);
    if (len == 0) return;           // nothing to do

    // reverse whole string without the Null Character, It stays at the end
    reverse(str, str + len - 1);

    // reverse each word back
    char* start = str;
    char* temp  = str;

    while (*temp) // while('0') == false;
    {
        if (*temp == ' ') {
            reverse(start, temp - 1);
            start = temp + 1; // Update start to the next word
        }
        temp++;
    }
    // reverse the last word
    reverse(start, temp - 1);
}

