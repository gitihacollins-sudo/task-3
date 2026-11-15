#include <stdio.h>

#define MAX_POSITION 93

unsigned long long fibonacci(unsigned int position,
                             unsigned long long memo[],
                             int computed[])
{
    if (position <= 1) {
        return position;
    }

    if (!computed[position]) {
        memo[position] = fibonacci(position - 1, memo, computed)
                       + fibonacci(position - 2, memo, computed);
        computed[position] = 1;
    }

    return memo[position];
}

int main(void)
{
    unsigned int position;
    unsigned long long memo[MAX_POSITION + 1] = {0};
    int computed[MAX_POSITION + 1] = {0};

    printf("Enter the term position (0 to %d): ", MAX_POSITION);
    if (scanf("%u", &position) != 1 || position > MAX_POSITION) {
        printf("Invalid input. Enter a position from 0 to %d.\n",
               MAX_POSITION);
        return 1;
    }

    printf("Fibonacci term at position %u is %llu.\n",
           position, fibonacci(position, memo, computed));
    return 0;
}
