#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(void)
{
    unsigned int n;

    printf("Enter a non-negative integer (0 to 20): ");
    if (scanf("%u", &n) != 1 || n > 20) {
        printf("Invalid input. Enter a number from 0 to 20.\n");
        return 1;
    }

    printf("%u! = %llu\n", n, factorial(n));
    return 0;
}
