#include <stdio.h>

unsigned long long sumNaturalNumbers(unsigned int n)
{
    if (n == 0) {
        return 0;
    }

    return n + sumNaturalNumbers(n - 1);
}

int main(void)
{
    unsigned int n;

    printf("Enter N (0 to 10000): ");
    if (scanf("%u", &n) != 1 || n > 10000) {
        printf("Invalid input. Enter a number from 0 to 10000.\n");
        return 1;
    }

    printf("Sum of the first %u natural numbers is %llu.\n",
           n, sumNaturalNumbers(n));
    return 0;
}
