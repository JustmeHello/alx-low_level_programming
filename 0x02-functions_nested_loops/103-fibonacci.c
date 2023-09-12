#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program calculates the sum of even Fibonacci numbers
 * not exceeding 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long fib[3];
    long sum = 0;

    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 0;

    while (fib[1] <= 4000000)
    {
        if (fib[1] % 2 == 0)
        {
            sum += fib[1];
        }
        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];
    }

    printf("%ld\n", sum);

    return 0;
}
