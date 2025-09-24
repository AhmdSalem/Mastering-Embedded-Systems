#include <stdio.h>
#include <stdint.h>

unsigned popcount_u64(uint64_t num);

int main(void) 
{
    uint64_t user_input = 0;
    int result = 0;
    printf("Enter a Decimal number: ");
    fflush(stdin); fflush(stdout);

    scanf("%llu", &user_input);

    result = popcount_u64(user_input);

    printf("%llu has %u ones in binary\n", (unsigned long long)user_input, result);
    return 0;
}

unsigned popcount_u64(uint64_t num)
{
    unsigned cnt = 0;
    while (num) {
        num &= num - 1;  // clear lowest set bit
        cnt++;
    }
    return cnt;
}