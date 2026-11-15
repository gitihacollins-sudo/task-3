#include <stdio.h>

#define MAX_TERMS 94

void printFibonacci(unsigned int remaining,
                    unsigned long long current,
                    unsigned long long next)
{
    if (remaining == 0) {
        return;
    }

    printf("%llu", current);
    if (remaining == 1) {
        printf("\n");
        return;
    }

    printf(" ");
    printFibonacci(remaining - 1, next, current + next);
}

int main(void)
{
    unsigned int terms;

    printf("Enter the number of terms (1 to %d): ", MAX_TERMS);
    if (scanf("%u", &terms) != 1 || terms < 1 || terms > MAX_TERMS) {
        printf("Invalid input. Enter a number from 1 to %d.\n", MAX_TERMS);
        return 1;
    }

    printFibonacci(terms, 0, 1);
    return 0;
}
