#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing double-digit numbers with different digits separated by commas and spaces
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n, m;

    for (n = 0; n <= 9; n++)
    {
        for (m = n + 1; m <= 9; m++)
        {
            putchar('0' + n);
            putchar('0' + m);

            if (n < 8 || m < 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}
